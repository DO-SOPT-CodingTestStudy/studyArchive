#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(vector<int>& a, vector<int>& b){
    return a[2] < b[2];
}

int solution(int n, vector<vector<int>> costs) {
    int answer = 0;
    int check = 0;
    
    
    sort(costs.begin(), costs.end(), cmp);
    
    
    int first_node[n];
    for (int i = 0; i < n; ++i)
        first_node[i] = i;
    
    
    for(int i = 0; i < costs.size(); ++i){
        if(first_node[costs[i][0]] != first_node[costs[i][1]]){
            if(first_node[costs[i][0]] > first_node[costs[i][1]]){
            	int big = first_node[costs[i][0]];
        		int small = first_node[costs[i][1]];
                for(int j = 0; j < n; ++j){
                    if(first_node[j] == big)
                        first_node[j] = small;
                }
            }
            else{
            	int big = first_node[costs[i][1]];
        		int small = first_node[costs[i][0]];
                for(int j = 0; j < n; ++j){
                    if(first_node[j] == big)
                        first_node[j] = small;
                }
            }
            answer += costs[i][2];
            ++check;
        }
        if(check == n-1)
            break;
    }
    
    return answer;
}
