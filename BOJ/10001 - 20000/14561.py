import string

tmp = string.digits+string.ascii_lowercase
def conv(n, b) :
    q, r = divmod(n, b)
    if q == 0:
        return tmp[r] 
    else:
        return conv(q, b) + tmp[r]
# https://security-nanglam.tistory.com/508 에서 가져옴
    
for _ in range(int(input())):
  a,n=map(int,input().split())
  print(1 if conv(a,n) == conv(a,n)[::-1] else 0)