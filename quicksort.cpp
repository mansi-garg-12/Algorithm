#include<bits/stdc++.h>
using namespace std;
int a[50]={10,5,2,0,7,6,4};
int partition(int s,int e)
{
    int pivot=a[s];
    int j=e-1;
    int i=s+1;
    while(i<j){
        while(pivot<a[i])
        {
            i++;
        }
        
        while(pivot>a[j])
        {
            j--;
        }
        
        if(i<j)
        swap(a[i],a[j]);
    }
        swap(a[j],a[s]);
        cout<<j<<"\n";
    return j;
}
void quicksort(int s,int e)
{
    if(s>=e)
    return;
    int p=partition(s,e);
    quicksort(s,p-1);
    quicksort(p+1,e);
}
int main()
{
   quicksort(0,7);
  for(int i=0;i<7;i++)
  {
      cout<<a[i]<<",";
  }
}

