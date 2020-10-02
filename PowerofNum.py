def power(base,exp):
    if(exp==1):
        return(base)
    elif(exp==0):
        return 1
    if(exp>=1):
        return(base*power(base,exp-1))
base=int(input("Enter base: "))
exp=int(input("Enter exponential value: "))
print("Result:",power(base,exp))
