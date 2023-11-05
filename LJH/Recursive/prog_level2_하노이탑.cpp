#include <string>
#include <vector>

using namespace std;

void hanoi(int n, int current, int target, int other,vector<vector<int>> &answer){
    if(n==1){
        answer.push_back({current,target});
    }
    else{
        hanoi(n-1,current,other,target,answer);
        answer.push_back({current,target});
        hanoi(n-1,other,target,current,answer);
    }
}

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    hanoi(n,1,3,2,answer);
    
    return answer;
}