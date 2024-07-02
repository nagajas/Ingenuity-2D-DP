def combinations(n,r):
    pi = 1
    for i in range(1,r+1):
        pi *= (n-i+1)
        pi //= i
    return pi

def uniquePaths(m, n):
    return combinations(m+n-2, m-1)

m,n = map(int, input().split())
print(uniquePaths(m,n))
