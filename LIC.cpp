#include <bits/stdc++.h>
using namespace std;
int lis(int* a,int n)
{
    int dp[100];
    fill(dp,dp+12,1);
    int best=0;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i]>=a[j])
            {
                dp[i]=max(1+dp[j],dp[i]);
            }
        }
        best=max(best,dp[i]);
    }
    return best;

}
int main() {
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<lis(a,n);

}

