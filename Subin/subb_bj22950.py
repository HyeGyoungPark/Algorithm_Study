n = int(input())
m = input()
k = int(input())

if '1' not in m or k == 0:  # handle exception first to reduce time
    print("YES")
    exit(0)

i = 0   # 2's index (2^i)
while i < k:
    if m[len(m) - 1 - i] == '1':   # if there's '1' in index from 2^0 to 2^(n-1)
        print("NO")
        break
    i += 1

if i >= k:
    print("YES")
