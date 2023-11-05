#include <string>
#include <vector>
 
#define DIVIDER 1000000007
#define MAX 100010

using namespace std;
 
int dp[MAX];
 
int solution(int n, vector<int> money) 
{
    dp[0] = 1;
    for (int i = 0; i < money.size(); i++)
    {
        for (int j = money[i]; j <= n; j++)
        {
            dp[j] += dp[j - money[i]];
            dp[j] %= DIVIDER;
        }
    }
    int answer = dp[n] % DIVIDER;
    return answer;
}
