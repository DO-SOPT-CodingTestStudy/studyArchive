#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<vector<int>> map;
vector<vector<bool>> visited;
vector<int> house;
int num=0, n;

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

void solveHouse(int x, int y) {
    visited[y][x] = true;
    house[num]++;

    for(int i=0; i<4; i++) {
        int new_x = x + dx[i];
        int new_y = y + dy[i];
        if(new_x>0 && new_x<=n && new_y >0 && new_y <=n && !visited[new_y][new_x] && map[new_y][new_x]==1){
            solveHouse(new_x, new_y);
        }
    }
}

int main() {
    cin>>n;
    map.assign(n+1, vector<int>(n+1,0));
    visited.assign(n+1, vector<bool>(n+1,false));

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            scanf("%1d", &map[i][j]);
        }
    }

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(map[i][j]==1 && !visited[i][j]){
                house.push_back(0);
                solveHouse(j, i);
                num++;
            }
        }
    }
    sort(house.begin(), house.end());
    cout<<num<<'\n';
    for(int i=0; i<house.size();i++) {
        cout<<house[i]<<'\n';
    }

    return 0;
}