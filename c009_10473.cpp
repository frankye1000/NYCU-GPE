/* c009: 10473 - Simple Base Conversion */ 

#include<cstdio> 
#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main()  
{  
    string a;
    while(cin>>a){
        if(a[0]=='-') break;

        char s[100]={0};
        // detect hex
        if(a[0]=='0' && a[1]=='x'){
            //hex2dec
            a = a.substr(2,a.size()-2);
            
            int dec = 0;
            int length = a.length();
            for(int i=0;i<length;i++){
                if(a[i]>='A'){
                    int b = a[i]-'A'+10;     
                    dec += b*pow(16, length-i-1);

                }else{
                    int b = a[i]-'0';
                    dec += b*pow(16, length-i-1);
                }
            }
            cout<<dec<<endl;

        }else{
            int b = stoi(a);
            sprintf(s, "%X", b);         //大寫16進位制
            cout<<"0x"<<s<<endl;
        }
    }
    
    return 0;  
}  