#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int arr[7];
	    for(int i=0;i<7;i++)
	    {
	        cin>>arr[i];
	    }
	    int sun=0,rain=0;
	    for(int i=0;i<7;i++)
	    {
	        if(arr[i]==1)
	        {
	            sun++;
	        }
	        else
	        {
	            rain++;
	        }
	    }
	    if(sun>=rain)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
