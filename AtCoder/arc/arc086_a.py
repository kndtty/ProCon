from collections import Counter


def main():
    N, K = map(int, input().split())
    A = [int(x) for x in input().split()]

    c = Counter()
    for a in A: c[a] += 1

    oc = sorted(c.items(), key=lambda x: x[1])
    res = 0
    for i in range(len(oc)-K):
        res += oc[i][1]

    print(res)


if __name__ == '__main__':
    main()
