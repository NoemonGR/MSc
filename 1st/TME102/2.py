# Στην αρχή πρέπει να γραφτεί η λέξη “var”
var = 'test'
print(var)

# Στη συνέχεια γράφονται όλα τα ονόματα των
# μεταβλητών του ίδιου τύπου χωρισμένα με κόμματα.
c=1     #int    
l=1.01  #float
q=1.1   #double
m='j'   #char

# z το πρώτο γράμμα του επιθέτου ενός εκ των
# φοιτητών/φοιτητριών της ομάδας στο ελληνικό αλφάβητο των μικρών γραμμάτων
z='α'

# ακολουθεί άνω και κάτω τελεία “:” και μετά γράφεται ο τύπος 
# των μεταβλητών (π.χ. integer) ακολουθούμενος από τον διαχωριστικό χαρακτήρα z
print("integer('c'):",c,z,"float('l'):",l,z,"double('q'):",q,z,"character('m'):",m,z)
print("****************************************************************************")

for i in range(1,5):
    f=input("Give me an integer || real || boolean || char: ")
    
    if f=='c':
        print('You Entered:',f,'&','Value is:',c)
    elif f=='l':
        print('You Entered:',f,'&','Value is:''Value:',l)
    elif f=='q':
        print('You Entered:',f,'&','Value is:''Value:',q)
    elif f=='m':
        print('You Entered:',f,'&','Value is:''Value:',m)   
    else:
        print("You entered wrong value, try again:")

# Στη συνέχεια υπάρχει η δυνατότητα να οριστούν άλλες μεταβλητές άλλου τύπου, δηλαδή να
# γραφούν άλλα ονόματα μεταβλητών χωρισμένα με κόμματα, μετά να ακολουθήσει άνω και κάτω
# τελεία “:” και να γραφεί άλλος τύπος μεταβλητής (π.χ., real). Η ίδια διαδικασία να γίνει για 4
# τύπους μεταβλητών: integer, real, boolean, char
integerxy=1
realxy=2
booleanxy=3
charxy=4
x='k'
y='t'

