ls = []
while 1:
    a = input()
    if a == "END":
        exit(0)
    l = a.split()
    for i in range(len(l)):
        if l[i] not in ls:
            ls.append(l[i])
    for i in range(len(ls)):
        print(ls[i], end=" ")
    print()
