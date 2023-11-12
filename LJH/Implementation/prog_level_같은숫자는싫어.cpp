#include <vector>
#include <iostream>
#include <set>
#include <queue>
using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    queue<int> q;
    for(int i=0;i<arr.size();i++){
        
        if(q.empty())
            q.push(arr[i]);
        else if(!q.empty() && q.back()!=arr[i])
        q.push(arr[i]);
        
    }
    
    while(!q.empty()){
        answer.push_back(q.front());
            q.pop();
    }

// 간단한 풀이
//  arr.erase(unique(arr.begin(),arr.end()),arr.end());
//  answer=arr;
    return answer;
}



