import sys
import time

def solve(s: str):
    if not s:
        print(0)
        return

    max_length = 1
    curr_length = 1

    for i in range(1, len(s)):
        if s[i] == s[i - 1]:
            curr_length += 1
        else:
            max_length = max(max_length, curr_length)
            curr_length = 1

    max_length = max(max_length, curr_length)
    print(max_length)

def main():
    start_time = time.time()

    try:
        sys.stdin = open('CSES.inp', 'r')
        sys.stdout = open('CSES.out', 'w')
    except FileNotFoundError:
        pass  # Fall back to default stdin/stdout

    s = input().strip()
    solve(s)

    elapsed = time.time() - start_time
    print(f"Time elapsed: {elapsed:.6f} s.", file=sys.stderr)

if __name__ == "__main__":
    main()
