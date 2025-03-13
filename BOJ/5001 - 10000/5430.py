from collections import deque

for _ in range(int(input())):
    check = 1
    emp = 0
    d = deque()
    st = input()
    n = int(input())
    a = input()
    a = a[1:-1]
    if n == 0:
        ls = []
    else:
        ls = list(map(str, a.split(",")))

    for i in range(len(ls)):
        d.append(ls[i])
    for i in range(len(st)):
        if st[i] == "R":
            check ^= 1
        elif st[i] == "D":
            if len(d) == 0:
                emp = 1
            else:
                if not check:
                    d.pop()
                else:
                    d.popleft()
    d = list(d)
    if emp:
        print("error")
    else:
        if not check:
            d.reverse()
        print("[" + ",".join(d) + "]")
