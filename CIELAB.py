def sub(n, m):
    x = str(n - m)
    for i in range(len(x)):
        if x[i] != '9':
            return x[:i] + str(int(x[i]) + 1) + x[i + 1:]


a, b = map(int, input().strip().split())
print(sub(a, b))
