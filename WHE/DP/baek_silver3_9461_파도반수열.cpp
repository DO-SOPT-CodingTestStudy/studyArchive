#include <iostream>
using namespace std;
long long arr[101] = {0,1,1,};
long long a(int N)
{
    if(N < 3)
        return arr[N];
    else if(arr[N] == 0)
        arr[N] = a(N-2) + a(N-3);
    return arr[N];
}
int main() {
    int T;
    int N;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        cin >> N;
        cout << a(N) << '\n';
    }
}