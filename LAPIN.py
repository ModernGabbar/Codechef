if __name__ == '__main__':
    for _ in range(int(input())):
        s = input()
        Len = len(s)
        d = {}
        for i in range(Len//2):
            if s[i] not in d.keys():
                d[s[i]] = 1
            else:
                d[s[i]] += 1
        k = Len//2
        if Len % 2:
            k += 1
        flag = 1
        for j in range(k, Len):
            if s[j] not in d.keys():
                flag = 0
                break
            elif d[s[j]] == 1:
                d.pop(s[j])
            else:
                d[s[j]] -= 1

        if not d:
            print("YES")
        else:
            print("NO")
