//17626
#include <iostream>
#include<vector>
#include <algorithm>
#include<cmath>
using namespace std;
int mem[50001];
int n;
int dp()
{
	mem[0] = 0;
	mem[1] = 1;
	for (int i = 2; i <= n; i++) {
		mem[i] = mem[i - 1] + 1;
		for (int j = 1; j * j <= i; j++) {
			if (i == j * j) {
				mem[i] = 1;
				continue;
			}
			mem[i] = min(mem[i],1 + mem[i - j * j]);
		}
	}

	//for (int i = 0; i < n; i++)
	//	cout << i<<": "<<mem[i] << endl;
	return mem[n];
}
int main()
{
	cin >> n;
	cout << dp();


	return 0;
}