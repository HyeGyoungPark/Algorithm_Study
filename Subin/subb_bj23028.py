n, a, b = map(int, input().split())
x = []
y = []
s = 8 - n                       # semester left
m_credit = 66 - a               # major credit left
mc = 0 if m_credit < 0 else m_credit // 3 + (1 if m_credit % 3 else 0)    # number of major class left
n_credit = 130 - b - mc * 3     # non-major credit left
nc = 0 if n_credit < 0 else n_credit // 3 + (1 if n_credit % 3 else 0)    # number of non-major class left

for i in range(10):
    major, non_major = map(int, input().split())
    x.append(major)
    y.append(non_major)


for i in range(s):
    class_limit = 6
    if mc < nc:
        t = min(6, y[i], nc)            # number of non-major class to take this semester
        nc -= t
        class_limit -= t
        t = min(class_limit, x[i], mc)  # number of major class to take this semester
        mc -= t
    else:
        t = min(6, x[i], mc)
        mc -= t
        class_limit -= t
        t = min(class_limit, y[i], nc)
        nc -= t
    if not mc and not nc:        # if there's no class left to take
        print("Nice")
        break
if mc or nc:
    print("Nae ga wae")
