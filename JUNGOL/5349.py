ls = []
a = list(map(str, input().split()))
for i in range(len(a)):
    ls.append(a[i]) if i % 2 else None
ls = ls[::-1]
for _ in range(len(ls)):
    print(ls[_], end=" ")
