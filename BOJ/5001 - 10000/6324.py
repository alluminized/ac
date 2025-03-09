for N in range(1,int(input())+1):
  a=input()
  arr = a[a.find("://")+3:].split("/")
  prot = a[:a.find("://")]
  po = "<default>"
  pa = "<default>"

  if ':' in arr[0]:
    po = arr[0][arr[0].find(":")+1:]

  if len(arr) == 1:
    pa = "<default>"
  elif len(arr) == 2:
    pa = arr[1]
  else:
    pa = ""
    for i in range(1, len(arr)):
      pa += arr[i] + "/"
    pa = pa[:-1]

  #print(arr)
  print("URL #", N, sep="")
  print("Protocol =", prot)
  if ':' in arr[0]:
    print("Host     =", arr[0].split(":")[0])
  else:
    print("Host     =", arr[0])
  print("Port     =", po)
  print("Path     =", pa)
  print()