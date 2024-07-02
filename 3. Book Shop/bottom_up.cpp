#include<bits/stdc++.h>
using namespace std;

int n,x;

void print_solution(vector<vector<int>> dp, vector<int>prices, vector<int>pages){
    vector<int> b(n+1,0);
    int i=n,j=x;
    while(i>0){
        if(dp[i][j] != dp[i-1][j]){
            b[i] = 1;
            j -= prices[i];
        }
        i--;
    }
    int total_pages=0, total_books=0, money_spent=0;
    printf("Book Number | Book Price | Pages Obtained\n");
    printf("-----------------------------------------\n");
    for(int i=1; i<=n; i++) {
        if(b[i]){
            printf(" %10d | %10d | %14d\n", i, prices[i-1], pages[i-1]);
            total_books += 1;
            total_pages += pages[i-1];
            money_spent += prices[i-1];
        }
    }
    printf("Total books bought: %d\n",total_books);
    printf("Total pages obtained: %d\n",total_pages);
    printf("Total money spent: %d\n", money_spent);
}

int max_pages(int M, vector<int>prices, vector<int>pages){
    // Time Complexity: O(n*x)
    // Space Complexity: O(n*x)
    vector<vector<int> > dp(n+1,vector<int>(M+1,0));
    for(int item=1; item<=n; item++){ // Choose 
        for(int money=1; money<=M; money++){
            dp[item][money] = dp[item-1][money]; // Assume we don't choose present item
            if(money >= prices[item-1]) {
                // We choose present item if it yields optimal pages
                dp[item][money] = max(dp[item-1][money-prices[item-1]]+pages[item-1], dp[item][money]);
            }
        }
    }
    print_solution(dp, prices, pages);
    return dp[n][M];
}

int main(){
    scanf("%d %d",&n,&x);
    vector<int> prices(n),pages(n);
    for(int i=0;i<n;i++) scanf("%d",&prices[i]);
    for(int i=0;i<n;i++) scanf("%d",&pages[i]);
    printf("\n%d\n",max_pages(x, prices,pages));
    return 0;
}