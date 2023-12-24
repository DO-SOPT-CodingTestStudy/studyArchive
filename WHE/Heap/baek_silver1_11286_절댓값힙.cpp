#include<iostream>
#include<queue>
#include<cmath>
using namespace std;

struct cmp
{
	bool operator()(int a, int b)
	{
		if (abs(a) == abs(b))
			return a > b;
		else
			return abs(a) > abs(b);
	}
};

void solution(int n)
{
	priority_queue< int, vector<int>, cmp > pq;

	while (n--)
	{
		int a; 
        cin >> a;

		if (a == 0)
		{
			if (pq.empty())
			{
				cout << '0' << '\n';
			}
			else
			{
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
		else
		{
			pq.push(a);
		}
	}
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n; cin >> n;
	solution(n);

	return 0;
}