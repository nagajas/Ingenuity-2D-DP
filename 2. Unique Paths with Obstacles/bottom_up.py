m,n = map(int, input().split())
obstacleGrid = []
for i in range(m):
    obstacleGrid.append(list(map(int, input().split())))

if obstacleGrid[0][0] == 1:
    print(0)
    exit()

dp = [[0 for _ in range(n)] for _ in range(m)]
dp[0][0] = 1 if obstacleGrid[0][0] == 0 else 0

for i in range(m):
    for j in range(n):
        if obstacleGrid[i][j] == 1:
            dp[i][j] = 0
        else:
            if i > 0:
                dp[i][j] += dp[i-1][j]
            if j > 0:
                dp[i][j] += dp[i][j-1]

print(dp[m-1][n-1])