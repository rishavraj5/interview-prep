#include<iostream>
using namespace std;

int dp[1001][1001];
int n,w;

int money(int* a,int W,int start)
{
    if(W==0)
	    return 0;

	if(start==w+1)
		return 1e8;
    
	if(dp[W][start]!=-1)
		return dp[W][start];

	if(a[start]==-1)
		return dp[W][start]=money(a,W,start+1);
	
	int res=1e8;
	if(W-start>=0)
	{
		res=a[start]+money(a,W-start,start);
		res=min(res,a[start]+money(a,W-start,start+1));
	}
	res=min(res,money(a,W,start+1));
	
	dp[W][start]=res;

	return res;
}

int main() {

	cin>>n>>w;
	int a[w+1];
	for(int i=1;i<=w;i++){
		cin>>a[i];
	}
	for(int i=0;i<=1000;i++)
		for(int j=0;j<=1000;j++)
			dp[i][j]=-1;

	int res=money(a,w,1);
    if(res)
        cout<<res;
    else
        cout<<"-1";

	return 0;
}
