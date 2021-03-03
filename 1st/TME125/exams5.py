# Ασκηση. Να γραφεί πρόγραμμα Python για την επίλυση και διερεύνηση του παρακάτω γραμμικού
# συστήματος
# ax + y + z = 1
# x + ay + z = 2 − a
# x + y + az = 3a + 1
# όπου a ∈ R είναι παράμετρος.

#STYLIANOS THEODORIKAKOS
#ΜΠΠΛ20021

import sympy as sp

S = [x,y,z,a] = sp.symbols('x y z a')

# x   y   z   |
# a   1   1   |   1
# 1   a   1   |   2-a 
# 1   1   a   |   3*a+1

# Θεωρούμε την επαυξημένη μήτρα του συστήματος
# [Α|Β] όπου η μήτρα Α η μήτρα των συντελεστών
# και η Β των σταθερών.

A = sp.Matrix([[a,1,1],[1,a,1],[1,1,a]])
# print("A: ",A)
# print("\n\n**************************************")

B = sp.Matrix([1,2-a,3*a+1])
print("Det:\n")
# print("B: ",B)
# print("\n\n**************************************")

#Det
#βρίσκω διακρίνουσα
D = A.det()
print("D:",D)

#βρίσκω x,y,z
print("\n\nCramer: ")
#Cramer's
X = []
C = A.copy()
for i in range(0,len(B)):
    for j in range(0,len(B)):
        C[j,i]=B[j]
        if i>0:
            C[j,i-1]=A[j,i-1]
            print("A"+str(S[i])+":",C,
            "D"+str(S[i])+":",C.det())
            X.append(C.det()/D)
print("Solutions:",X)
#επειδη στην περιπτωση που το d=0, cramer δεν λειτουργει
#κανουμε gauss για τις περιπτωσεις a=1 k a=-2 που ειναι
#οι τιμες για τις οποιες D=a^3-3*a+2=0
print("\n\nGauss: ")

#Gauss
E=A.row_join(B)
Reduced, pivots = E.rref()
print("Reduced E:", Reduced)
print("Pivots1:",pivots)
#a=1
print("======================")
print("|-------For a=1-------|")
print("======================")
S = [x,y,z,a] = sp.symbols('x y z a')
A = sp.Matrix([[1,1,1],[1,1,1],[1,1,1]])
B = sp.Matrix([1,1,4])
print("Det: \n")
D = A.det()
print("D2:",D)

print("\n\nGauss: ")
E=A.row_join(B)
Reduced, pivots = E.rref()
print("Reduced2 E:", Reduced)
print("Pivots2:",pivots)    #εχει απειρες λυσεις

#a=2
print("======================")
print("|-------For a=-2-------|")
print("======================")
S = [x,y,z,a] = sp.symbols('x y z a')
A = sp.Matrix([[-2,1,1],[1,-2,1],[1,1,-2]])
B = sp.Matrix([1,4,-5])
print("\n\nDet: ")
D = A.det()
print("D3:",D)

#βρίσκω τα x,y,z

print("\n\nGauss: ")
E=A.row_join(B)
Reduced, pivots = E.rref()
print("Reduced2 E:", Reduced)
print("Pivots3:",pivots)    #εχει απειρες λυσεις

#περιπτωση που α=1
print("\n\n----------------------------------------------")
print("a=1 with linsolve: \n")
S = [x,y,z,a] = sp.symbols('x y z a')
A = sp.Matrix([[a,1,1],[1,a,1],[1,1,a]])
B = sp.Matrix([1,2-a,3*a+1])
X = sp. linsolve((A,B), [x, y, z])
print("General case:", X)
a = 1
A = sp.Matrix([[a,1,1],[1,a,1],[1,1,a]])
X = sp. linsolve((A,B), [x, y, z])
print("Case a =",a, X) #Fails to find solutions!

print("\n\n----------------------------------------------")
print("a=1 with linear system: \n")
S = [x,y,z,a] = sp.symbols('x y z a')
A = sp.Matrix([[a,1,1],[1,a,1],[1,1,a]])
E = A.row_join(B) 
X = sp.solve_linear_system(A.row_join(B), x, y, z)
print("General case:", X)
a = 1
A = sp.Matrix([[a,1,1],[1,a,1],[1,1,a]])
X = sp.solve_linear_system(A.row_join(B), x, y, z)
print("Case a=",a,X) #Fails to find solutions!

#περιπτωση που α=2
print("\n\n----------------------------------------------")
print("a=-2 with linsolve: \n")
S = [x,y,z,a] = sp.symbols('x y z a')
A = sp.Matrix([[a,1,1],[1,a,1],[1,1,a]])
B = sp.Matrix([1,2-a,3*a+1])
X = sp. linsolve((A,B), [x, y, z])
print("General case:", X)
a = 2
A = sp.Matrix([[a,1,1],[1,a,1],[1,1,a]])
X = sp. linsolve((A,B), [x, y, z])
print("Case a =",a, X) #αρα υπαρχει λύση με την linsolve, δεν χρειάζεται να πάρω περίπτωση με την linear

