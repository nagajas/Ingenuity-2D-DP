def unique_paths_space(m, n):
    dp = [1] * n
    for i in range(1, m):
        ndp = [1] * n
        for j in range(1, n):
            ndp[j] = ndp[j - 1] + dp[j]
        dp = ndp
    return dp[-1]

m,n = map(int,input().split())
print(unique_paths_space(m,n))