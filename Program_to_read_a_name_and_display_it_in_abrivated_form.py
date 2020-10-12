# -*- coding: utf-8 -*-
"""
Created on Thu Oct 10 14:40:15 2019

@author: R.SHANMUKH
"""

#1.	Write a program to read a name and display it in abbreviated form ,
# Like Sri Ramaswami Memorial University should be displayed as SRM University
abbrevated=str(input("Enter the abrivated word:"))
short=abbrevated[0]
for i in range(len(abbrevated)):
    if(abbrevated[i]==" "):
        short+=abbrevated[i+1]
print("short form of given abbrevated word is",short)




#using functions
def abbrevation(a):
    s=a.split()
    short=""
    for i in range(len(s)-1):
        p=s[i]
        short+=(p[0].upper()+".")
    short+=s[-1].title()
    return short
x=str(input("Enter the abbrevated word:"))
print(abbrevation(x))


#using loop
a=str(input("Enter the abbrevated word:"))
b=a.split()
short=""
for i in range(len(b)-1):
    x=b[i][0].upper()+"."
    short+=x
print(short+b[-1].title())
         
