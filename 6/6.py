import re

p = re.compile('^[a-zA-Z0-9-.]+@[a-zA-Z0-9-.]+$')

s=int(input()) 
for i in range(0, s):
    ts=input()
    if p.match(ts) != None:
        print('Yes')
    else:
        print('No')