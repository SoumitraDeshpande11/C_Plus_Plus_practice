// 1. create string using c style string "welcome to c++ program"
#include<iostream>
#include<string>
using namespace std;

int main(){

    char str1[30] = "welcome to C++ program ";
    char str2[10] = "Btech";

     cout<<strlen(str1)<<endl;



    for(int i = 0;i<7;i++){
        cout<<str1[i];
    



    
}
    strcat(str1,str2);
    cout<<"\n"<<str1<<endl;

    string a;
    cout<<"what string do u want : ";
    cin>>a;
    int len = a.length();
    cout<<"the length is : "<<len<<endl;
    string b = a;
    cout<<b;
}