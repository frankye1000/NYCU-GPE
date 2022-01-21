//10417:The Hotel with Infinite Rooms
#include<iostream>
using namespace std;
int main(){
    int S, D;
    while(cin >> S >> D){
        if(S==0 && D==0) break;
        int starts = S;
        int ED = 0;
        while(ED < D){
            for(int i=0; i<starts; i++){
                ED += 1;
                
            }
            starts += 1;
            
        }
        cout << starts-1 << endl;
    }



    return 0;
}
