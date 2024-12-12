/*#include<iostream>
using namespace std;
class employee {
    private :
    int salary;
    public:
    void setSalary(int s){
        salary = s;

    }
    void getSalary(){
        cout<<salary;
    }

};
int main(){
    employee obj;
    obj.setSalary(10000000);
    obj.getSalary();
    return 0;

}

*/
#include <iostream>
using namespace std;

class demo{
    protected :
    void display(){
        cout<<"acces only in derived class";
    }

};
class derived : public demo{
    public:
    void getdisplay(){
        display();
    }

};

int main(){
    derived d ;
    d.getdisplay();
}