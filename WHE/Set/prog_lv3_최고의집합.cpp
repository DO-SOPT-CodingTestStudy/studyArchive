#include <string>
#include <vector>

using namespace std;

vector<int> solution (int n, int s) {
     vector<int> answer;
    if (n > s){
        answer.push_back(-1);
        return answer;
    }
    
    int a = s/n;
    int b = s%n;
    answer.assign(n,a);
    
    for(int i= answer.size()-1;i>=0&&b>0;i--){
        answer[i]++;
        b--;
    }
    return answer;
}