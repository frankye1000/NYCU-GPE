//10453:Odd Sum
#include<iostream>
using namespace std;


int oddSum(int a, int b){
	int oddSum=0;
	for(int i=a; i<=b; i+=2){
			oddSum+=i; 
	}
	return oddSum;
}

int main(){
	int T;
	cin >> T;
	
	for(int i=1; i<=T; i++){
		int a,b;
		cin>>a>>b;
		if(a%2==0) a++;
		cout<<"Case "<<i<<": "<<oddSum(a,b)<<endl;
	}
	return 0;
}
