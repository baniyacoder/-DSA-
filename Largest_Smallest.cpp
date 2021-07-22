#include<iostream>
using namespace std;

int main()
{
int n;int max=0;
cout<<"enter the size of the array"<<endl;
cin>>n;
int a[n];
cout<<"the elements of the array is"<<endl;
for(int i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"the array is "<<endl;
for(int i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
int min=a[0];
for(int i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
if(a[i]<min)
{
min=a[i];
}
}
cout<<"the largest element of the array is "<<max<<" and the smallelst element of the array is "<<min<<endl;
}

