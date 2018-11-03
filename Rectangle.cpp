/*
You are given four integers a, b, c and d. Determine if there's a rectangle such that the lengths of its sides are a, b, c and d (in any order).

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains four space-separated integers a, b, c and d.
Output
For each test case, print a single line containing one string "YES" or "NO"
Example
Input:

3
1 1 2 2
3 2 2 3
1 2 2 2

Output:

YES
YES
NO

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if((a==b&&c==d)||(a==c&&b==d)||(a==d&&c==b) )
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
}