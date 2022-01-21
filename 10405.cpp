//10405:Jolly Jumpers

//��t�ȰO�_��
#include<iostream>
using namespace std;

int main(){
	int n,JS=0,trueS=0;
	cin >> n;
	int temp[n]={0};
	//�����Ʀs�i�@��array 
	for(int i=1; i<=n ; i++){
		cin >> temp[i];
	}
	//�p��t�Ȩå[�_�� 
	for(int i=2; i<=n ; i++){
		int f = temp[i]-temp[i-1];
		if(f < 0) JS+=(-f);
		else JS+=f;
		
	}
	//�u�� 
	for(int j=1; j<=n-1; j++){
		trueS += j;
	}
	if(trueS==JS) cout<<"Jolly"<<endl;
	else cout<<"Not jolly"<<endl;
	
	
}
