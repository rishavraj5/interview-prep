#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int n,t;
    int x2=1,x3=1,x5=1;
    long long a[10002],next_number;
    a[0]=0;a[1]=1;

    for(int i=1;i<=10000;i++)
    {
        next_number=min(a[x2]*2,min(a[x3]*3,a[x5]*5));
        a[i+1]=next_number;
        
        if(next_number==(a[x2]*2))
            x2++;
        if(next_number==(a[x3]*3))
            x3++;
        if(next_number==(a[x5]*5))
            x5++;
    }

	cin>>t;
	while(t--)
	{
		cin>>n;
        cout<<a[n]<<endl;
	}
	return 0;
}
