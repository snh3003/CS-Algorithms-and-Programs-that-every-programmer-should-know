def palind(n):
   rev=0
   while(n>0):
      dig=n%10
      rev=rev*10+dig
      n=n//10
   return rev      
n=int (input ("Enter number:"))
r=palind(n)
if(n==r):
   print ("The number is a palindrome!")
else:
   print ("The number isn't a palindrome!")
   