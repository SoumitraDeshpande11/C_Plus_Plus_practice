#include <iostream>
#include <cmath>
#include <string>
using namespace std;



int calc()
    {
        int a;
        int b;
        char c;
        cout<<"the first number :";
        cin>>a;
        cout<<"the second number :";
        cin>>b;
        cout<<"the operator is :";
        cin>>c;
        cout<<c;
        if(c == '+'){
            cout<<"the sum is : "<<a+b<<endl;

        }
        else if(c == '-'){
            cout<<"the difference is : "<<a-b<<endl;

        }
        else if(c == '*'){
            cout<<"the product is : "<<a*b<<endl;

        }
        else if(c == '/'){
            cout<<"the division is : "<<a/b<<endl;

        }
        return 0;

        

    }
int factorial(int c)
    {
        if(c == 0 || c == 1){
            return 1;
        }
        else{
            return c * factorial(c-1);
            
        
        }

    }
int max(int a, int b){
    if(a>b){
        cout<<a<<endl;
        
    }
    else
        cout<<b<<endl;
    }

int prime(int e){
    int n = factorial(e-1)%e;
    if(n == e-1){
        cout<<"the number is prime : "<<e<<endl;
    }
    else{
        cout<<"the number is not prime : "<<e<<endl;
    }

}
int swap(int y, int z){
    /*int t = y;
    y = z;
    z = t;*/

    y = y+z;
    z = y-z;
    y = y-z;
    cout<<y<<" yes sir  "<<z<<endl;



}
int SI(int p, int n, int r){
    int x = (p*n*r)/100;
    cout<<"the SI is "<<x<<endl;

}

int EvenOrOdd(int x){
    if(x%2 == 0){
        cout<<"even"<<endl;

    }
    else 
        cout<<"odd"<<endl;
}

int SumOfDigit(int x){
    int y = x%10;
    int z = x-y;
    cout<<z<<endl;
}

string Reverse(string x){

    for(int i =x.length()-1; i>=0; i--){
        cout<<x[i];
    }
    


}

int pointer(){
    
    int var1 = 3;
    int var2 = 4;
    int var3 = 5;
    int* point;
    point =  &var1;
    var1 = 10;
    int a[3] = {0,1,2};
    int *ptr = a;
    cout<<"address of var1 : "<<&var1<<"\npointer : "<<*point;


}
void display(int *a){
    cout<<*a;
}
int main() {
    int num = 10;
    display(&num);

    pointer();
    /*string x;
    cout<<"enter the string"<<endl;
    cin>>x;
    Reverse(x);
    

    prime(5);
    EvenOrOdd(5);

    int d = factorial(5);
    cout<<"the factorial of 5 is : "<<d<<endl;
    swap(10,7);
    SI(10000,10,8);

    
    max(5,10);
    
    return 0;*/


}
