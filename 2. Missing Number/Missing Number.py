def solve(n, nums):
    act_sum = sum(nums)
    print((n * (n + 1)) // 2 - act_sum)

def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    n = int(data[0])
    nums = list(map(int, data[1:]))
    solve(n, nums)

if __name__ == "__main__":
    main()