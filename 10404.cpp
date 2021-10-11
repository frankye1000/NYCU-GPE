//10404:Primary Arithmetic

#include<iostream>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){ 
		
		if(a==0 && b==0) break;		
		int c=0;
		int q=0;
		while(a!=0 && b!=0){
			if(a%10 + b%10 + q >= 10){
				c++;
				q=1;
			}else{
				q=0;
			}
			a/=10;
			b/=10; 	
		}
		
		
		if(c==0) cout<<"No carry operation."<<endl;
		else cout<<c<<" carry operation."<<endl;
	}
	
	return 0;
}
