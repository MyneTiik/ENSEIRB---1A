import sys

def triangle(n:int):
  '''affiche un triangle de '''
  j=-1
  for i in range(n):
    j+=2
    print(" "*(n-i) + "*"*j)
    
triangle(int(sys.argv[1])) 

