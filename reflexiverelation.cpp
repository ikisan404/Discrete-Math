#include <iostream>
using namespace std;
 
int countReflexive(int x)
{
   return (1 << (x*x - x));
}
 
int main()
{ 
	int x;
	cout<<"REFLEXIVE RELATION"<<endl;
	cout<<"x =";
	cin>>x;
	cout<<"Element of reflexive relation possible"<<endl;
    cout << countReflexive(x);
    return 0;
}