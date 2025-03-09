a=input()
b=input()
if (a == "null"):
  print("NullPointerException\nNullPointerException")
  exit(0)
print("true" if a == b else "false")
if (b == "null"):
  print("false")
  exit(0)
print("true" if a.upper() == b.upper() else "false")