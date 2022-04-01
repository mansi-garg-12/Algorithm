#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100],k;
    cin>>n;
    int count[n]={0};
    cin>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    int i=0;
    while(k!=0)
    {
        if(k-count[i]>=0)
        k=k-count[i];
        else
        break;
        i++;
    }
    cout<<"sorted ="<<i-1;
}

