s=input()
for i in range(0, len(s)):
    n=1
    for j in range(i+1, len(s)):
        if s[i] == s[j]:
            n+=1
    s1 = s[i + n:]
    if n > 1:
        s = s[:i+1]+str(n)+s1
        i+=2
        if i >= len(s):
            break
    else:
        s = s[:i+1]+s1
print(s)