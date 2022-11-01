#include <iostream>

using namespace std;

int countSymmetric (int x)
{
    if (x == 0)
        return 1;
 
   return 1 << ((x * (x + 1))/2);
}
 
int main()
{
	int x;
	cout<<"SYMMETRIC RELATION"<<endl;
	cout<<"n =";
	cin>>x;
 	cout<<"Element of symmetric relation possible:"<<endl;
 	cout<<""<<countSymmetric(x);
    return 0;
}