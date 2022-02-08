// 10421:All You Need Is Love

#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main()
{
    int i, n, t;
    string s1, s2;

    cin>>n ; //輸入測資數量
    for(int t=1; t<=n; t++)
    {
        cin>>s1>>s2; //輸入測資
        cout<<"Pair #"<<t<<": "; //照格式輸出
        
        int cn1=0,cn2=0,dig; //將輸入轉成十進制用
    
        for(i=0; i<s1.length(); i++)   //將第一組數字轉成十進位
        {  
            dig=s1[i]-'0'; //先取得該位數的數字
            cn1+=dig*pow(2,s1.length()-i-1); //再乘上它的位數的值
        }

        for(i=0; i<s2.length(); i++)    //將第二組數字轉成十進位
        {   
            dig=s2[i]-'0'; //先取得該位數的數字
            cn2+=dig*pow(2,s2.length()-i-1); //再乘上它的位數的值
        }

        if(cn2>cn1)    //因為要用輾轉相除法，所以找出比較大的數
        {
            dig=cn2;
            cn2=cn1;
            cn1=dig;
        }

        do    //輾轉相除法
        {
            dig=cn1%cn2;
            cn1=cn2;
            cn2=dig;
        }while(dig!=0&&dig!=1); //若餘數為0表示有公因數，若為1表示兩數互質

        if(dig==0){
            cout<<"All you need is love!"<<endl;
        }else{
            cout<<"Love is not all you need!"<<endl;
        }

    }

    return 0;
}

