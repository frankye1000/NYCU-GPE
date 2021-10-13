//10463:Simple Addition

#include<iostream>
using namespace std;

int F(int n){
	if(n==0) return 0;
	else if(n%10>0) return n%10;
	else return F(n/10);
}

int S(int p, int q){
	int s=0;
	for(int i=p;i<=q;i++){
		s+=F(i);
	}
	return s;
}


int main(){
	int p,q;
	while(cin>>p>>q){
		if(p==-1&q==-1) break;
		cout<<S(p, q)<<endl;	
	}
	
	
	
	
	return 0;
}
