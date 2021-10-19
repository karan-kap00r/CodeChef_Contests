#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    int a,b,c,d,e,I(0),E(0),D(0);
	    cin>>a>>b>>c>>d>>e;
	    vector<int>v;
	        v.push_back(a);
	        v.push_back(b);
	        v.push_back(c);
	        v.push_back(d);
	        v.push_back(e);
	     for(auto i:v)
	     {
	         if(i==1)I++;
	         else if(i==2)E++;
	         else D++;
	     }
	     if(I>E)
	        cout<<"INDIA"<<endl;
	     else if(E>I)
	        cout<<"ENGLAND"<<endl;
	     else
	        cout<<"DRAW"<<endl;
	}
	return 0;
}

