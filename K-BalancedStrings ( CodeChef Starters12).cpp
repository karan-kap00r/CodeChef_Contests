#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pb push_back
const long double Pi = 3.141592653;
const ll mod=1e9+7;
long long INF =1000000000000000000;
//struct mycmp
//{
//    bool operator()(pair<int,int>a,pair<int,int>b)const
//    {
//        return (a.first<b.first) || (a.first==b.first && a.second>b.second);
//    }
//};
int main()
{
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;cin>>t;
    while(t--)
    {
        ll n,k;cin>>n>>k;
        string s;cin>>s;
        vector <int>v;
        vector <int>cnt(2*n,0);
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            v.pb(i),cnt[i]++;
        }
        int ans=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]-k>=0 && cnt[v[i]-k])
            continue;
            if(cnt[v[i]+k])
            continue;
            ++ans;
            //cout<<v[i]+k<<"\n";
            ++cnt[v[i]+k];
        }
        cout<<ans<<"\n";
    }
}
