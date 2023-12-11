#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;
const int MAX = 501;

int n, m;

int map[MAX][MAX] = { 0, };
bool visited[MAX][MAX] = { 0, };

int dy[] = { 0,0,-1,1 };
int dx[] = { 1,-1,0,0 };

vector<int> v;                    
int start = 1;                        
 
void dfs(int y, int x) {
    visited[y][x] = true;
 
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
 
        if (ny < 0 || nx < 0 || ny >= n || nx >= m)
            continue;

        if (map[ny][nx] == 1 && visited[ny][nx] == 0) {
            visited[ny][nx] = true;
            start++;
            dfs(ny, nx);
        }
    }
}
 
bool cmp(int i, int j) {
    return i > j;
}
 
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> map[i][j];
        }
    }
 
    int cnt = 0; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (map[i][j] == 1&&visited[i][j]==0) {
                dfs(i, j);
                v.push_back(start);
                cnt++;
                start = 1;
            }
        }
    }
 
    sort(v.begin(), v.end(), cmp);
 
    cout << cnt << endl;
    
    if (cnt == 0) {
        cout << 0 << endl;
    }
    else {
        cout << v[0] << endl;
    }
 
}
