#!/bin/python3

number = int(input('Enter the number: '))

number = (number//10000000)

p = (number//15)

sum = 60*p + (105*(p-1)*p)//2

for x in range((p*15+3), number, 3):
    sum += x

for x in range((p*15+5), number, 5):
    if sum %3 != 0:
        sum += x

print ('The sum is ', sum)
