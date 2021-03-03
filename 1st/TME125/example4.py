import sympy as sp

s =sp.symbols('x y z a')

f=s[0]+s[1]**2

g=s[1]**3-s[2]
print(f+g)

#san for loop, einai to range || # apo to 0 mexri to 14 --> x:15
s=sp.symbols('x13:15')
print(s)