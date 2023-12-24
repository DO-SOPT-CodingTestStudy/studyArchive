#include <string>
#include <vector>
#include <iostream>

using namespace std;
int left_sum = 0;
int right_sum = 0;
int left_idx = 0;
int right_idx = 0;


int solution(vector<int> cookie) {
    int answer = 0;

    for(int i = 0; i < cookie.size() - 1; i++){
        left_sum = cookie[i];
        right_sum = cookie[i + 1];
        left_idx = i;
        right_idx = i + 1;

        while(true){

            if(left_sum == right_sum)
                answer = max(answer, left_sum);

            if(left_sum > right_sum){
                if(right_idx + 1 == cookie.size()) break;
                right_sum += cookie[++right_idx];
            }
            else{
                if(left_idx - 1 < 0) break;
                left_sum += cookie[--left_idx];
            }            

        }
    }

    return answer;
}