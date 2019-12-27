/*
Given an array of size n with 0s and 1s ,
 flip at most k 0s to get the longest possible subarray of 1s.
 Print the maximum length as well as the modified array!!!
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int l=0,r=0,left,right,zero=0,max_length=0;
    
    while(r<n)
    {
        if(a[r]==0)
            zero++;
        
        while(zero>k)
        {
            if(a[l]==0)
                zero--;
            l++;
        }
        
        if(r-l+1>max_length)
        {
            max_length=r-l+1;
            left=l;right=r;
        }
        
        r++;
    }
    cout<<max_length<<endl;
    
    for(int i=0;i<n;i++)
    {
        if(i>=left&&i<=right)
            cout<<"1"<<" ";
        else
            cout<<a[i]<<" ";
    }
}
