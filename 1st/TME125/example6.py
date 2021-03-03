import sympy as sp

#algorithmos Gauss

x,y,z,w,a=sp.symbols('x y z w a')

A = sp.Matrix([[1,2,3,a],[1,-1,5,1],[2,3,1,-1]])
B =sp.Matrix([1,2,3])

#vazei 1 pros 1 diladi to 1 tha mpei sto 1,2,3,a
E = A.row_join(B)
print("E=A B",E)

#ipovathmismeni klimakoti morfi
#pivot = igoumena stoixeia (dianisma)
#reduced = klimakoti
reducedE,pivots=E.rref()
print("reduced E:",reducedE)
print("pivots:", pivots)