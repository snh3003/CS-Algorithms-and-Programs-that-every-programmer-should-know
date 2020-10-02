num=int(input("enter the decimal number:"))
binary=0
i=0
while(num!=0):
    r=num%2
    binary=binary+r*(pow(10,i))
    num=num//2
    i=i+1
print("the binary number is:",binary)
