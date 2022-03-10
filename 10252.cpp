/*e507: 10252 – Common Permutation*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string a,b;
    while(cin>>a>>b){
        int A[26],B[26];
        for(int i=0;i<26;i++){
            A[i]=0;
            B[i]=0;
        }
        
        for(int i=0;i<a.length();i++) A[int(a[i])-97]+=1;
        for(int i=0;i<b.length();i++) B[int(b[i])-97]+=1;

        for(int i=0;i<26;i++){
            int m=min(A[i],B[i]);
            for(int j=0;j<m;j++) cout<<char(i+97);
        }
        cout<<endl;
    }
    
    return 0;
}