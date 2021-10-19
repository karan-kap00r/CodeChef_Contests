#include <bits/stdc++.h>
using namespace std;

class test{
  public:
    int solve()
    {
        int q,n,l,r,enterInt,sum,sum2,min;
        cin>>q;
        for(int i=0;i<q;i++)
        {
            cin>>n>>l>>r;
            
            if(n>=l&&n<=r)
            {
                cout<<n<<endl;
                continue;
            }
            if(n<l)
            {
                cout<<l<<endl;
                continue;
            }
            sum2=INT_MAX;
            min=0;
            
            while(l<r && n/r < r)
            {
                int temp1=n/r,temp2=n%r;
                if(sum2>temp1+temp2)
                {
                    sum2=temp1+temp2;
                    min=r;
                }
                r=n/(temp1+1);				//r--
            }
            while(l<=r)
            {
                enterInt=n;
                sum=0;
                for(;;)
                {
                    if(enterInt<l)
                    {
                        sum+=enterInt;
                        if(sum < sum2)
                        {
                            min=l;
                            sum2=sum;
                        }
                        break;
                    }
                    sum+=enterInt%l;
                    enterInt/=l;
                    if(sum >= sum2)
                    break;
                }
                l++;
            }
            cout<<min<<endl;
        }
    }
};

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	test tt;
	tt.solve();
	return 0;
}
