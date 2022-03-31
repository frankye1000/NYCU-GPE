/*a941: 10041 - Vito's large family*/
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int r;                                   // 0<r<2000000
        cin >> r;
        // counting sort
        int R[30001] = {};
        for(int j=0;j<r;j++){
            int temp;
            cin >> temp;
            R[temp] += 1;
            }
        

        // find median && median+1
        int half = r/2, halfO = r/2+1;
        int bossadd_1, bossadd_2;
        for(int j=0;j<30001;j++){
            half  -= R[j];
            if(half<=0){
                bossadd_1 = j;
                break;
            }
        }
        for(int j=0;j<30001;j++){
            halfO  -= R[j];
            if(halfO<=0){
                bossadd_2 = j;
                break;
            }
        }

        // calculate min distance
        long long diff_1=0, diff_2=0;
        for(int j=0;j<30001;j++){
            diff_1 += abs(bossadd_1-j)*R[j];
            diff_2 += abs(bossadd_2-j)*R[j];
        }

        if(diff_1<=diff_2) cout<<diff_1<<" "<<bossadd_1<<endl;
        else cout<<diff_2<<" "<<bossadd_2<<endl;
    }
    return 0;
}