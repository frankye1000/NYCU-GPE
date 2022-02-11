// 10480:Square Numbers

#include<cmath>
#include<iostream>
using namespace std;


bool judge(float c)
{
    if(c-(int)c==0) return 0;
    else return 1;
}


int main()
{   
    float i, a, b;
    
    while(cin>>a>>b)
    {   
        if(a==0&b==0) break;
        int ca=0;
        for(i=a;i<=b;i++)
        {
            if(judge(sqrt(i))==0) ca++;
        }
    cout<<ca<<endl;
    }
    
    return 0;
}