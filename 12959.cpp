/* 12959 Strategy Game*/
#include <iostream>
using namespace std;

int main(){
    int J,R,s;
    while(cin>>J>>R){
        if(J==0 && R==0) break;
        int score[J]={};         // J's players

        for(int r=0;r<R;r++){       // rounds
            for(int j=0;j<J;j++){   // players
                cin>>s;
                score[j]+=s;
            }
        }

        int winner=0, maxscore=0;

        for(int j=0;j<J;j++){
            if(score[j]>=maxscore){
                winner=j;
                maxscore=score[j];
                }
        } 
        cout<<winner+1<<endl;
    }
    return 0;
}
