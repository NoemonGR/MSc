import sympy as sp

x,y,z,a=sp.symbols('x y z a')

# x=1
a=sp.Matrix([[1,x,x**2],[1,y,y**2],[1,z,z**2]])

#to x den allazei ston pinaka || den mpainei || prepei na mpei panw apo ton pinaka san thn C
# x=1

print(a)

print("Det(a):",a.det())
print("Det(A)",sp.factor(a.det()))