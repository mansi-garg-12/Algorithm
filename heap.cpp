#include<stdio.h>
#include<stdlib.h>
#define max 10  //macros
int heap[max]; //it is global
int pos=0;
void push(int data)  //here push is for inserting element
{
    int child,parent,l;
    pos++;   //1   2
    heap[pos]=data;  //heap[1]=5    heap[2]=10
    child=pos;       //child =1     child=2
    while(child>1)    //child>1
    {
        parent=child/2;   //parent=1
        if(heap[child]>heap[parent])   //max heap  10>5
        {
            l=heap[child];
            heap[child]=heap[parent];
            heap[parent]=l;   // parent=10 child 5
            child=parent;     //child=1
        }
        else
        break;
        
    }
}
void heapify(int parent)
{
   int c1=2*parent;
   int c2=2*parent+1;
   int m=parent;
    //printf("heap[parent]=%d\n heap[c1]=%d",heap[parent],heap[c1]);
   if(heap[parent]<heap[c1] && pos>c1)
   m=c1;
   //printf("m=%d\n",m);
   if(heap[c2]>heap[m]   && pos>c2)
   m=c2;
   //printf("%d",m);
   if(m!=parent)
   {
       int l=heap[parent];
       heap[parent]=heap[m];
       heap[m]=l;
       heapify(m);
   }
}
void pop()
{
    int l;
    l=heap[pos];
    heap[pos]=heap[1];
    heap[1]=l;
    pos--;
    heapify(1);
}
int empty()
{
   if(pos==0)
   return 1;
   else
   return 0;
}
int top()
{
    return heap[1];
}
void display()
{
    for(int i=1;i<=pos;i++)
    printf("%d,",heap[i]);
}
void main()
{
    push(5);
    push(10);
    push(15);
    push(25);
    push(30);
    pop();
    display();
}
