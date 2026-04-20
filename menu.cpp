#include <iostream> 
using namespace std;

int main() {
    int choice;
    float num1,num2;

    while(true) {
        cout << "\n ==== menu calculater ==== \n";
        cout << "1. add\n";
        cout << "2. subtract\n";
        cout << "3. multiply\n";
        cout << "4. devide\n";
        cout <<  "5. exit\n";
        
        cout << "enter your choice \n";
        cin >> choice;
if(choice == 5) {
    cout << "code exited\n";
}
    
    cout << "enter two numbers\n";
    cin >> num1 >> num2;

    switch(choice) {
        case 1 : 
        cout << "RESULT = " <<  num1 + num2 << endl;
        break;
        case 2 : 
        cout << "RESULT = " << num1 - num2 << endl;
        break;
        case 3 :
        cout << "RESULT = " << num1 * num2 << endl;
        break;
        case 4 :
        if(num2 != 0) 
            cout << "RESULT = " << num1 / num2 << endl;
            else 
            cout << "invalid choice " << endl;

    }
}
return 0;
}