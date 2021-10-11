//10460:You can say 11
#include<iostream>
#include <string>
using namespace std;

int main(){
	// a锣Θchar/string
	// 计竚计㎝-案计竚计㎝11计
	
	string num;
	while( getline(cin, num)){
		if(num=="0"){
			break;
		}

		int evenid_sum = 0;
		int oddid_sum = 0;
		for(int i = 0; i < num.length();i++){
			int n = num[i]-'0';
			if(i%2==0) evenid_sum += n;
			else oddid_sum += n;
		}
		
		if((evenid_sum-oddid_sum)%11==0){
			cout<<num<<" is a multiple of 11."<<endl;
		}else{
			cout<<num<<" is not a multiple of 11."<<endl;
		}
			
		}
		
		return 0;
}
