#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int solution(int n, int m, vector<vector<int>> edge_list, int k, vector<int> gps_log) {
	vector<vector<int> > path(n+1,vector<int>());

	for(int i = 0;i < edge_list.size();i++){
		path[edge_list[i][0]].push_back(edge_list[i][1]);
		path[edge_list[i][1]].push_back(edge_list[i][0]);
	}

	vector<vector<int> > dp(k,vector<int>(n+1,INT_MAX - gps_log.size()));

	dp[0][gps_log[0]] = 0;

	for(int i = 1;i < k;i++){
		for(int j = 1;j <= n;j++){
			dp[i][j] = min(dp[i][j],dp[i-1][j]+(gps_log[i] == j ? 0 : 1));

		
			for(int l = 0;l < path[j].size();l++){
				dp[i][j] = min(dp[i][j],dp[i-1][path[j][l]]+(gps_log[i] == j ? 0 : 1));
			}
		}
	}

	
	return dp[k-1][gps_log.back()] == INT_MAX-gps_log.size() ? -1 : dp[k-1][gps_log.back()];
}