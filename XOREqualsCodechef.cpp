#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,i,mx_freq=0;
		cin>>n>>x;
		map<int,int>mp;
		
		for(int i=0;i<n;i++)
		{
			int num;
			cin>>num;
			mp[num]++;
			mx_freq=max(mx_freq,mp[num]);
		}
		
		int ops=0;
		for(auto it :mp)
		{
			int cnt=it.second;
			if(x!=0)
				cnt+=mp[it.first^x];
			int req=mp[it.first^x];
	
		if(cnt > mx_freq)
		{
			mx_freq=cnt;
			ops=req;
		}
		else if(cnt == mx_freq)
		{
			ops=min(ops,req);
		}
	}
		cout<<mx_freq<<" "<<ops<<endl;
	}
	return 0;
}
