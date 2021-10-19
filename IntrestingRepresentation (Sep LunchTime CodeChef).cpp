#include <bits/stdc++.h>
using namespace std;
 
#define int long long

void solve()
{
    int n;
    cin >> n;
    if(n%2==0)
    {
        cout << 2*n << " " << n << "\n";
        return;
    }
    else
    {
        if(n==1)
        {
            cout << 3 << " " << 2 << "\n";
            return;
        }
        else
        {
            vector <int> Pr = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
            
            int f=2;
            for(int i=1;i<20;i++)
            {
                if(n%Pr[i]!=0)
                {
                    f=Pr[i];
                    break;
                }
            }
            cout << f*n << " " << (f-1)*n << '\n';
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
}
