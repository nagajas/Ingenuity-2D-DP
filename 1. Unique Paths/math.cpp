#include<bits/stdc++.h>
using namespace std;

int nCr(int n, int r)
{
    int p = 1;
    for(int i = 1; i <= r; i++){
        p *= (n-r+i) / i;
    }
    return int(p);
}

int unique_paths_math(int m, int n){
    // Time Complexity: O(min(m,n))
    // Space Complexity: O(1)
    return nCr(m+n-2,min(m,n)-1);
}

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d\n",unique_paths_math(m,n));
    return 0;
}