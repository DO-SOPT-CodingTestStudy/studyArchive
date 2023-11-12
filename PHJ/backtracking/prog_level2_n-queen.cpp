#include <string>
#include <vector>

using namespace std;
vector<bool> cols;
vector<bool> right_cols;
vector<bool> left_cols;
int cnt =0, ns;
void backtracking(int row){
    if(row ==ns){
        cnt++;
        return;
    }
    for(int i=0; i<ns; i++){
        if(!cols[i] && !right_cols[row-i+ns] && !left_cols[row+i]){
            cols[i] =true;
            right_cols[row-i+ns] = true;
            left_cols[row+i] = true;
            backtracking(row+1);
            cols[i] =false;
            right_cols[row-i+ns] = false;
            left_cols[row+i] = false;
        }
    }
}

int solution(int n) {
    int answer = 0;
    ns = n;
    cols.assign(n,false);
    right_cols.assign(2*n, false);
    left_cols.assign(2*n, false);

    backtracking(0);
    answer = cnt;

    return answer;
}