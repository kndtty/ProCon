from collections import defaultdict


def main():
    D = defaultdict(list)
    names = set()
    N = int(input())
    for i in range(1, N+1):
        inp = input().split()
        s = inp[0]
        p = inp[1]
        names.add(s)
        D[s].append((p, i))
    names = sorted(list(names))
    for n in names:
        D[n].sort(key=lambda x: int(x[0]), reverse=True)
        for x in D[n]: print(x[1])


if __name__ == '__main__':
    main()
