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
bool isSorted(lint a[],lint n)
{
	//Base Case
	if(n==0||n==1)
		return true;
	//Recursive Case
	if(a[0]<a[1])
		return true;
	isSorted(a,n-1);
	return false;
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
		cout<<isSorted(a,n)<<endl;
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