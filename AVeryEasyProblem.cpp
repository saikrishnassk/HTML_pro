/*
Input
There's no input.

Output
Output some form of these numbers: 137, 1315, 73, 136, 255, 1384, 16385, one per line in the listed order.

Example
Output:
The first two lines of the CORRECT output file are:

137=2(2(2)+2+2(0))+2(2+2(0))+2(0)
1315=2(2(2+2(0))+2)+2(2(2+2(0)))+2(2(2)+2(0))+2+2(0)

The correct output file should contain 7 lines.
*/
#include <iostream>
using namespace std;

int main() {
	cout<<"137=2(2(2)+2+2(0))+2(2+2(0))+2(0)"<<endl;
cout<<"1315=2(2(2+2(0))+2)+2(2(2+2(0)))+2(2(2)+2(0))+2+2(0)"<<endl;
cout<<"73=2(2(2)+2)+2(2+2(0))+2(0)"<<endl;
cout<<"136=2(2(2)+2+2(0))+2(2+2(0))"<<endl;
cout<<"255=2(2(2)+2+2(0))+2(2(2)+2)+2(2(2)+2(0))+2(2(2))+2(2+2(0))+2(2)+2+2(0)"<<endl;
cout<<"1384=2(2(2+2(0))+2)+2(2(2+2(0)))+2(2(2)+2)+2(2(2)+2(0))+2(2+2(0))"<<endl;
cout<<"16385=2(2(2+2(0))+2(2)+2)+2(0)"<<endl;
	return 0;
}

