/* c001: 10405 - Longest Common Subsequence */

#include<iostream>
#include<string>
using namespace std;

int main(){
    string a,b;
    while(cin>>a>>b){
        int A[a.length()+1][b.length()+1]={};
        for(int x=0; x<a.length(); x++){
            for(int y=0; y<b.length(); y++){
                if(a[x]==b[y]){
                    A[x+1][y+1] = A[x][y] + 1;
                }else{
                    A[x+1][y+1] = max(A[x][y+1], A[x+1][y]);
                }
            }
        }
        cout<<A[a.length()][b.length()]<<endl;
    }
    return 0;
}