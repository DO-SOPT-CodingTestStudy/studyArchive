#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int k, vector<int> score)
{
    vector<int> answer;

    vector<int> temp;

    for (int i = 0; i < score.size(); i++)
    {
        if (i == 0)
        {
            answer.push_back(score[i]);
            temp.push_back(score[i]);
            continue;
        }
        else if (temp.size() < k)
        {
            temp.push_back(score[i]);
            sort(temp.rbegin(), temp.rend());
            answer.push_back(temp[temp.size() - 1]);
        }
        else
        {
            temp.push_back(score[i]);
            sort(temp.rbegin(), temp.rend());
            temp.erase(temp.end() - 1);
            answer.push_back(temp[temp.size() - 1]);
        }
    }
    return answer;
}

/**
 * 다른 사람의 짧은 풀이
 */
// #include <string>
// #include <vector>
// #include <algorithm>

// using namespace std;

// vector<int> solution(int k, vector<int> score) {
//     vector<int> answer, tmp;

//     for(auto s : score){
//         tmp.push_back(s);
//         sort(tmp.begin(), tmp.end(), greater<int>());
//         if(tmp.size() > k) tmp.erase(tmp.begin() + k, tmp.end());
//         answer.push_back(tmp.back());
//     }

//     return answer;

// }