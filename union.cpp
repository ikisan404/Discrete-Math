#include<iostream>
using namespace std;

int main()
{
  int x,y,flag;
  cout<<"UNION PROGRAM\n";
  cout<<"-------------\n";
  cout<<"Enter the no. of elements of the 1st array: ";
  cin>>x;
  int arr1[x];
  cout<<"Enter the elements of the 1st array: " << endl;
  for(int i=0;i<x;i++)
  {
    cin>>arr1[i];
  }
  
  cout<<"\nEnter the no. of elements of the 2nd array: ";
  cin>>y;
  int arr2[y];
  cout<<"Enter the elements of the 2nd array: " << endl;
  for(int i=0;i<y;i++)
  {
    cin>>arr2[i];
  }
  
  cout<<"\nArray 1: { ";
	for(int i=0;i<x;i++)
  	{
    	cout<<arr1[i]<<" ";
  	}
  cout<<"}";
  	
  cout<<"\nArray 2: { ";
	for(int i=0;i<y;i++)
  	{
    	cout<<arr2[i]<<" ";
  	}
  cout<<"}";
  cout<<"\nUnion of the two arrays: ";
  for(int i=0;i<x;i++)
  {
    cout<<arr1[i]<<" ";
  }
  
  for(int j=0;j<y;j++)
  {
    flag=0;
    for(int i=0;i<x;i++)
    {
      if(arr1[i]==arr2[j])
      {
        flag=1;
        break;
      }
    }
    if(flag!=1)
    {
      cout<<arr2[j]<<" ";
    }
    
  }
  
  return 0;
}