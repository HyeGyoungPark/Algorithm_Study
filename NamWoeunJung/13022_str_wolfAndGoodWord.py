a = input()
a = a.replace('fw','f w')
a = a.split(' ')

flag = 1

for i in a:
   num = len(i)%4
   if num == 0:
      cnt = len(i)//4
      wolf = 'w'*cnt + 'o'*cnt + 'l'*cnt + 'f'*cnt
      if i != wolf:
          flag = 0
   else:
      flag = 0
      break

print(flag)
