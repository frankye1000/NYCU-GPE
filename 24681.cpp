//24681:Perfection

#include<iostream>
using namespace std;

int main(){
	cout<<"PERFECTION OUTPUT"<<endl;
	int n;
	while(cin >> n){
		if(n==0){
			cout<<"END OF OUTPUT"<<endl;
			break;
		} 
		int sum=0;
		for(int i=1; i<n; i++){
			if(n%i==0) sum+=i;
		}
		
		if(n==sum) cout<<"PERFECT"<<endl; 
		else if(n<sum) cout<<"ABUNDANT"<<endl;
		else cout<<"DEFICIENT"<<endl;
		
	}
	return 0;
} 

