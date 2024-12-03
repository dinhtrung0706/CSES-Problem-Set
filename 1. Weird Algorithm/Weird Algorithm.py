def solve(n):
    while n != 1:
        print(n, end=' ')
        if n % 2 == 0:
            n //= 2
        else:
            n = 3 * n + 1
    print(1)

def main():
    import sys
    input = sys.stdin.read
    n = int(input().strip())
    solve(n)

if __name__ == "__main__":
    main()