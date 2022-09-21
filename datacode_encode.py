data = input()
p = input()
d = data + "".join(["0"] * (len(p) - 1))
s = d[: 5]
i = 5
while i <= len(d):
    xor = int(s, 2) ^ int(p, 2)
    rem = "{0:b}".format(xor)
    if len(rem) < len(p):
        s = rem + d[i: i + len(p) - len(rem)]
        i += len(p) - len(rem)
    elif len(rem) == len(p):
        s = rem
    
if len(s) < len(p):
    code = "0" * (len(p) - len(s) - 1) + s

print(code)

        
    
