def main():
    S = input()
    mae = int(S[:2])
    ushiro = int(S[2:])
    if (mae == 0 or mae > 12) and (ushiro == 0 or ushiro > 12): print('NA')
    elif (mae == 0 or mae > 12): print('YYMM')
    elif (ushiro == 0 or ushiro > 12): print('MMYY')
    else: print('AMBIGuOUS)



if __name__ == '__main__':
    main()
