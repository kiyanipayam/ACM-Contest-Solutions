
def main():
    n = int(input())
    i = 0
    while i < n:
        a,b = input().split()
        a = a[::-1]
        b = b[::-1]
        a = int(a)
        b = int(b)
        sum = a + b
        sum = str(sum)
        sum = sum[::-1]
        sum = int(sum)
        print(sum)
        i+=1
    return

main()