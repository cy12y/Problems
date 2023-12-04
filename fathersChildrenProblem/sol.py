mp = {}
n = int(input())
for _ in range(n):
    s, s1 = input().split()
    if s1 not in mp:
        mp[s1] = 0
    mp[s1] += 1

q = int(input())
for _ in range(q):
    s = input()
    if s in mp:
        print(mp[s])
    else:
        print(0)
