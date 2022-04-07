#include<bits/stdc++.h>

int main(){

int n;

cin>>n;

bool isPrime=false;

for(int i=2;i<n;i++){
	if(n%i==0){
		isPrime=true;
		break;
	}
}
return 0;
}