#include<bits/stdc++.h>
using namespace std;

int unique_paths(int n, int m){
    int dp[m+1][n+1]; // Extra row and column buffer to handle overflow
    for(int i=0; i<=m; i++) dp[i][0] = 0; // Set overflow row and column to zero
    for(int i=0; i<=n; i++) dp[0][i] = 0;
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
    scanf("%d %d",&m, &n);
    printf("%d\n", unique_paths(m,n));
    return 0;
}