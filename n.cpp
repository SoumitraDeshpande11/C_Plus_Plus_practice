#include <iostream>
using namespace std;

class vehicle  {
    public:
    vehicle(){
        cout<<"gedi ghumao"<<endl;

    

    }
    void display(){
        cout<<"gedi dikhri??"<<endl;

    }

};
class engine :public vehicle {
    public:
    engine(){
        cout<<"the engine is rututututut"<<endl;
    }

};
class v8 : public engine {
    public:
    v8(){
    cout<<"v8 for a reason"<<endl;
    }
};
//class v6 : public engine {
    //public:
    //v6(){
        //cout<<"v6 for a reason"<<endl;

    //}

//};

class car : public vehicle {
    public:
    car(){
        cout<<"this is a car"<<endl;
    }

};
class wheels : public car {
    public :
    wheels(){
        cout<<"mrf or wott"<<endl;
    }

};
class mrf: public wheels{
    public:
    mrf(){
        cout<<"mrf or wott"<<endl;

    }

};
class bridgestone: public wheels{
    public:
    bridgestone(){
        cout<<"bridgeston"<<endl;
    }
};

int main(){
    v8 obj;
    //v6 obj;
    mrf obj1;
    bridgestone obj2;
    return 0;
 
}
