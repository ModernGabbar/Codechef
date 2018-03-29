if __name__ == '__main__':
    for _ in range(int(input())):
        n, m = map(int, input().strip().split())
        jcomp = list(map(int, input().strip().split()))
        jincom = []
        for i in range(1, n + 1):
            if i not in jcomp:
                jincom.append(i)
        for j in range(0, len(jincom), 2):
            print(jincom[j], end=' ')
        print()
        for j in range(1, len(jincom), 2):
            print(jincom[j], end=' ')
        print()
