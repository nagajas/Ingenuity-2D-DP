#include<bits/stdc++.h>
using namespace std;

int unique_paths(int n, int m){
    // Time Complexity: O(n*m)
    // Space Complexity: O(n*m)
    vector<vector<int>> dp(m+1, vector<int>(n+1,0)); // Extra row and column buffers are set to zero to handle overflow
    dp[1][1] = 1; // Base Case: If there's only one cell, only 1 path exists
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(i==1 && j==1) continue;
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    return dp[m][n];
}

int main(){
    int m, n;
    scanf("%d %d",&m, &n);
    printf("%d\n", unique_paths(m,n));
    return 0;
}
