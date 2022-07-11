/*118 Mutant Flatworld Explorers*/
#include <iostream>
#include <string>
using namespace std;

int CharDirection2Int(char char_d){
    if(char_d=='N') return 0;
    else if(char_d=='E') return 1;
    else if(char_d=='S') return 2;
    else return 3;
}

char Int2CharDirection(int d){
    if(d==0) return 'N';
    else if(d==1) return 'E';
    else if(d==2) return 'S';
    else return 'W';
}


int turnDirection(int d){
    if(d>=0) return d%4;
    else return (d%4)+4;
}


int main(){
    //一開始的方框長寬
    int L,W;
    cin>>L>>W;
    int x,y;          //初始點
    char char_d;
    int Lost[L+1][W+1]={}; //要記錄超出框框的座標點，如果下次超出框框的座標點和紀錄的一樣，就自動忽略
    while(cin>>x>>y>>char_d){
        
        int d = CharDirection2Int(char_d);
        string step,Flag="";
        cin>>step;
        for(int i=0;i<step.size();i++){
            if(step[i]=='F'){  //前進

                if(d==0){      //北
                    y++;
                    if(y>W){   //超過邊界
                        if(Lost[x][y-1]==1){  //如果之前走過，就不走
                            Flag="";
                            y--;
                        }else{               //如果之前沒走過，就走並把Flag="LOST"
                            Flag="LOST";
                            Lost[x][y-1]=1;
                            y--;
                            break;
                        }
                    }    
                }      
                else if(d==1){
                    x++;         //東
                    if(x>L){   //超過邊界
                        if(Lost[x-1][y]==1){  //如果之前走過，就不走
                            Flag="";
                            x--;
                        }else{               //如果之前沒走過，就走並把Flag="LOST"
                            Flag="LOST";
                            Lost[x-1][y]=1;
                            x--;
                            break;
                        }
                    }  
                } 
                else if(d==2){
                    y--;       //南
                    if(y<0){   //超過邊界
                        if(Lost[x][y+1]==1){  //如果之前走過，就不走
                            Flag="";
                            y++;
                        }else{               //如果之前沒走過，就走並把Flag="LOST"
                            Flag="LOST";
                            Lost[x][y+1]=1;
                            y++;
                            break;
                        }
                    }
                } 
                else {
                    x--;       //西
                    if(x<0){   //超過邊界
                        if(Lost[x+1][y]==1){  //如果之前走過，就不走
                            Flag="";
                            x++;
                        }else{               //如果之前沒走過，就走並把Flag="LOST"
                            Flag="LOST";
                            Lost[x+1][y]=1;
                            x++;
                            break;
                        }
                    }
                }


            }else{            //L、R 轉方向
                if(step[i]=='R'){ //右轉
                    d++;
                    d = turnDirection(d);
                    } 
                else{             //左轉
                    d--;
                    d = turnDirection(d);
                    }             
            }
        }
        if(Flag=="LOST") cout<<x<<" "<<y<<" "<<Int2CharDirection(d)<<" "<<Flag<<endl;
        else cout<<x<<" "<<y<<" "<<Int2CharDirection(d)<<endl;
    }
    return 0;
}