s=input()
i=1
while i < len(s):
   if str.isdigit(s[i]):
       s1=s[:i-1]
       s2=s[i+1:]
       n=int(s[i])
       s=s1+s[i-1]*n+s2
       i+=n
   else:
       i+=1
print(s)