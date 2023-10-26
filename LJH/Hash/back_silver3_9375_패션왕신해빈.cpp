#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int t, n;

map<string, int>::iterator iter;
string name, type;
int res;

int main()
{
    cin >> t;

    while (t--)
    {
        cin >> n;
        res = 1;

        map<string, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> name >> type;
            m[type]++;
        }
        // cout << m["headgear"];
        for (iter = m.begin(); iter != m.end(); iter++)
        {
            res *= (iter->second + 1);
        }

        cout << res - 1 << "\n";
    }

    return 0;
}
