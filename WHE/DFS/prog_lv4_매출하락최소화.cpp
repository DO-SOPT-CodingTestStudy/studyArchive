#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<int, vector<int>> team;


pair<int,int> dfs(vector<int> &sales, int member) {
    if(team.find(member) == team.end()) 
    	return {0, sales[member-1]}; 
    else {
        int sum = 0;
        int min_bound = 1e9;
        bool flag = false;
        
        for(auto idx: team[member]) {
            
            auto answer = dfs(sales, idx);
				
            sum += min(answer.first, answer.second); 
            
            if(answer.first >= answer.second) flag = true;
            
            min_bound = min(min_bound, answer.second - answer.first);
        }
        
        if(flag) return {sum, sales[member-1] + sum};
        
        else return {sum + min_bound, sales[member-1] + sum};
    }    
}

int solution(vector<int> sales, vector<vector<int>> links) {
    
    for(auto idx: links) {
        team[idx[0]].push_back(idx[1]);
    }
    
    auto answer = dfs(sales, 1);    
    
    return min(answer.first, answer.second);
}