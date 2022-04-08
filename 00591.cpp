/* c067: 00591 - Box of Bricks */
#include<iostream>
using namespace std;

int main(){
    int n,c=1;
    while(cin>>n && n!=0){
        int move=0,total=0,avg=0,A[n]={};
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            total+=temp;
            A[i]=temp;
        }
        avg=total/n;
        
        for(int i=0;i<n;i++){
            if(A[i]>avg) move+=A[i]-avg;
        }
        cout<<"Set #"<<c<<endl;
        cout<<"The minimum number of moves is "<<move<<"."<<endl;
        c++;
    }

    return 0;
}