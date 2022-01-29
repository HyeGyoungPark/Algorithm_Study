k = int(input())
for x in range(k):
    n, m = map(int, input().split())
    friendship = [[0 for row in range(n + 1)] for col in range(n + 1)]
    for i in range(m):
        a, b = map(int, input().split())
        friendship[a][b] = True
        friendship[b][a] = True
    s = int(input())
    print("Data Set %d:" % (x + 1))
    for i in range(1, n + 1):
        if friendship[s][i]:
            print(i, end=' ')
    print()
    print() # 이거 한번 더 추가해줘야 출력형식과 일치한다고 뜹니다 



