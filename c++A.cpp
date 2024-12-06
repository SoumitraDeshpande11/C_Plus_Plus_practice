#include <iostream>
using namespace std;
int main(){
    int arrNum[] = {1,2,3,4,5,6,7,8,9,10};
    arrNum[4] = 200;

    cout<<"the array is \n";
    for(int i= 0; i < 10;i++)
    {
        cout<<arrNum[i]<<" "<<endl;
    }




}

