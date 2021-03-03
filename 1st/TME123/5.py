# 5.Γράψτε ένα κώδικα σε Python ο οποίος να παίρνει τις διαστάσεις ενός ορθογωνίου και θα φτιάχνει μέσα από λίστες τον αντίστοιχο πίνακα. 
# Στην συνέχεια θα βρίσκει το πλήθος των θέσεων και γεμίζει στην τύχη τις μισές με S και τις μισές με O (στρογγυλοποίηση προς τα πάνω). 
# Σκοπός είναι να μετρήσετε πόσες φορές εμφανίζεται το SOS οριζόντια, κάθετα, και διαγώνια. 
# Το πρόγραμμα επαναλλαμβάνεται 100 φορές (για τις ίδιες διαστάσεις) και επιστρέφει τον μέσο όρο των τριάδων SOS.


import random

#Calculate Horizontally
def horizontally(d,hx,hy):
  horizontallyCount=0
  for i in range(hx):
    #bug fix
    for j in range(hy-2):
      if d[i][j]=='S':
        if d[i][j+1]=='O':
          if d[i][j+2]=='S':
            horizontallyCount+=1
  return horizontallyCount

#Calculate Vertically
def vertically(d,vx,vy):
  verticallyCount=0
  #bug fix
  for i in range(vx-2):
    for j in range(vy):
      if d[i][j]=='S':
        if d[i+1][j]=='O':
          if d[i+2][j]=='S':
            verticallyCount+=1
  return verticallyCount

#Calculate Diagonally
def diagonally(d,dx,dy):
  diagonallyCount=0
  for i in range(dx-2):
    for j in range(dy-2):
      if d[i][j]=='S':
        if d[i+1][j+1]=='O':
          if d[i+2][j+1]=='S':
            diagonallyCount+=1
  return diagonallyCount

x = int(input("Horizontally Dimensions: "))
y = int(input("Vertically Dimensions: "))

sum = 0
#average
mo = 0

for times in range(1,101):
  print("Times tryed: ",times,"\n")
  t=x*y
  sos=[]
  #add S
  for i in range(0,int(t/2)):
    sos.append('S')
  #add O  
  for i in range(int(t/2),int(t)):
    sos.append('O')

  #shuffle table
  random.shuffle(sos)
  table=[]
  for i in range(x):
    row=[]
    for j in range(y):
      #sos to row
      row.append(sos.pop())
    table.append(row)

  #print sos table
  for i in table:
    print(i)

  print("\n")

  hSum=(horizontally(table,x,y))
  vSum=(vertically(table,x,y))
  dSum=(diagonally(table,x,y))
  #Calculate all 'SOS'
  tSum= hSum+vSum+dSum

  print("Horizontally SOS: ",hSum)
  print("Vertically SOS: ",vSum)
  print("Diagonally SOS: ",dSum)
  print("Total SOS: ",tSum, "\n")
  #sum up
  sum += tSum
  #average
  mo = sum/100

print("Average Times Found SOS: ", mo)