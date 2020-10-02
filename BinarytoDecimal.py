num=int(input("enter the binary number"))
decimal=0
i=0
while(num!=0):
    r=num%10
    decimal=decimal+r*(pow(2,i))
    num=num//10
    i=i+1
print("the decimal number is:",decimal)
