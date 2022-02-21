
a = int(input())

for i in range(a):
   sound = input().split(' ')
   animal = []
   fox =  []

   while(True):
      others = input()
      if (others == 'what does the fox say?'):
         break;
      else:
         others = others.split(' ')
         animal.append(others[2])

   for i in sound:
      if i not in animal:
          print(i, end=' ')
