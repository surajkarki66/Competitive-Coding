k = int(input(''))
zero = 0
if k == 1:
    n = int(input(''))
    if (n == 1):
        print("HARD")

    if (n == 0):
        print("EASY")

if k > 1:
    n = []
    for i in range(k):
        n.append(int(input('')))

    for i in n:
        if i == 1:
            print("HARD")
            break
        if i == 0:
            zero += 1

            if (zero == len(n)):
                print("EASY")
