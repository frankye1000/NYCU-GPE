/* a737: 10041 - Vito's family */
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int r;
        cin>>r;
        int R[r]={};
        for(int j=0;j<r;j++) cin>>R[j];
        sort(R,R+r);

        int half=r/2;
        int a=R[half], b=R[half-1];
        int tempa=0, tempb=0;

        for(int j=0;j<r;j++){
            tempa += abs(a-R[j]);
            tempb += abs(b-R[j]);
        }

        cout<<min(tempa,tempb)<<endl;

    }
    return 0;
}