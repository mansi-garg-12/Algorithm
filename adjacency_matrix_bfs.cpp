#include<bits/stdc++.h>
using namespace std;
int m[100][100]={0};
int visited[10]={0};
int v;
int arr[100];
int f=-1,r=-1;
void addedge(int v1,int v2 ,bool flag=true)
{
    m[v1][v2]=1;
    if(flag)
    m[v2][v1]=1;
}
void push(int n)
{
    if(r==-1 && f==-1)
    {
        r=f=0;
    }
    else
    r=r+1;
    arr[r]=n;
}
void pop()
{
    if(r==f)
    r=f=-1;
    else
    f=f+1;;
}
int isempty()
{
    if(r==-1 && f==-1)
    return 1;

    return 0;
}
int front(){
    return arr[f];
}
void bfs(int source)
{
    push(source);
    visited[source]=1;
    while(!isempty())
    {
        
        int k =front();
        cout<<k<<" ";
        pop();
        for(int i=0;i<=v;i++)
        {
            if(m[k][i]==1 && visited[i]==0){
                visited[i]=1;
                 push(i);
            }
        }
    }
}
int main()
{
    bool flag;
    int e,v1,v2;
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
    cout<<"\n";
    bfs(1);
    return 0;
}
