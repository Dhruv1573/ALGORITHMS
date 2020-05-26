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
lint wines(lint a[],lint i,lint j,lint y,lint dp[][100])
{
	//Base Case
	if(i>j)
		return 0;

	if(dp[i][j]!=0)
		return dp[i][j];
	//Recursive Case
	lint op1=a[i]*y+wines(a,i+1,j,y+1,dp);
	lint op2=a[j]*y+wines(a,i,j-1,y+1,dp);
	return dp[i][j]=max(op1,op2);
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
		lint dp[100][100];
		cin>>n;
		lint a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		lint y=1;
		cout<<wines(a,0,n-1,y,dp)<<endl;
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