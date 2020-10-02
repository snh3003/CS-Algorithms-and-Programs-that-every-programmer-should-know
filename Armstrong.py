num=int(input("enter the number"))
sum = 0
temp = num
while temp > 0:
   d = temp % 10
   sum += d ** 3
   temp //= 10
if num == sum:
   print(num,"is an Armstrong number")
else:
   print(num,"is not an Armstrong number")
