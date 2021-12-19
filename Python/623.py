

def main():
    while True:
        try:
           a = int(input())
        except:
            break
        fact = 1
        for i in range(2,a+1):
            fact *= i
        print("{}!".format(a))
        print(fact)
    return

main()
