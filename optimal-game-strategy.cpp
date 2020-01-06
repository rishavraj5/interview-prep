#include<iostream>
using namespace std;
int a[10001];
int dp[10001][10001];
int game(int s,int e)
{
    if(s>=e)
        return 0;

    if(dp[s][e]!=-1)
        return dp[s][e];
    
    return dp[s][e]=max(a[s]+min(game(s+2,e),game(s+1,e-1)),a[e]+min(game(s,e-2),game(s+1,e-1)));
}

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<=n;i++)
        for(int j=0;j<=n;j++)
            dp[i][j]=-1;

    cout<<game(0,n-1);
	return 0;
}
