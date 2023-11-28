#include<iostream>
#include<algorithm>
using namespace std;

const int MAX = 1000;
int n, i;
int arr[MAX];

int main(void){
    cin >> n;
    for(int i =0; i<n ;i++){
    	cin >> arr[i];	
	}
	
	sort(arr, arr+n);
    int sum = 0;
	for(int i =0; i<n ;i++){
    	sum += arr[i]*(n-i);
	}
	
	cout << sum << endl;
	return 0;
}