//10510:Super long sums
#include<iostream>
using namespace std;


int pow(int n, int e){

	int s = 1;
	while(e>0){
		s*=n;
		e--;
	}
	return s;
}	

int main(){
	int t,n,a,b;
	cin >> t;
	for(int j=1; j<=t; j++){
		cin >> n;
		int sum=0;
		for(int i=1; i<=n; i++){
			cin>>a>>b;
			sum+=((a+b)*pow(10,n-i));
		}
		cout<<sum<<endl;
	}
	
	return 0;
}
