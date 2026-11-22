import os



'''
type(x) -> donne le type de 'x'

'...' in '???' -> si ... est présent dans ???

>>> print(x)
Coucou le monde
>>> x[7:9]  
'le'
>>> x[::-1]
'ednom el uocuoC'

UPPER -> EN FULL MAJ
>>> x.upper()
'COUCOU LE MONDE'
>>> 'mangé'.upper()
'MANGÉ'
>>> aaaa.count('aa')
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
NameError: name 'aaaa' is not defined
>>> 'aaaa'.count('aa')
2
>>> 'aaaa'.count('a') 
4
>>> x.split('o')
['C', 'uc', 'u le m', 'nde']

-------------------------------------------------

>>> x.split('o')
['C', 'uc', 'u le m', 'nde']
>>> '   texte avec des espaces  '.strip()
'texte avec des espaces'
>>> 'Foo'.rjust(10, ' ')
'       Foo'
>>> 'Foo'.rjust(10, 'a')
'aaaaaaaFoo'
>>> x.replace(' ', '-')
'Coucou-le-monde'
 
-------------------------------------------------

>>> "Mon nom est {} et j'ai {} ans".format(nom, age)

On peut faire des templates avce .format

-------------------------------------------------


>>> li=['vélo', 1, 'fin']
>>> li
['vélo', 1, 'fin']
>>> len(li)
3
>>> li[::-2]
['fin', 'vélo']
>>> li[::12]
['vélo']
>>> li[::-1] 
['fin', 1, 'vélo']
>>> li[::]  
['vélo', 1, 'fin']
>>> li[-1::]
['fin']
>>> li[1:]  
[1, 'fin']
>>> li.append('tset')
>>> li[1:]           
[1, 'fin', 'tset']
>>> li + 'foo'
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
TypeError: can only concatenate list (not "str") to list
>>> r= range(10)
>>> 5 in r
True
>>> 2 not in r
False
>>> 20 in r   
False
>>> len(r)
10
>>> r[-1] 
9
>>> r[0] 
0
>>> list(r)
[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
>>> r=range(10, 20, 3)
>>> list(r)
[10, 13, 16, 19]
>>> r.index(19)
3
>>> r.index(5) 
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
ValueError: 5 is not in range
>>> r[-1]     
19
>>> r[1] 
13
>>> r[::2]
range(10, 22, 6)
>>> list(r[::2])
[10, 16]
>>> s = {'Bordeaux', 'Marseille', 'Rennes'}

>>> t=('Bordeaux', 33)
>>> t[0], len(t), t[-1]
('Bordeaux', 2, 33)
>>> t[0]= 'Pessac'
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
TypeError: 'tuple' object does not support item assignment
>>> t + ('Nouvelle-Aquitaine',)
('Bordeaux', 33, 'Nouvelle-Aquitaine')
>>> t
('Bordeaux', 33)
>>> t + ('Nouvelle-Aquitaine') 
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
TypeError: can only concatenate tuple (not "str") to tuple

TUPLES UNIQUEMENT AVEC DES TUPLES DONC VIRGULE OBLIGATOIRE

------------------------------------------------------------

>>> li = ['vélo', 'train', 'voiture', 'bateau', 'camion']
>>> [len(li) for x in li]
[5, 5, 5, 5, 5]
>>> [len(x) for x in li] 
[4, 5, 7, 6, 6]
>>> sum([len(x) for x in li])
28
>>> [x for x in li if x[0]=="v"]
['vélo', 'voiture']
>>> {(x,len(x)) for x in li}
{('camion', 6), ('vélo', 4), ('bateau', 6), ('train', 5), ('voiture', 7)}
>>> {x: len(x) for x in li}
{'vélo': 4, 'train': 5, 'voiture': 7, 'bateau': 6, 'camion': 6}
>>> {x: len(x) for x in li if 'o' in x}
{'vélo': 4, 'voiture': 7, 'camion': 6}

Liste par compréhension


'''

def fibo(n):
    if n==0:
        return 0
    elif n==1:
        return 1
    elif isinstance(n, int):
        f0=0
        f1=1
        fn=0
        for x in range(2, n+1):
            fn = f0 + f1
            f1 = f0
            f0 = fn
        print(fn)

#fibo(2)
#fibo(7)
#fibo(8)

def fib_rec(n):
    assert n >= 0
    if n <= 1:
        return n
    return fib_rec(n-1) + fib_rec(n-2)
  
#print(fib_rec(7))
  

def TTDOC():
  numbers = ["first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth", "eleventh", "twelfth"]
  lyrics = ['And partridge in a pear tree', 'Two turtle doves', 'Three French hens', 'Four calling birds', 'Five gold rings', 'Six geese a-laying', 'Seven swans a-swimming', 'Eight maids a-milking', 'Nine ladies dancing', 'Ten lords a-leaping', 'Eleven pipers piping', 'Twelve drummers drumming']
  for i in range(12):
    print("On the {} day of Christmas,".format(numbers[i]))
    print("my true love sent to me")
    for x in range(i, -1, -1):
        print(lyrics[x])
    print('\n')
        
#TTDOC()
    
    
def moyenne(l: list) -> int:
  """Calcule la moyenne de la liste (l:list)->int"""
  s=0
  for note in l:
    s+=note
  return (s/len(l)) 

#print(moyenne([10, 8, 12.5, 18, 8.75]))

def syracuse(n):
  print(n)
  while n!=1:
    if n%2==0:
      n=n/2
    else:
      n=n*3+1
    print(n)
    
#syracuse(15)

def palindrome(mot: str) -> bool:
  '''Renvoie True ou False si la chaine de charactère est identique dans les deux sens de lecture (gauche <-> droite)'''
  for i in range(len(mot)):
    print(i)
    print(mot[i], mot[-(i+1)])
    if mot[i] != mot[-(i+1)]:
      return False
  return True

#print(palindrome('kayak'))
#print(palindrome('pomme'))
      
      
def filtre_paire(l: list) -> list:
  '''Récupère les mot possédant un nombre pair de lettres'''
  l2=[]
  for elt in l:
    if len(elt)%2==0:
      l2.append(elt)
  return l2

#print(filtre_paire(['arbre', 'vers', 'ville', 'vélo']))
