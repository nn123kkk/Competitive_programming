#include <bits/stdc++.h>
 
#define ll          long long
#define pb          push_back
#define pii         pair<int,int> 
#define vi          vector<int>
#define vii         vector<pii>
#define mi          map<int,int>
#define mii         map<pii,int>
#define all(a)      (a).begin(),(a).end()
#define F         first
#define S           second
#define sz(x)       (int)x.size()
#define endl        '\n'
#define hell        1000000007
#define what_is(x)  cerr << #x << " is " << x << endl;
#define rep(i,a,b)  for(int i=a;i<b;i++)
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n,sum=0;
        cin>>m>>n;
        ll a[m+5],b[n+5],y[5]={0};
        rep(i,0,m)
        cin>>a[i];
        rep(i,0,n)
        cin>>b[i];
        rep(i,0,n)
        {
        	if(b[i]<5)
        	{
        		y[b[i]]++;
			}
		}
        sort(b,b+n);
        rep(i,0,m)
        {
        	if(a[i]==1)
            {
            	sum+=y[0];
			}
			else
			{
				rep(j,0,n)
                {
				    if(a[i]<b[j])
                    {
                        sum=sum+n-j;
                        break;
                    }
					if(a[i]==2)
					sum-=y[3]+y[4];
					if(a[i]==3)
					sum+=y[2];	
                }
			}
        }
        cout<<sum<<endl;
    }
    
    
    return 0;
}
