/*
"What do you know about happiness?" � Yoda

Chef is happy only if three conditions hold:

Chef finished cooking a delicious meal
Chef got AC for a programming problem with an almost correct code
Chef got a new problem with a sequence of integers
Today, all three conditions are satisfied. Chef would like you to feel his happiness and provide him with a solution for this new problem with a sequence of integers. The problem is as follows.

You are given a sequence A1,A2,�,AN. You need to determine if it is possible to choose two indices i and j such that Ai?Aj, but AAi = AAj. (If it was possible, Chef would be truly happy.)

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers A1,A2,�,AN.
Output
For each test case, print a single line containing the string "Truly Happy" if it is possible to choose required indices or "Poor Chef" otherwise.

Constraints
1=T=1,000
1=N=105
1=Ai=N for each valid i
the sum of N over all test cases does not exceed 2�105
Subtasks
Subtask #1 (27 points): 1=N=1,000
Subtask #2 (73 points): original constraints

Example Input
4
4
1 1 2 3
4
2 1 3 3
5
5 4 4 3 1
5
3 2 1 1 4
Example Output
Truly Happy
Poor Chef
Poor Chef
Truly Happy
Explanation
Example case 1: Chef is truly happy because AA3=AA1 and A3?A1.

Example case 2: There is no pair of indices which would make Chef truly happy. For instance, AA3=AA4, but A3=A4,
*/
/*
scanf("%d",&n);
	for(int i=1;i<=n;++i)
		scanf("%d",a+i),b[i]=c[i]=0;
	for(int i=1;i<=n;++i) b[a[i]]=1;
	int aa=0;
	for(int i=1;i<=n;++i)
		if(b[i]) aa|=c[a[i]],c[a[i]]=1;
	if(aa) puts("Truly Happy");
	else puts("Poor Chef");
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		long f=0,a[n+1];
		for(long i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(long i=1;i<=n;i++)
		{
			for(long j=1;j<=n;j++){
				if(a[i]!=a[j]){
					if(a[a[i]]==a[a[j]]){
						f=1;
					}
				}
			}
		}
		if(f==1){
			cout<<"Truly Happy\n";
		}
		else{
			cout<<"Poor Chef\n";
		}
		
		
	}
}
