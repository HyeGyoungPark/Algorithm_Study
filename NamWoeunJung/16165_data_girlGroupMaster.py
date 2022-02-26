n,m = map(int, input().split(' '))

girl = {}

for i in range(n):
   team = input()
   people =  int(input())
   for j in range(people):
      girl[input()] = team


for i in range(m):
   name = input()
   kind = int(input())
   if kind == 0:
      girl_list = []
      for key, value in girl.items():
         if value == name:
            girl_list.append(key)
      girl_list.sort()
      for j in girl_list:
         print(j)
   else:
      print(girl[name])
