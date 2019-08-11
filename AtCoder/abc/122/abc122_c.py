def main():

    N, Q = map(int, input().split())
    S = input()

    sum = [0] * (N + 100)

    for i in range(N-1):
        if S[i] == 'A' and S[i+1] == 'C': sum[i+1] = sum[i] + 1
        else: sum[i+1] = sum[i]

    for i in range(Q):
        l, r = map(int, input().split())
        print(sum[r-1] - sum[l-1])


if __name__ == '__main__':
    main()
