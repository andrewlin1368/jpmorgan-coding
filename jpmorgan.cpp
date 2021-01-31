#include<iostream>
using namespace std;

int main(){
    string str;
    while(getline(cin,str)){
        if(str.length()==0)
            break;
        for(int i=0;i<str.length();i++){
            if(i==0){
                int ascii=(int)str[0];
                if(ascii>96)
                    str[0]-=32;
            }
            else{
                if(str[i]==' '){
                    if(str[i+1]==' ')
                        continue;
                    else{
                        int ascii=(int)str[i+1];
                        if(ascii>96)
                            str[i+1]-=32;
                    }
                }
            }
        }
        cout<<str<<"\n";
    }
    return 0;
}