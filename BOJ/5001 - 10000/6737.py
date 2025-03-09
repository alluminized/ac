import re
for i in range(int(input())):
  a=str(input().strip())
  mat = re.compile("^(?:[-+]?[0-9]+|[-+]?[0-9]+\.[0-9]+|[-+]?[0-9]+[eE][-+][0-9]+|[-+]?[0-9]+.[0-9]+[eE][-+][0-9]+)$")
  m = mat.match(a)
  print("LEGAL" if m else "ILLEGAL")