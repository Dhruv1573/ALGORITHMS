#include<bits/stdc++.h>
using namespace std;
#define lint long long int
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define mod 1000000007
#define MAXN 100001
#define len length()
#define testcase(t) for(int i=0;i<t;i++)
#define endl "\n"
#define space " "
lint dp[101][101];
lint optimalAns(lint a[],lint n,lint i,lint j)
{
	//Base Case
	if(i>j)
		return 0;
	if(dp[i][j]!=-1)
		return dp[i][j];
	return dp[i][j]=max(a[i]+min(optimalAns(a,n,i+1,j-1),optimalAns(a,n,i+2,j)),a[j]+min(optimalAns(a,n,i+1,j-1),optimalAns(a,n,i,j-2)));
}
void solve()
{
	lint t;
	cin>>t;
	testcase(t)
	{
		lint n,k,q;
		string s;
		char c;
		cin>>n;
		lint a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		memset(dp,-1,sizeof(dp));
		cout<<optimalAns(a,n,0,n-1)<<endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	
	solve();
}