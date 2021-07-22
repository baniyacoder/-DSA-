#include<iostream>
using namespace std;
 int main()
 {
 int n;
 cout<<"enter the size of the array"<<endl;
 cin>>n;
 int a[n];
 cout<<"enter the elements of the array"<<endl;
 for(int i=0;i<n;i++)
 {
 cin>>a[i];
 }
cout<<"the array is"<<endl;
for(int i=0;i<n;i++)
 {
 cout<<a[i]<<endl;
 }
 cout<<"the reverse aaray is"<<endl;
 for(int i=n-1;i>=0;i--)
 {
 cout<<a[i];
 }
 }
