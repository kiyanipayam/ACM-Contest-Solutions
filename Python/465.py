def main():
    while True:
        try:
            s = input()
        except:
            break
        n,oper,m = s.split(' ')
        n = int(n)
        m = int(m)
        sum = 0
        print(s)
        if oper == '+':
            sum = n + m
        elif oper == '*':
            sum = n * m
        if n > 2147483647:
            print('first number too big')
        if m > 2147483647:
            print('second number too big')
        if sum > 2147483647:
            print('result too big')

    return

main()