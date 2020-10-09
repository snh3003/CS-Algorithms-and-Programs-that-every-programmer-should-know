temp=float(input("Give the temperature to be converted"))
ch=input(str("If you want to convert to Celesius type C or if you want to convert to Farenheit type F"))
if(ch=="C" or ch=="c"):
    new_temp=(temp-32)*(5/9)
elif(ch=="F" or ch=="f"):
    new_temp=(temp*(9/5))+32

print("The converted temperature is:",new_temp)

    

    
    
    

    
    
