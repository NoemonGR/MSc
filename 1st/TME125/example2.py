import sympy as sp

v = sp.Matrix([1,2,3])
u = sp.Matrix([-1,5,3])

#norm of v
print("length of v:",v.norm())

#mporei na ginei k etsi alla deixeni mono ton arithmo (square root)
print("Length of v:",v.norm().evalf())

#to idio me megalitero
print("Length pf v:",sp.N(v.norm(),30))

#esoteriko ginomeno twn dio dianismatwn v & u
print(v.dot(u))

#orizousa me sinartisi d
A = sp.Matrix([[1,3],[7,12]])
print(A.det())