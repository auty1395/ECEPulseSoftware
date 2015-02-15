#!/bin/python3

#number = int(input('Enter the number: '))
number = 4660046610375530309
print('Fibonacci is ', number) 
number = (number//10000000000)

p = (number//15)

sum = 60*p + (105*(p-1)*p)//2

for x in range((p*15+3), number+1, 3):
    sum += x

for x in range((p*15+5), number+1, 5):
    if (x%3) != 0:
        sum += x

print ('The sum is ', sum)
