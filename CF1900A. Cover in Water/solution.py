import sys
input = sys.stdin.readline

for _ in range(int(input())):
    n = int(input())
    s = input().strip()
    
    if "..." in s:
        print(2)
    else:
        print(s.count('.'))
