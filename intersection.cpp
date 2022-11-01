#include<iostream>
using namespace std;

int main()
{
  cout<<"INTERSECTION PROGRAM\n";
  cout<<"--------------------\n";
  int x,y;
  
  cout<<"Enter the no. of elements of the 1st array: ";
  cin>>x;
  int arr1[x];
  cout<<"Enter the elements of the 1st array: " << endl;
  for(int i=0;i<x;i++)
  {
    cin>>arr1[i];
  }
  cout<<"\nEnter the no. of elements of the 2nd array: " << endl;
  cin>>y;
  int arr2[y];
  cout<<"Enter the elements of the 2nd array: ";
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
  	
  cout<<"\nThe intersection of the two arrays: ";
  for(int i=0;i<x;i++)
  {
    for(int j=0;j<y;j++)
    {
      if(arr1[i]==arr2[j])
      {
        cout<<arr1[i]<<" ";
      }
    }
  }
  return 0;
}