n = original = int(input())
cycle = 0

while 1:
    front = n % 10
    back = (n // 10 + front) % 10
    n = front * 10 + back
    cycle += 1
    
    if original == n:
        break

print(cycle)
