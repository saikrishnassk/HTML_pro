/*
You are given a simple code of a function and you would like to know what it will return.


 F(N, K, Answer, Operator, A[N]) returns int;
  begin
      for i=1..K do
         for j=1..N do
            Answer=(Answer operator Aj)
       return Answer
  end




Here N, K, Answer and the value returned by the function F are integers; A is an array of N integers numbered from 1 to N; Operator can be one of the binary operators XOR, AND or OR. If you are not familiar with these terms then better have a look at following articles: XOR, OR, AND.

Input
The first line of input contains an integer T - the number of test cases in file. Description of each test case consists of three lines. The first one contains three integers N, K and initial Answer. Array A is given in the second line and Operator is situated on the third one. Operators are given as strings, of capital letters. It is guaranteed that there will be no whitespaces before or after Operator.

Output
Output one line for each test case - the value that is returned by described function with given arguments.

Constraints
1=T=100
1=N=1000
0=Answer, K, Ai=109
Operator is one of these: "AND", "XOR", "OR".
Example
Input:
3
3 1 0
1 2 3
XOR
3 1 0
1 2 3
AND
3 1 0
1 2 3
OR
Output:
0
0
3
 

Explanation
0 xor 1 xor 2 xor 3 = 0

0 and 1 and 2 and 3 = 0

0 or 1 or 2 or 3 = 3
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void func()
{
	ll n,k,ans;
	cin>>n>>k>>ans;
	ll a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	string str;
	cin>>str;
	if(k!=0){
		
	
	if(str=="XOR"){
		
		if(k%2!=0)
		{
		
			for(ll j=0;j<n;j++){
				ans=ans^a[j];
			}
	}
	}
	else if(str=="AND"){
		
			for(ll j=0;j<n;j++){
				ans=ans&a[j];
			}
		
	}
	else {
		
			for(ll j=0;j<n;j++){
				ans=ans|a[j];
			}
	
	}
}
	cout<<ans<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		func();
	}
}