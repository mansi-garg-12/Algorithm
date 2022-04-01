#include<bits/stdc++.h>
using namespace std;
int m[100][100]={0};
void addedge(int v1,int v2 ,bool flag=true)
{
    m[v1][v2]=1;
    if(flag)
    m[v2][v1]=1;
}
int main()
{
    bool flag;
    int v,e,v1,v2;
    cout<<"Enter the type of graph 0 : directed  1 : undirected";
    cin>>flag;
    cout<<"Enter the no of vertices::";
    cin>>v;
    cout<<"Enter the no of edges::";
    cin>>e;
    cout<<"Enter the pair of edges::";
    for(int i=0;i<e;i++)
    {
        cin>>v1>>v2;
        addedge(v1,v2,flag);
    }
    for(int i=0;i<=v;i++)
    {
        for(int j=0;j<=v;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
