#include<iostream>
using namespace std;
int main(){
    string greeting = "hello world";
    cout << greeting<<endl;
    string name;
    cout<<"enter your name";
    cin >> name;
    cout << name;
    int length = greeting.length();
    cout<<length<<endl;
    string FirstName = "hi soumitra";
    string lastname = "how are you";
    string fullname = FirstName + " " + lastname;
    cout << fullname<<endl;
    string str1 = "apple";
    string str2 = "banana";

    if(str1 == str2){
        cout<<"strings are not equAL"<<endl;

    }

    int result = str1.compare(str2);
    if(result == 0){
        cout<<"the  strings are equal"<<endl;

    }
    else if(result <0){
        cout<<"str1 comes before str2"<<endl;

    }
    else{
        cout<<"str1 comes after str2"<<endl;

    }




}
/*{
    string s1 = "virshit";
    string r = s1.substr(3,2);

    cout<<"the string is "<<r;

}
 char str[10];
    char str1[100] = "i am a god";
    cout<< "enter a string";
    cin>>str;

    cout << "you entered : " << str<<endl;
    strcpy(str1,str);
    cout<< str<<"and"<<str1;

}*/