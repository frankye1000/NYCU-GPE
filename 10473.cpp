// 10473:Summing Digits
//�����Xf����{��
//�b�λ��j�A�p�G/10�u��0�N���� 
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
