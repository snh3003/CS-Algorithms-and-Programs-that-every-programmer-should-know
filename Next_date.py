year=int(input("Enter the year"))
month=int(input("Enter the month number"))
day=int(input("Enter the day"))

if(day==31 and month==12):
    year+=1
    month=1
    day=1
    print(year,"-",month,"-",day,)
elif(day==31 and (month==1 or month==3 or month==5 or month==7 or month==8 or month==10)):
    month+=1
    day=1
    print(year,"-",month,"-",day,)
elif(day==28 and month==2):
    if((year%4==0) or (year%100==0 and year%400==0)):
        day=29
        print(year,"-",month,"-",day,)
    else:
        month=3
        day=1
        print(year,"-",month,"-",day,)
elif(day==30 and (month==4 or month==6 or month==9 or month==11)):
    month+=1
    day=1
    print(year,"-",month,"-",day,)
else:
    day+=1
    print(year,"-",month,"-",day,)
    


