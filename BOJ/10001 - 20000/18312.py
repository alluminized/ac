c = 0
n, k = map(int, input().split())

for s in range(60):
    for m in range(60):
        for h in range(n + 1):
            if str(k) in str(h).rjust(2, "0") + str(m).rjust(2, "0") + str(s).rjust(
                2, "0"
            ):
                c += 1

print(c)
