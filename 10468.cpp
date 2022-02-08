// 10468:Maximum Product

#include<iostream>
using namespace std;

int main()
{
    int s[18],n,ca=1;    //最多18個測資
    
    while(cin>>n)
    {
        for(int i=0;i<n;i++) cin>>s[i]; //將測資輸入array
        
        long long int max=0;   
        for(int i=0;i<n;i++)
        {   
            int temp=s[i];
            if(temp>max) max=temp;
            for(int j=i+1;j<n;j++)
            {
                temp*=s[j];
                if(temp>max) max=temp;
            }
        }
        cout<<"Case #"<<ca<<": The maximum product is "<<max<<endl;
        ca+=1;
    }
    










    return 0;
}


