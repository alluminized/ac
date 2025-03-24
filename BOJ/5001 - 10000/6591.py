while 1:
    c = 1
    d = 1
    a, b = map(int, input().split())
    if a == 0:
        break
    for i in range(a, max(b, a - b), -1):
        c *= i
    for i in range(min(b, a - b), 0, -1):
        d *= i
    print(c // d)
