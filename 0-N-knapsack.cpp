#include<iostream>
using namespace std;
int weight[1001],value[1001],n;
int dp[1001][1001];

int knapsack(int W,int start)
{
    if(start==n||W==0)
        return 0;
        
    if(dp[W][start]!=-1)
        return dp[W][start];

    if(weight[start]>W)
        return dp[W][start]=knapsack(W,start+1);
    
    return dp[W][start]=max(value[start]+knapsack(W-weight[start],start),max(value[start]+knapsack(W-weight[start],start+1),knapsack(W,start+1)));
    
}
int main() {
    int i,s;
    cin>>n>>s;
    
    for(i=0;i<n;i++){
        cin>>weight[i];
    }
    for(i=0;i<n;i++){
        cin>>value[i];
    }
    for(i=0;i<=1000;i++)
        for(int j=0;j<=1000;j++)
            dp[i][j]=-1;
    

    int res=knapsack(s,0);
    cout<<res;

	return 0;
}
