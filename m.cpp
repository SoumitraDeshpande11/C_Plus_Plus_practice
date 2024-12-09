#include<iostream>
#include <cmath>

using namespace std;

/*class poly{
    public:
    void func(int x){
        cout<<"value of x is "<< x <<endl;
    }
    void func(double x){
        cout<<"the value of x is "<<x<<endl;

    }
    void func(int x , int y){
        cout<<"the value of x and y is "<<x<<"  "<<y<<endl;

    }
    
};
class calc{
    public:
    void add(int x, int y){
        cout<<"the sum is "<<x+y<<endl;
    }
    void add(int x, int y , int z){
        cout<<"the sum is "<<x+y+z<<endl;
    }
};
int main(){
    calc obj1;
    obj1.func(22);
    obj1.func(3.14237897);
    obj1.func(85, 64);
    obj1.add(1,2);
    obj1.add(1,2,3);
    return 0;

}

int min(int a , int b){
    return (a<b) ? a : b;

}
int min(double a , double b){
    return (a<b) ? a : b;

}
int min(char a , char b){
    return (a<b) ? a : b;

}
int main(){
    cout<<"integer   "<<min(10,20)<<endl;
    cout<<"double    "<<min(5.5,3.3)<<endl;
    cout<<"char       "<<min('x','a')<<endl;
    return 0;
}
void area(int lenght, int height){
    cout<< "the area is "<<lenght*height<<endl;
}
void area(int r){
    cout<< "the area is "<<3.14*(r*r)<<endl;
}
int main(){
    area(10,20);
    area(5);
}*/
void dan(int x,int y){
    cout<<"the value is  " <<pow(x,y)<<endl;
}
void dan(double x,double y){
    cout<<"the value is "<<pow(x,y)<<endl;
}
int main(){
    dan(2,4);
    dan(2.2,3.3);
}
