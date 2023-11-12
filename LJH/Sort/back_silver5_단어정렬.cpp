#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int n;
vector<string> vs;
int compare(string a,string b){
    if(a.length()==b.length()){
        return a<b;
    }
    else{
        return a.length()<b.length();
    }
}
int main(){

    cin >>n;
    for(int i=0;i<n;i++){
          string s;
        cin>>s;
        vs.push_back(s);
    }

    sort(vs.begin(),vs.end(),compare);
    vs.erase(unique(vs.begin(),vs.end()),vs.end());
        for(int i=0;i<n;i++){
        cout<<vs[i]<<"\n";
    }
    return 0;

}
