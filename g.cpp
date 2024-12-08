#include <iostream>
#include <string>
using namespace std;

/*int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;


    int matrix1[10][10], matrix2[10][10], result[10][10];


    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix1[i][j];
        }
    }


    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix2[i][j];
        }
    }


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }


    cout << "The resultant matrix is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}*/

string Reverse(string x){

    string y = "";


    for(int i =x.length()-1; i>=0; i--){
        
        y += x[i];


  
    }
    return y;

}
string IsPalindrome(string x){
    if(x == Reverse(x)){
        return "Yes";
    }
    else{
        return "No";
    }
}
int pointer(){
    int a = 10;
    int c = 20;
    int *b = &a;
    a = c;
    c = *b;
    cout<<a<<c<<endl;
}

int main(){
    /*string x = "mom";
    string y = "I am a genius";
    cout<<Reverse(y)<<endl;
    cout<<IsPalindrome(x);
    return 0;*/
    pointer();
    return 0;
}

    
    




