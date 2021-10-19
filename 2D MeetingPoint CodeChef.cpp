#include <bits/stdc++.h>
using namespace std;
#define ld long double

int checkit(ld h,ld k,ld arr_x[],ld arr_y[],int n)
{
    int flag=0;
    for(int j=0;j<n;j++)
    {
        ld xx=h-arr_x[j];
        ld yy=k-arr_y[j];
        if(xx==0 && yy==0)
            flag+=0;
        else if((xx==0 && yy!=0)||(xx!=0 && yy==0))
            flag++;
        else if(abs(xx)==abs(yy))
            flag++;
        else
            flag+=2;
    }
    return flag;
}

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    ld arr_x[n],arr_y[n];
	    ld h, k;
	    for(int i=0;i<n;i++)
	        cin>>arr_x[i];
	    for(int i=0;i<n;i++)
	        cin>>arr_y[i];
	    int minSteps=INT_MAX;
	    for(int i=0;i<n;i++)
	    {
	        for(int l=0;l<n;l++)
	        {
	            //Intersection of mean points
	            h=(arr_x[i]+arr_x[l])/2;
	            k=(arr_y[i]+arr_y[l])/2;
	            minSteps=min(minSteps,checkit(h,k,arr_x,arr_y,n));
	            
	            //Intersection between x and y
	            h=arr_x[i];
	            k=arr_y[l];
	            minSteps=min(minSteps,checkit(h,k,arr_x,arr_y,n));
	            
	            //Intersection points between x+y and x-y
	            ld c1=arr_x[i]+arr_y[i];
	            ld c2=arr_x[l]-arr_y[l];
	            h=(c1+c2)/2;
	            k=(c1-c2)/2;
	            minSteps=min(minSteps,checkit(h,k,arr_x,arr_y,n));
	            
	            //Intersection point between x+y and x
	            ld c3=arr_x[i]+arr_y[i];
	            h=arr_x[l];
	            k=c3-h;
	            minSteps=min(minSteps,checkit(h,k,arr_x,arr_y,n));
	            
	            //Interscetion between x+y and y
	            ld c4=arr_x[i]+arr_y[i];
	            k=arr_y[l];
	            h=c4-k;
	            minSteps=min(minSteps,checkit(h,k,arr_x,arr_y,n));
	            
	            //Interscetion between x-y and x
	            ld c5=arr_x[i]-arr_y[i];
	            k=arr_x[l];
	            k=h-c5;
	            minSteps=min(minSteps,checkit(h,k,arr_x,arr_y,n));
	            
	            //Interscetion between x-y and y
	            ld c6=arr_x[i]-arr_y[i];
	            k=arr_y[l];
	            h=c6+k;
	            minSteps=min(minSteps,checkit(h,k,arr_x,arr_y,n));
	        }
	    }
	    cout<<minSteps<<endl;
	}
	return 0;
}
