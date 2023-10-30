#include <string>
#include <vector>
#include <queue>
#include <algorithm>


using namespace std;
int dp[20001];
vector<int> v[50001];
    int max_num;

void bfs(int first){
    queue<int> q;
    q.push(first);

    while(!q.empty()){
        int curr = q.front();

        q.pop();

        for(int i=0; i<v[curr].size();i++){
            if(dp[v[curr][i]]==0 && v[curr][i]!=1){
                dp[v[curr][i]]= dp[curr] +1;
                q.push(v[curr][i]);
                max_num = max(max_num,dp[v[curr][i]]);
                }
        }
    }


}

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;

    for(int i=0; i<edge.size();i++){
        v[edge[i][0]].push_back(edge[i][1]);
        v[edge[i][1]].push_back(edge[i][0]);
    }
    bfs(1);

    for(int i=1; i<=n;i++){
        if(max_num==dp[i])
            answer++;
    }
    return answer;
}