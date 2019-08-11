def main():
    N = int(input())
    Nodes = []
    for i in range(N-1):
        u, v, w = map(int, input().split())
        if u > v: Nodes.append((v, u, w))
        else: Nodes.append((u, v, w))

    Nodes = sorted(Nodes, key=lambda x: x[0])
    bw = [True for x in range(N+1)]

    for n in Nodes:
        if (n[2] % 2 != 0) and (bw[n[0]] == bw[n[1]]):
                bw[n[1]] = not bw[n[0]]
    for x in bw[1:]:
        print(int(x))


if __name__ == '__main__':
    main()
