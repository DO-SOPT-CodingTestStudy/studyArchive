#include <iostream>
#include <queue>
using namespace std;
 
int n, w, L, arr[1000];
int answer;
queue<int> q;
 

int main()
{
    cin >> n >> w >> L;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0; 

    for(int i = 0; i < n; i++) {
        while(true) {
            if(q.size() == w) {
                sum -= q.front(); 
                q.pop();
            }
            if(arr[i] + sum <= L) {
                break;
            }
            q.push(0); 
            answer++;
        }
        q.push(arr[i]);
        sum += arr[i];
        answer++;
    }

    cout << answer + w; 
    return 0;
}