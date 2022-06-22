/* e566: 10190 - Divide, But Not Quite Conquer! */

#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long int n, q;
    vector<long long int> list; 
    bool judge;

    while(cin>>n>>q){
        judge = true;
        list.clear();

        if(n < q || q <= 1 || n <= 1){
            cout<<"Boring!"<<endl;
        }else{
            while(n!=1){
                int k = n%q; 
                if(k==0){
                    list.push_back(n);
                }else{
                    judge=false;
                    break;
                }
                n = n/q;  
            }
            list.push_back(1);

            if(judge){
                for(int j=0;j<list.size();j++){
                    cout<<list[j]<<" ";
                }
                cout<<endl;
            }else{
                cout<<"Boring!"<<endl;
            }
        }
    }
    return 0;
}