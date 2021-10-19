#include <bits/stdc++.h>
const int mod=1e9 + 7;
using namespace std;
#define ll long long
#define tc int t;cin>>t;
#define endl "\n"
#define fast_io  ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define all(v) v.begin,v.end()

void solve(){

int a,b,c,x,y,z;
cin>>a>>b>>c;
cin>>x>>y>>z;
vector<pair<int,int>>ans={{x,a},{y,b},{z,c}};

sort(ans.rbegin(),ans.rend());
int total=240;
int points=0;
points+=ans[0].first * 20;
total-=ans[0].second * 20;
while(total>0){
    for(int i=0;i<20;i++){
        if(total<=0){
            break;
        }
        points+=ans[1].first;
        total-=ans[1].second;
    }
    for(int i=0;i<20;i++){
        if(total<=0){
            break;
        }
        points+=ans[2].first;
        total-=ans[2].second;
    }
    
}
cout<<points+total<<endl;

}


int main() {
fast_io;
tc;
while(t--){
    solve();
}

return 0;
}
