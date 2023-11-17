#include <iostream>
 
using namespace std;
 
int sequence(int num) {
	int cnt = 0; 
 
	if (num < 100) {
		return num;
	} else {
		cnt = 99;
 
		for (int i = 100; i <= num; i++) {
			int baek = i / 100;		 
			int sip = (i / 10) % 10; 
			int one = i % 10;
 
			if ((baek - sip) == (sip - one)) { 
				cnt++;
			}
		}
	}
	return cnt;
}
 
int main(int argc, char const *argv[]) {
 
	int N;
	cin >> N;
 
	int result = sequence(N);
	cout << result;
	return 0;
}