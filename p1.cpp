#include <iostream>
using namespace std;
int arrsum(int arr[],int size)
{
int sum=0;
for(int i=0;i<size;i++)
{
sum=sum+arr[i];
}
return sum;
}

int main() {
int size,sum,arr[size];
cout<<" enter array size  ";
cin>>size;
for(int j=0;j<size;j++)
{
arr[j]=0;
}
cout<<" enter values"<<endl;
for(int k=0;k<size;k++)
{
cin>>arr[k];
}
sum=arrsum(arr,size);
cout<<" the sum is  "<<sum;
}
