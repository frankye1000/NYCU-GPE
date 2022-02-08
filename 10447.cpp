// 10447:Can You Solve It?

#include<iostream>
using namespace std;

int main()
{
    int i,j,n,x1,y1,x2,y2;
    cin>>n;
    for(i=1;i<=n;i++)
    {   
        int g1=0,g2=0,diff1=0,diff2=0;
        cin>>x1>>y1>>x2>>y2;
        
        g1=x1+y1+1;  //先計算第一個座標位置位於哪群
        for(j=1;j<g1;j++){  //計算和(0,0)座標的差值
            diff1+=j;
        }
        diff1+=x1;

        g2=x2+y2+1;  //先計算第二個座標位置位於哪群
        for(j=1;j<g2;j++){  //計算和(0,0)座標的差值
            diff2+=j;
        }
        diff2+=x2;

        cout<<"Case "<<i<<": "<<diff2-diff1<<endl;
    }

    return 0;
}