/* a158: 11827 - Maximum GCD */
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int GCD(int a, int b){
    //a bigger
    if(a<b){
        int temp=a;
        a=b;
        b=temp;
    }
    //輾轉相除法
    while(a%b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    //GCD
    return b;

}

int main(){
    int n;
    (cin>>n).get();
    //cin one string
    //getline() 每次讀入資料時會讀到換行符號 (newline character) 才停止
    string s;
    for(int h=0; h<n; h++){
        getline(cin, s);
        stringstream ss(s);      //use stringstream split string, have create one temp string to store.
        int t;
        int A[100]={}, index=0;
            
        while(ss>>t){           // 使用這樣的方法，就可以將字串依照空格分割
            A[index]=t;
            index++;
        }

        // find max GCD
        int maxGCD=0;
        for(int i=0;i<index-1;i++){
            for(int j=i+1;j<index;j++){
                if(GCD(A[i],A[j])>maxGCD) maxGCD=GCD(A[i],A[j]);
            }
        }
        cout<<maxGCD<<endl;
         
    }
    return 0;
}