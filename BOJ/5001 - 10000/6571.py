arr = [0, 1, 2]

for i in range(2, 1001):
    arr.append(arr[i - 1] + arr[i])

while 1:
    a, b = map(int, input().split())
    if a == 0 and b == 0:
        break
    cnt = 0
    for i in range(1, 1001):
        if a <= arr[i] and arr[i] <= b:
            cnt += 1
    print(cnt)
