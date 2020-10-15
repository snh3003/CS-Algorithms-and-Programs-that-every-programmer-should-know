def prime(n):
          for num in range (1, n + 1):
              if num > 1:
                 for i in range (2, num):
                        if (num % i) == 0:
                            break
                 else:
                    print(num)
n=int (input ("enter n value:"))                            
print ("Prime numbers between 1 and",n,"are:")
prime(n)   
