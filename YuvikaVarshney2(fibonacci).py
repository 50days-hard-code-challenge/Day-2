def fact(n):
    if(n==1):
        return 1
    elif(n==2):
        return 1
    else:
        return fact(n-1)+fact(n-2)
x=int(input())
if(x>0):
    a=fact(x)
    print(a)
"""x=int(input())
a=int(1)
b=int(1)
if(x==1):
    c=1
elif(x==2):
    c=1
else:
    for i in range (3,x+1):
        c=a+b
        a=b
        b=c
print(c)"""
