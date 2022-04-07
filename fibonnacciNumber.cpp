#include <iostream>
using namespace std;

int main() {
	
int n;
cin>>n;

int a=0,b=1;
cout<<a<<endl;
cout<<b<<endl;

for(int i=2;i<n;i++){
	int c=a+b;
	cout<<c<<endl;
	int temp=b;
	b=c;
	a=temp;
}

	return 0;
}
