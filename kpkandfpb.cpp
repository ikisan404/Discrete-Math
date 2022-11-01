#include <iostream>

using namespace std;

int main(){
	int x, y, kpk, fpb;
	
	cin>>x;
	cin>>y;
	
	for (int i; i<=x && i<=y; i++){
		if (x%i == 0 && y%i == 0)
			fpb = i;
	}
	kpk = (x*y) / fpb;

	
	cout<<"KPK : "<<kpk<<endl;
	cout<<"FPB : "<<fpb<<endl;
	
	return 0;
}
