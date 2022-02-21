while(True):
   a = int(input())
   if a == 0:
      break
   else:
      tallest = 0
      tall_stu = []

      for i in range(a):
         inp = input().split(' ')
         name = inp[0]
         height = float(inp[1])
         if height > tallest:
            tallest = height
            tall_stu = []
            tall_stu.append(name)
         elif height == tallest:
            tall_stu.append(name)

      for i in tall_stu:
         print(i, end= ' ')
