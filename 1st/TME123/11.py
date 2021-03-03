# 11.Γράψτε ένα κώδικα σε Python ο οποίος να παίρνει σαν είσοδο ένα αρχείο ASCII κειμένου, 
# το χωρίζει σε λέξεις και εμφανίζει τα ζευγάρια λέξεων όπου το συνολικό τους μήκος χαρακτήρων είναι 20. 
# Κάθε ζευγάρι φεύγει από το σύνολο και το πρόγραμμα τελειώνει όταν εξαντληθούν τα ζευγάρια.

#open file & read
file = open('TME123/exercise 11/11asciitxt.txt', 'r') 
file_contents = file.read()

# removes outside whitespace/characters
fcon = file_contents.strip()
#splits every ' ' (space) in the string to a list
words = fcon.split(' ')

file.close()

#prevent the repetition of the same word in a combination
def disjoint(a, b):
    for i in a:
        if i in b:
            return False
    return True

#r[i] represents all possible combinations of words of length i
r = [[] for _ in range(21)]
# enumerate function in loops
for i, w in enumerate(words):
    r[len(w)].append([i])

for i in range(21):
    for j in range(i):
        for a in r[j]:
            for b in r[i - j]:
                if disjoint(a, b):
                    r[i].append(a + b)
                 

answer = [" ".join([words[i] for i in s]) for s in r[20]]
print(answer)