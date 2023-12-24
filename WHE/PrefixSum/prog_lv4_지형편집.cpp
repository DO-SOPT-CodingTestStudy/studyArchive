#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
ll arr[90001],sum[90001],ans=-1;
int n;
ll solution(vector<vector<int> > land, int P, int Q) {
    n=land.size();
    int idx=1;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            arr[idx++]=land[i][j];
    n*=n;
    sort(arr,arr+n+1);
    for(int i=1;i<=n;i++) sum[i]=sum[i-1]+arr[i]; 
    int cur=-1;
    for(int i=1;i<=n;i++){
        if(arr[i]==cur) continue;
        cur=arr[i];
        ll v=0;
        v+=(sum[n]-sum[i-1]-arr[i]*(n-(i-1)))*Q;
        v+=(arr[i]*(i-1)-sum[i-1])*P;
        if(ans==-1 || ans > v) ans=v;
    }
    return ans;
}