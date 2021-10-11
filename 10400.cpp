//10400:The 3n + 1 problem

#include<iostream>
using namespace std;

int count(int n){
	int c=1; 
	while(n!=1){
		if(n%2==0){
			n=n/2;
			c++;
		}else{
			n=3*n+1;
			c++;
		}
		
	};
	return c;	
}

int main(){
	//�̷Ӥ����p��
	//�n�@�ӭp�ƾ��p�����
	//�@����s�̤j����
	int n,e,c;
	while(cin >> n >> e){
		int maxc=1;
		for(int i=n; i<=e; i++){
			c=count(i);
			if(maxc<c){
				maxc=c;	
			}
		}
		cout<<maxc<<" "<< n <<" "<<e;
	}
	
	
	return 0;
}




