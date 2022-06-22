/*e635: 12908 - The book thief*/
#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n && n!=0){
        int sum=0;
        int i=1;
        while(true){
            sum+=i;
            if(sum>n){
                cout<<sum-n<<' '<<i<<endl;
                break;
            }
            i+=1;   
        }
    }
}