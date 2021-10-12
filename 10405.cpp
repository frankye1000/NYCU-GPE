//10405:Jolly Jumpers

//把差值記起來
#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int temp[n]={0};
	int J[n]={0};
	for(int i=1; i<=n ; i++){
		cin >> temp[i];
	}
	for(int i=0; i<=n ; i++){
		cout << temp[i]<<endl;
	}
	
}
