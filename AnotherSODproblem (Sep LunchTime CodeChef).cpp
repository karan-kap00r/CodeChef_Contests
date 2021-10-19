#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    ll a,b,k=3;
	    cin>>a>>b;
	    if(a%3==0)
	        cout<<(b/k)-(a/k)+1<<endl;
	    else
	        cout<<(b/k)-(a/k)<<endl;
	}
	return 0;
}
