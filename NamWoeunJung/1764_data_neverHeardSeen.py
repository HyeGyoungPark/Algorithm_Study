from collections import defaultdict

a,b = map(int, input().split(' '))
people = defaultdict(int)

num = 0

while True:
   try:
      name = input()
      people[name] += 1
      num += 1

   except EOFError:
      ans = []
      for key, value in people.items():
         if value == 2:
            ans.append(key)
      ans.sort()
      print(len(ans))
      for i in ans:
         print(i)
      break
