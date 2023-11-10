#include <string>
#include <vector>
using namespace std;

int answer = 0;
bool isBright[100001] = {false, };

void dfs(int n, int parent, vector<vector<int>> &v) {
    for (int i=0; i<v[n].size(); i++) {
        if (v[n][i] != parent) {
            dfs(v[n][i], n, v);
            if (!isBright[v[n][i]] && !isBright[n]) {
                isBright[n] = true;
                answer++;
            }
        }
    }
}

int solution(int n, vector<vector<int>> lighthouse) {
    vector<vector<int>> v(n+1);
    for(auto a : lighthouse) {
        v[a[0]].push_back(a[1]);
        v[a[1]].push_back(a[0]);
    }
    dfs(1, 1, v);
    return answer;
}