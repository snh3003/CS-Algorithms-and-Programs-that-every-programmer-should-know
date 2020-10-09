# -*- coding: utf-8 -*-
"""
Created on Thu Sep  5 15:38:51 2019

@author: R.SHANMUKH
"""

#2. Define a function to find sum of all odd numbers between 1 to n. 
def odd_numbers(n):
    s=0
    for i in range(1,n+1,2):
        s=s+i
    print(s)
x=int(input("Enter a number:"))
odd_numbers(x)
        