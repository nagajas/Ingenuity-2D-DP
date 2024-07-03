#include<bits/stdc++.h>
using namespace std;

int n,g;
vector<int> price, weight;
vector<vector<int>> dp;

void knapsack(int n, int w) {
    dp.assign(n + 1, vector<int>(w + 1, 0));
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= w; j++) {
            if(weight[i - 1] <= j) {
                dp[i][j] = max(dp[i - 1][j], price[i - 1] + dp[i - 1][j - weight[i - 1]]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
}

int knapsack_query(int w) {
    return dp[price.size()][w];
}

int main() {
    int tc;
    scanf("%d", &tc);
    while(tc--) {
        scanf("%d", &n);
        price.resize(n);
        weight.resize(n);
        for(int i = 0; i < n; i++) {
            scanf("%d %d", &price[i], &weight[i]);
        }
        knapsack(n, 30);
        int ans = 0;
        scanf("%d", &g);
        while(g--) {
            int mw;
            scanf("%d", &mw);
            ans += knapsack_query(mw);
        }
        printf("%d\n", ans);
    }
    return 0;
}