#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> array_;

void array_push(int data) {
    int tmp;
    array_.push_back(data);
    if (array_.size() != 1){
        for (int i=array_.size()-1 ; i>0; i--){
            if (array_[i-1] <= array_[i]) break;
            else {
                tmp = array_[i];
                array_[i] = array_[i-1];
                array_[i-1] = tmp;
            }
        }
    }
}

void pop_max(){
    if (array_.size() != 0) array_.pop_back();
}

void pop_min(){
    if (array_.size() != 0) array_.erase(array_.begin(), array_.begin() + 1);
}

vector<int> solution(vector<string> operations) {
    vector<int> answer;

    reverse(operations.begin(), operations.end());
    while(operations.size() != 0){
        string operation = operations.back();
        operations.pop_back();
        if (operation[0]=='I') {
            int num = stoi(operation.substr(2, operation.length()));
            array_push(num);
        }
        else if (operation[2]=='1') pop_max();
        else pop_min();                         
    }
    
    if (array_.size() == 0){
        answer.push_back(0);
        answer.push_back(0);
    }
    else {
        answer.push_back(array_.back());
        answer.push_back(array_.front());
    }
    return answer;
}