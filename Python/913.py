import sys
sys.stdin = open("in.txt", "r")
sys.stdout = open("out.txt", "w")

def main():
    while True:
        n = 0
        try:
            n = int(input())
        except:
            break
        n = n // 2 
        n = n + 1
        n = n * n
        n = 6 * n
        n = n - 9
        print(n)
    return

if __name__ == '__main__':
    main()