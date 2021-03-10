# Μια γέφυρα παλαιάς κατασκευής εξυπηρετεί την διέλευση των αυτοκινήτων των κατοίκων
# της περιοχής μεταξύ των δύο άκρων της (L) και (R). Η διέλευση ενός οχήματος από την
# γέφυρα είναι δυνατή και προς τις δύο δυνατές κατευθύνσεις. Συγκεκριμένα, ένα όχημα
# μπορεί να διασχίσει την γέφυρα με κατεύθυνση προς τα δεξιά (Right Direction) κινούμενο
# από το άκρο (L) προς το άκρο (R), καθώς και με κατεύθυνση προς τα αριστερά (Left Direction)
# κινούμενο από το άκρο (R) προς το άκρο (L). Λόγω της παλαιότητας της γέφυρας δεν είναι
# δυνατή η ταυτόχρονη διάσχισή της και προς τις δύο κατευθύνσεις. Επιπλέον, δεν
# επιτρέπεται η ταυτόχρονη διάσχιση της γέφυρας (πάντα προς την ίδια κατεύθυνση) σε 
# περισσότερα από τρία οχήματα. Να μοντελοποιήσετε το παραπάνω πρόβλημα στο
# προγραμματιστικό περιβάλλον της Python αποφεύγοντας την ανάδυση συνθηκών
# λιμοκτονίας μεταξύ των διεργασιών που προσομοιώνουν την διέλευση των οχημάτων από
# την γέφυρα. 

#προσομοίωση νήματος
from threading import Lock, Thread, Semaphore
#για να μας δίνει μηνύματα για κάθε διεργασία
import logging
#καταστασεις απενεργοποίσης διεργασιών
import time
#Generate pseudo-random numbers
import random

class Bridge:
    def __init__(self):
        #Initialize a list for threads.
        self.cars_left=[]
        self.cars_right=[]
        self.cars_counter=3
        self.bridge_lock=Semaphore()
        self.counter_lock=Semaphore()
        self.threads=[]
        log_format = "%(asctime)s: %(message)s"
        logging.basicConfig(format=log_format, level=logging.INFO, datefmt="%H:%M:%S")

    def left_thread(self, min_cars, max_cars, min_t, max_t):
            lane = "Left"
            while True:
                self.arrive_bridge(min_cars, max_cars, min_t, max_t)
                self.bridge_lock.acquire()
                self.bridge_lock.release()
                logging.info("Left...")

                temp = self.cross_bridge(self.cars_left, lane, min_t, max_t)
                self.cars_left = temp

    def right_thread(self, min_cars, max_cars, min_t, max_t):
        lane = "Right"
        while True:
            self.arrive_bridge(min_cars, max_cars, min_t, max_t)
            self.bridge_lock.acquire()
            logging.info("Right...")
            temp = self.cross_bridge(self.cars_right, lane, min_t, max_t)
            self.cars_right = temp
            self.bridge_lock.release()

    def create_threads(self, min_cars, max_cars, min_t, max_t):
        # Firstly, create the reader threads.
        for _ in self.cars_left:
            thread = Thread(target=self.left_thread, args=[min_cars, max_cars, min_t, max_t])
            self.thread.append(thread)
        for _ in self.cars_right:
            thread = Thread(target=self.right_thread, args=[min_cars, max_cars, min_t, max_t])
            self.thread.append(thread)

    def start_threads(self):
        for thread in self.thread:
            thread.start()

    def arrive_bridge(self, min_cars, max_cars, min_t, max_t):
        n = [self.cars_left, self.cars_right]
        logging.info('Arriving')
        for i in range(random.randint(min_cars, max_cars)):
            self.t_arrive(min_t, max_t)
            choice = random.choice(n)
            choice.append(random.randint(1, 2))

    def cross_bridge(self, car_list, lane, min_t, max_t):
        if car_list != 0 and self.cars_counter != 0:
            for i in car_list:
                self.cars_counter -= 1
                if len(car_list) != 0:
                    logging.info(f"Car from the {lane} lane is crossing the bridge")
                    self.exit_bridge(car_list, min_t, max_t)
                else:
                    break
                if self.cars_counter == 0:
                    logging.info(f"3 Cars from the {lane} lane have crossed")
                    self.cars_counter = 3
                    return car_list

        else:
            self.cars_counter = 3
            logging.info("All cars waiting on that lane have passed")
            return car_list
        return car_list

    def t_arrive(self, min_t, max_t):
        return time.sleep(random.randint(min_t, max_t))

    def exit_bridge(self, car_list, min_t, max_t):
        time.sleep(random.randint(min_t, max_t))
        try:
            car_list.pop()
        except:
            print("No cars waiting")


def main():
    min_cars = 1
    max_cars = 12
    min_t = 1
    max_t = 2
    bridge = Bridge()
    bridge.arrive_bridge(min_cars, max_cars, min_t, max_t)
    bridge.create_threads(min_cars, max_cars, min_t, max_t)
    bridge.start_threads()


if __name__ == '__main__':
    main()        