//1920
#include <iostream>
#include <algorithm>
#include<string>
#include <vector>
using namespace std;
int N, M;
int A[100000];
int B[100000];
int findNum(int left, int right,int b) {
	int mid = (left + right) / 2;


	if (A[mid] == b)
		return 1;

	else if(left > right)
		return 0;

		if (A[mid] < b)
			return findNum(mid + 1, right, b);
		else 
			return findNum(left, mid - 1, b);
		
	
}
int main()
{
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	sort(A, A + N);
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> B[i];
	}
	for (int i = 0; i < M; i++) {
		printf("%d\n", findNum(0,N-1,B[i]));
	}


	return 0;
}
