#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n,m;
typedef long long int ll; 
ll res=0;
priority_queue<ll,vector<ll>,greater<ll> > pq;
int main(){
    ll a,b;

    cin>>n>>m;
    for(int i=0;i<n;i++){
        int a;
        cin >>a;
        pq.push(a);
    }

    for(int i=0;i<m;i++){
    
        a=pq.top();
        pq.pop();
        b=pq.top();
        pq.pop();
        pq.push(a+b);
        pq.push(a+b);
    }

    while(!pq.empty()){
        res+=pq.top();
        pq.pop();
    }

    cout <<res;

    return 0;
}