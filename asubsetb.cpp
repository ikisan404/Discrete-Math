#include <bits/stdc++.h>

using namespace std;

int i = 0;
int j = 0;

bool isASubsetB(int A[], int B[], int m, int n){
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (B[i] == A[j])
				break;
		}
		if (j == m)
			return 0;
	}
	return 1;
}

int main(){
	int set1[] = { 111, 3, 7, 1 };
	int set2[] = { 11, 1, 13, 21, 3, 7 };
	
	int M = sizeof(set1) / sizeof(set1[0]);
	int N = sizeof(set2) / sizeof(set2[0]);

	cout<<"Set A : "<<endl;
	for(int k=0; k<M; k++){
		cout<<set1[k]<<" ";
	}
	
	cout<<"\nSet B : "<<endl;
	for(int l=0; l<N; l++){
		cout<<set2[l]<<" ";
	}

	cout<<endl;
	cout<<"Result : "<<endl;

	if (isASubsetB(set2, set1, N, M))
		printf("Set A is subset of Set B ");
	else
		printf("Set A is not subset of Set B ");

//	getchar();
	return 0;
}

