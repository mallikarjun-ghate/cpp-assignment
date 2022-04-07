#include <iostream>
#include <cstring>
using namespace std;
int Str = 0;
int total = 0;
void check(string input, int len){
    string temp;
    for(int i=0;i<len;i++){
        temp = input.substr(i,2);
        if(temp=="01"){
            Str++;
        }
    }
}
int main()
{
    string input;
    cout<<"Enter A string: ";
    cin>>input;
    int len = input.length();
    check(input,len);
    cout<<"\nActual string "<<input<<": "<<Str<<endl;
    total+=Str;
    Str=0;
    for(int i=0;i<len-2;i++){
        for(int j=i+2;j<len;j++){
            string temp = input;
            char x;
            x = temp[i];
            temp[i] = temp[j];
            temp[j] = x;
            if(temp!=input){
                check(temp,len);
                cout<<"\nCount of Substring "<<temp<<": "<<Str<<endl;
                total+=Str;
                Str=0;
            }
        }
    }
    cout<<"\nTotal occurence of 01: "<<total<<endl;
    return 0;
}
