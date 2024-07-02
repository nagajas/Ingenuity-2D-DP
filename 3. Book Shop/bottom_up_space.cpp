#include<bits/stdc++.h>
using namespace std;

int n,x;

int max_pages_so(int money, vector<int> &prices, vector<int> &pages) {
    // Time Complexity: O(n*x)
    // Space Complexity: O(x)
    vector<int> dp(money + 1, 0);
    for (int i = 0; i < n; i++) {
        for (int j = money; j >= prices[i]; j--) {
            dp[j] = max(dp[j], dp[j - prices[i]] + pages[i]);
        }
    }
    return dp[money];
}

int main(){
    scanf("%d %d",&n,&x);
    vector<int> prices(n),pages(n);
    for(int i=0;i<n;i++) scanf("%d",&prices[i]);
    for(int i=0;i<n;i++) scanf("%d",&pages[i]);
    printf("%d\n",max_pages(x, prices,pages));
    return 0;
}