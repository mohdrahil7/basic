#include<iostream>
#include<stdio.h>
using namespace std;
void fact(int x)
{
    int ans,i,j=1;
    for(i=x;i>0;i--)
    {
        j=i*j;
    }
    cout<<"factorial is "<<j;
}
int main()
{
    int a;
    cout<<"enter the number\n";
    cin>>a;
    fact(a);
}
