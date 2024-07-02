#include<bits/stdc++.h>
using namespace std;

int m,n;

int unique_paths_with_obs(vector<vector<int>>&dp){
    // Time Complexity: O(n*m)
    // Space Complexity: O(n*m)
    for(int i=1; i<=m;i++){
        for(int j=1; j<=n; j++){
            if(dp[i][j] == -1) dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    return dp[m][n];
}

int main(){
    scanf("%d %d", &m, &n);
    vector<vector<int>> dp(m+1, vector<int>(n+1,0));
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            int x;
            scanf("%d",&x);
            if(x==0) dp[i][j]=-1;
        }
    }
    if(dp[1][1]!=-1){
        printf("0\n");
        return 0;
    }
    dp[1][1] = 1;
    printf("%d\n", unique_paths_with_obs(dp));
    return 0;
}