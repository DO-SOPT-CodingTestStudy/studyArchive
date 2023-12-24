#include <string>
#include <vector>
#define LARGE_INDEX 1000000007;

using namespace std;

int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;
    int ground[100][100];
    
   
    for(int i = 0; i < 100; ++i){
        for(int j = 0; j < 100; ++j)
            ground[i][j] = -1;
    }
    
    
    ground[0][0] = 1;
    
    
    for(int i = 0; i < puddles.size(); ++i)
        ground[puddles[i][0]-1][puddles[i][1]-1] = 0;
    
   
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            if(ground[i][j] == -1){
                if(i == 0 && j == 0){
                    continue;}
                else if(i == 0){
                    ground[i][j] = ground[i][j-1] % LARGE_INDEX;}
                else if(j == 0){
                    ground[i][j] = ground[i-1][j] % LARGE_INDEX;}
                else{
                    ground[i][j] = (ground[i][j-1] + ground[i-1][j]) % LARGE_INDEX;}
            }
        }
    }
    
    answer = ground[m-1][n-1];
    return answer;
}