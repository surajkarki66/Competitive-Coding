sum = 0
i = 0
a = [x*3 for x in range(1000) if (x*3<1000)]
b = [y*5 for y in range(1000) if (y*5<1000)]


c = a + b
final = []
for i in c:
    if i not in final:
        final.append(i)

print(final)

for i in final:
    sum = sum + i

print(sum)