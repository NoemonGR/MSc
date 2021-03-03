import sympy as sp

#orizo simvola
x,y,z,a = sp.symbols('x y z a')

#orizo parastaseis
f=x+y
g=x-y
h=f+g
print(h)

#dinami (simvolizetai me diplo asteraki)
print(sp.expand(f*g))

