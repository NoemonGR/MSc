# 10.Γράψτε ένα κώδικα σε Python ο οποίος να παίρνει σαν είσοδο ένα αρχείο ASCII κειμένου 
# και μετατρέπει τον κάθε χαρακτήρα του στον “κατοπτρικό” του χαρακτήρα ASCII. 
# Κατοπτρικοί χαρακτήρες είναι αυτοί των οποίων το άθροισμα είναι 128. 
# Εμφανίστε το κατοπτρικό κείμενο στο χρήστη με ανάποδη σειρά χαρακτήρων.


file = open('TME123/exercise 10/10asciitxt.txt', 'r') 

file_contents = file.read()

# Reverse File Contents
for line in file_contents[::-1]:
    for char in line:
        res=128-ord(char)  
        print(char," = ",ord(char),"| 128 - ",ord(char)," = ",res," Res: ",chr(res))

file.close()
