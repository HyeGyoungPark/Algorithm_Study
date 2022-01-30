line = input()
while line != '#':
    A = 0
    B = 0
    a = 0
    b = 0
    for l in line:
        if l == 'A':
            a += 1
        else:
            b += 1
        if abs(a - b) >= 2 and (a >= 4 or b >= 4):
            if a > b:
                A += 1
            else:
                B += 1
            a = 0
            b = 0
    print("A", A, "B", B)
    line = input()
