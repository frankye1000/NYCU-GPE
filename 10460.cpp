//10460:You can say 11
#include<iostream>
using namespace std;
int main(){
	// a�নchar/string
	// �_�Ʀ�m�Ʀr�M-���Ʀ�m�Ʀr�M��11������
	
	int n;
	while( cin >> n ){
		if(n==0) break;
		int a = n;
		int evenid_sum = 0;
		int oddid_sum = 0;
		int id = 0;
		while(a != 0){
			
			int r = a%10;  //�l��
			
			if(id%2==0){
				evenid_sum += r;
			}else{
				oddid_sum += r;
			}
			a = a/10;
			id += 1;		
		}
		
		if((evenid_sum-oddid_sum)%11==0){
			cout<<n<<" is a multiple of 11."<<endl;
		}else{
			cout<<n<<" is not a multiple of 11."<<endl;
		}
			
		}
		
		return 0;
}
