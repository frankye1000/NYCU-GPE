//10405:Jolly Jumpers

//把差值記起來
#include<iostream>
using namespace std;

int main(){
	int n,JS=0,trueS=0;
	cin >> n;
	int temp[n]={0};
	//先把資料存進一個array 
	for(int i=1; i<=n ; i++){
		cin >> temp[i];
	}
	//計算差值並加起來 
	for(int i=2; i<=n ; i++){
		int f = temp[i]-temp[i-1];
		if(f < 0) JS+=(-f);
		else JS+=f;
		
	}
	//真值 
	for(int j=1; j<=n-1; j++){
		trueS += j;
	}
	if(trueS==JS) cout<<"Jolly"<<endl;
	else cout<<"Not jolly"<<endl;
	
	
}
