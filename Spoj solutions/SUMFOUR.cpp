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

int main()
{
	ll n;
	cin>>n;
	ll a[n+5],b[n+5],c[n+5],d[n+5];
	vector<ll> s1,s2;
	rep(i,0,n)
	{
		cin>>a[i]>>b[i]>>c[i]>>d[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	sort(c,c+n);
	sort(d,d+n);
	rep(i,0,n)
	{
		rep(j,0,n)
		{
			s1.push_back(a[i]+b[j]);
		}
	}
	rep(i,0,n)
	{
		rep(j,0,n)
		{
			s2.push_back(c[i]+d[j]);
		}
	}
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	ll lo,hi,sum=0;
	for(ll i=0;i<s1.size();i++)
	{
		lo=lower_bound(s2.begin(),s2.end(),-s1[i])-s2.begin();
        hi=upper_bound(s2.begin(),s2.end(),-s1[i])-s2.begin();
        sum+=(hi-lo);
	}
	cout<<sum;
	return 0;
}
