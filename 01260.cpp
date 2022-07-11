/*1260 Sales*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,t,r=0;
        cin>>a;
        vector<int> v;
        cin>>t;
        v.push_back(t);
        for(int j=1;j<a;j++){
            int temp;
            cin>>temp;

            //比較大小
            for(int k=0;k<v.size();k++){
                if(v[k]<=temp) r++;
            }
            v.push_back(temp);
        }
        cout<<r<<endl;
    }
    return 0;
}