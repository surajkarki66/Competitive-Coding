a = 1
b = 2
i = 2
sum = b
while(i<4000000):
    c = a + b
    a  = b
    b = c
    if c >4000000:
        break
    if (c % 2 == 0):
       # print(c)
        sum = sum + c

   


print(sum)