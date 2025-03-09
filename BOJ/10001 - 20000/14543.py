import math

for N in range(1, int(input())+1):
  a = input()
  a = a.replace(" + ", ",")
  a = a.replace(" = ", ",")
  arr = a.split(",")
  print("Equation", N)
  if arr[0][:-1] == "0" and arr[1] != arr[2]:
    print("No solution.")
  elif arr[0][:-1] == "0" and arr[1] == arr[2]:
    print("More than one solution.")
  else:
    n = (int(arr[2]) - int(arr[1])) / int(arr[0][:-1])
    print(f"{n}".ljust(8, "0")[:8] if n >= 0 else f"{n}".ljust(9, "0")[:9])
  print()