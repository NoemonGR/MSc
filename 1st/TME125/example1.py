import sympy as sp

#matrix = constructor
#mitra - pinakas
A = sp.Matrix([[1,2,3],[4,5,6]])
print(A)
# print("A:",A)

#print pou den einai midenikes
# A.print_nonzero()

#xekinaei apo to miden
# print(A[1,2])

#allazoume thn timh tou
# A[1,2] = 7
# print(A[1,2])

#diastasi enos pinaka #poses grames - poses stiles
# print(A.shape)
# print(A.rows,A.cols)

#kenos pinakas
B = sp.ones(2,3) #mono asous
C = sp.zeros(2,3) #mono midenika
# print("B:",B,"C:",C)

#vectors
V = sp.Matrix([[1],[2],[3]])
U = sp.Matrix([[-1,-3,4]])
# print("V:",V,"U:",U)

#A+B prepei na exoun tis idies diastasis
# print("A+B:",A+B)
# print("2*A:",2*A)

#anastrofos pinakas
AT=A.T
# print("Transpose of A:",AT)

#ipologismos ginomenou
G = A@AT
# print("G = A*AT:",G)

#tis prostetei
H = A.row_join(B)
# print("A B:",H)

#tis vazei dipla dipla
J = A.col_join(B)
# print(J)

#pernei thn 1 giati xekinaei apo to 0 (grami)
R0 = A.row(0)
# print("R0:",R0)

#column
C1 = A.col(1)
# print("C1:",C1)

#apla kanei copy
Antigrafo = A.copy()
# print(Antigrafo)

#kanei diliti ena row
Antigrafo.row_del(0)
# print(Antigrafo)

#kanei diliti ena column
Antigrafo2 = A.copy()
Antigrafo2.col_del(1)
print(Antigrafo2)