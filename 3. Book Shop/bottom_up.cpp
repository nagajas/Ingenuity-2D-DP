#include<bits/stdc++.h>
using namespace std;

int max_pages(int M, vector<int>prices, vector<int>pages){
    // Time Complexity: O(n*x)
    // Space Complexity: O(n*x)
    int n = prices.size();
    vector<vector<int> > dp(n+1,vector<int>(M+1,0));
    for(int item=1;item<=n;item++){
        for(int money=1; money<=M; money++){
            if(money >= prices[item-1]) dp[item][money] = max(dp[item-1][money-prices[item-1]]+pages[item-1], dp[item-1][money]);
            else dp[item][money] = dp[item-1][money];
        }
    }
    return dp[n][M];
}

int main(){
    int n, x;
    scanf("%d %d",&n,&x);
    vector<int> prices(n),pages(n);
    for(int i=0;i<n;i++) scanf("%d",&prices[i]);
    for(int i=0;i<n;i++) scanf("%d",&pages[i]);
    printf("%d\n",max_pages(x, prices,pages));
    return 0;
}