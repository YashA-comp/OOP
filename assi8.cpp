#include<iostream>
using namespace std;
template<class T>
void selection(T arr[],int n)
{ int i,j;
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{ if(arr[i]>arr[j])
{ T temp;
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
} } }
for(i=0;i<n;i++)
{ cout<<arr[i]<<" " ;}
cout<<endl;
}
int main()
{
int arr1[]={2,4,3,6,8,1};
int n1=sizeof(arr1)/sizeof(arr1[0]);
cout<<"Integer array : "<<endl;
selection(arr1,n1);
float arr2[]={2.8,9.7,8.3,4.4};
int n2=sizeof(arr2)/sizeof(arr2[0]);
cout<<"Float array:"<<endl;;
selection(arr2,n2);
return 0;
}
