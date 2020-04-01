n = int(input(''))
it = 'it'
that = 'that'

if (n == 1):
    print("I hate it")

if (n > 1):
    for i in range(n):
        if (n % 2 == 0):
            print(f'I hate {that} I love {it}')
            break

        elif (n % 2 != 0):
            print(f'I hate {that} I love {that} I hate {it}')
            break
