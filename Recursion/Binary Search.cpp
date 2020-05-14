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
//Ques. Perform Binary Search using Recursion 
lint Binary_Search(lint a[],lint n,lint k,lint s,lint e)
{
	//Base Case
	if(s>e)
		return -1;
	lint mid=(s+e)/2;
	if(a[mid]>k)
		return Binary_Search(a,n,k,s,mid-1);
	else if(a[mid]<k)
		return Binary_Search(a,n,k,mid+1,e);
	else
		return mid;
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
		cin>>n>>k;
		lint a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cout<<Binary_Search(a,n,k,0,n-1)<<endl;
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