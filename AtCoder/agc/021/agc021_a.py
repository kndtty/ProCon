def main():
    N = input()
    tmp = 10 ** (len(N) - 1) - 1
    res_ = int(tmp)
    if tmp == 0:
        print(N)
        return

    for i in range(1, 10):
        if int(str(i) + str(tmp)) <= int(N):
            res_ = int(str(i) + str(tmp))

    res = 0
    for x in str(res_):
        res += int(x)
    print(res)


if __name__ == '__main__':
    main()
