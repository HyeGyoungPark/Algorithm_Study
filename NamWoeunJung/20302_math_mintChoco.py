n = int(input())
calculate = input().split(' ')


fac_mul = []
fac_div = []

def fact1(x):
   d = 2
   while d <= x:
      if x%d == 0:
        fac_mul.append(d)
        fact1(x/d)
        break
      else:
        d += 1

def fact2(x):
   d = 2
   while d <= x:
      if x%d == 0:
        fac_div.append(d)
        fact2(x/d)
        break
      else:
        d += 1

mul = [fact1(int(calculate[0])), ]
div = []

for i in range(1,n):
   if (calculate[2*i-1] == '*'):
      fact1(abs(int(calculate[2*i])))
   elif (calculate[2*i-1] == '/'):
      fact2(abs(int(calculate[2*i])))
   else: break

flag = 1

for i in fac_div:
   if i in fac_mul:
      fac_mul.remove(i)
   else:
      flag = 0
      break

if (flag): print("mint chocolate")
else: print("toothpaste")
