#include <bits/stdc++.h>
using namespace std;

bool isEqual(int A[], int B[], int n, int m)
{
//	lenght of array must equal
	if (n != m)
		return false;

//	 Sort both arrays
	sort(A, A + n);
	sort(B, B + m);

//	 Linearly compare elements
	for (int i = 0; i < n; i++){
		if (A[i] != B[i])
			return false;
	}
//	 If elements are same
	return true;
}

int main()
{
	int set1[] = { 1, 3, 4, 5, 2 };
	int set2[] = { 5, 4, 3, 2 };
	int N = sizeof(set1) / sizeof(int);
	int M = sizeof(set2) / sizeof(int);

	cout<<"Set A : "<<endl;
	for(int k=0; k<N; k++){
		cout<<set1[k]<<" ";
	}
	
	cout<<"\nSet B : "<<endl;
	for(int l=0; l<M; l++){
		cout<<set2[l]<<" ";
	}

	cout<<endl;
	cout<<"Result : "<<endl;
	
	if (isEqual(set1, set2, N, M)){
		cout << "Equal";
	}
	else{
		cout << "Not Equal";
	}
	
	return 0;
}

