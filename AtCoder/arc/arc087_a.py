from collections import Counter


def main():
    N = int(input())
    c = Counter()
    for x in map(int, input().split()): c[x] += 1

    print(sum([v if v < k else v - k for k, v in c.items()]))


if __name__ == '__main__':
    main()
