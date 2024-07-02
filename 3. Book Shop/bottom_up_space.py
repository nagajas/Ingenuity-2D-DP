n,x = map(int,input().split())
prices = list(map(int,input().split()))
pages = list(map(int,input().split()))
 
if x>=sum(prices):
    print(sum(pages))
    exit()
 
 
dp = [0]*(x+1)
for price, page in sorted(zip(prices,pages)):
    for money in range(x,price-1,-1):
        dp[money] = max(dp[money],dp[money-price]+page)
        
print(dp[-1])