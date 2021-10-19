#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    int arr[n];
	    for(int i=1;i<=n;i++)
	    {
	        arr[i]=i;
	    }
	    if(n%2 != 0)
	    cout<<"NO"<<endl;
	    else
	    {
	        if(n%4!=0)
	        {
	            cout<<"NO"<<endl;
	        }
	        else
	        {
	            cout<<"YES"<<endl;
	           int a[n/2],b[n/2];
	           int i=1,j=n,k=0,l=0;
	           while(i<j)
	           {
	               a[k]=arr[i];
	               k++;
	               a[k]=arr[j];
	               k++;
	               
	               j--;
	               i++;
	               
	               b[l]=arr[i];
	               l++;
	               b[l]=arr[j];
	               l++;
	               j--;
	               i++;
	           }
	           
	           sort(a,a+n/2);
	           sort(b,b+n/2);
	           for(int t:a)
	                cout<<t<<" ";
	           cout<<endl;
	           for(int t:b)
	                cout<<t<<" ";
	        cout<<endl;
	        }
	    }
	}
	return 0;
}
