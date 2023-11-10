#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

map<string, float> m;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int size;
	cin >> size;

	vector<pair<int, int>> index;

	for (int i = 0; i < size; i++)
	{
		int value;
		cin >> value;
		index.push_back(make_pair(value, i));
	}

	sort(index.begin(), index.end());

	vector<int> v(size);

	for (int i = 0; i < size; i++)
		v[index[i].second] = i;

	for (auto a : v)
		cout << a << ' ';


    return 0;
}