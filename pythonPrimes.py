# -*- coding: utf-8 -*-
"""
Created on Sat Mar 17 20:19:42 2018

Copyright James Robinson 2018
All Rights Reserved
"""

import math
#from microbit import *

file = 

def isPrime(num):
    
    if num < 2:
        return False

    for i in range(2, int(math.sqrt(num)) + 1):    
        if num % i == 0:
            return False
        
    return True

i = 1
x = 1

while 1 < 2:
    
    if isPrime(i):
        x = 1
        if x % 1 == 0:
            #display.scroll(str(i))
            print(str(i))
    i = i + 1
    #x = x + 1
