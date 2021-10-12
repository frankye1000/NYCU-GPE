// 10473:Summing Digits
//先做出f的方程式
//在用遞迴，如果/10只剩0就停止 
#include<iostream>
using namespace std;

int digitSum(int num){
	int sum = 0;
	while(num!=0){
		sum += (num%10);
		num /= 10;
	}
	return sum;
}



int main(){
	int num, sum;
	while(cin >> num){
		if(num==0) break;
		
		while(num/10!=0){
			sum = digitSum(num);
			num = sum;
		}
		cout<<num<<endl;
	}
	return 0;
}
