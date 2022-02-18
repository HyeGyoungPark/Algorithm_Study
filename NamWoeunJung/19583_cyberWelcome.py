s_time, e_time, q_time = map(str,input().split(' '))
inp = []
out = []

while True:
   try:
      time,name = map(str,input().split(' '))
      if time <= s_time:
         inp.append(name)
      if time >= e_time and time <= q_time:
         if name in inp:
            out.append(name)
   except EOFError:
      count = len(set(out))
      print(count)
      break
