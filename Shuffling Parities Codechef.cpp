#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int flag=0,temp=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==1)
			flag+=1;
		else
			temp+=1;
	}
	int t=min(flag,n/2)+ min(temp,(n+1)/2);
	cout<<t<<endl;
    }
	return 0;
}

