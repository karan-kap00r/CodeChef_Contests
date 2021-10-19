#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    int n,ans=1,res=0;
	    cin>>n;
	    if(n==1)
	    cout<<"3"<<endl;
	    
	    else if(n==2)
	    cout<<"15"<<endl;
	    
	    else
	    {
	       cout<<"3";
	       for(int i=1;i<=n-2;i++)
	       {
	           cout<<"0";
	       }
	       cout<<"3"<<endl;
	    }
	}
	return 0;
}
