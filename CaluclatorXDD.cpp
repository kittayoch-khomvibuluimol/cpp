
#include <iostream>
using namespace std;
int main() {
    
    cout << "calculator" << endl;
    cout << "-----------------------------" << endl;
    int op,num1,num2;
    cout << "type your number" << endl;
    cin >> op;
    if(op==1){
        cout << "Add funtion" << endl;
        cout << "Enter num1 : ";
        cin >> num1;
        cout << endl;
        cout << "Enter num2 : ";
        cin >> num2;
        cout << endl;
        cout << "-----------------------------" << endl;
        cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
    }else if(op==2) {
        cout << "Subtract funtion" << endl;
        cout << "Enter num1 : ";
        cin >> num1;
        cout << endl;
        cout << "Enter num2 : ";
        cin >> num2;
        cout << endl;
        cout << "-----------------------------" << endl;
        cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
    }else if(op==3) {
        cout << "multiply funtion" << endl;
        cout << "Enter num1 : ";
        cin >> num1;
        cout << endl;
        cout << "Enter num2 : ";
        cin >> num2;
        cout << endl;
        cout << "-----------------------------" << endl;
        cout << num1 << " x " << num2 << " = " << num1*num2 << endl;
    }else if(op==4) {
        cout << "divide funtion" << endl;
        cout << "Enter num1 : ";
        cin >> num1;
        cout << endl;
        cout << "Enter num2 : ";
        cin >> num2;
        cout << endl;
        cout << "-----------------------------" << endl;
        cout << num1 << " ÷ " << num2 << " = " << num1/num2 << endl;
    } else {
        cout << "invalid data" << endl;
    }
  
    return 0;
}
