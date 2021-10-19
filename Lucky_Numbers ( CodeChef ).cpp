#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    int a,b,c;
	    int flag=0;
	    cin>>a>>b>>c;
	    if(a==7 || b==7 || c==7)
	    {
	        flag= 1;
	    }
	    if(flag==1)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}
