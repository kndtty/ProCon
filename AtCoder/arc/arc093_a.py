def main():
    N = int(input())
    A = [0] + list(map(int, input().split())) + [0]

    sum = 0
    for i in range(1, N+2): sum += abs(A[i] - A[i-1])

    for i in range(1, N+1):
        if A[i-1] <= A[i] <= A[i+1]: print(sum)
        elif A[i-1] >= A[i] >= A[i+1]: print(sum)
        elif A[i-1] < A[i+1] < A[i] or A[i-1] > A[i+1] > A[i]: print(sum - abs(A[i+1] - A[i]) * 2)
        else: print(sum - abs(A[i] - A[i-1]) * 2)


if __name__ == '__main__':
    main()
