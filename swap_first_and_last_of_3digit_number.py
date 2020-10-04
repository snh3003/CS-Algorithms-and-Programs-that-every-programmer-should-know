n=int(input("Enter a number:"))
while(n>100):
    o=n%10
    n=n//10
    t=n%10
    h=n//10
print(str(o)+str(t)+str(h))