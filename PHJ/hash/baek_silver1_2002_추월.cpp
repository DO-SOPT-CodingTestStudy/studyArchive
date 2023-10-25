#include <iostream>
#include <map>
#include <vector>

using namespace std;

int outCar(int n, vector<int> &out_car) {

    int result = 0;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(out_car[i] > out_car[j]) {
                result++;
                break;
            }
        }
    }
    return result;
}

int main() {

    int n, num=0;
    cin>> n;

    map<string, int> in_car;
    vector<int> out_car(n, 0);

    for(int i=1; i<=n; i++) {
        string input;
        cin>>input;
        in_car[input] = i;
    }

    for(int i=0; i<n; i++) {
        string input;
        cin>> input;
        out_car[i] = in_car[input];
    }

    cout<< outCar(n, out_car);

    return 0;
}