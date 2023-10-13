#include <iostream>
#include <conio.h>
using namespace std;
void ar_op();    // arithmetic function declaration
void logic_op(); // logic function declaration
// arithmetic function definition which will perform arithmetic operation
void ar_op()
{
    double operand1, operand2; // two operand on which operation will perform
    char opcode;               // select which operation will perform
    cout << "Enter operation (i.e operand1 opcode operand2): ";
    cin >> operand1 >> opcode >> operand2;
    switch (opcode)
    {
    case '+':
        cout << "Addition is " << operand1 + operand2 << endl;
        break;
    case '-':
        cout << "Subtraction is " << operand1 - operand2 << endl;
        break;
    case '*':
        cout << "Multiplication is " << operand1 * operand2 << endl;
        break;
    case '/':
        cout << "Division is " << operand1 / operand2 << endl;
        break;
    default:
        cout << "Wrong input provided!" << endl;
    }
}
// logic function defintion
void logic_op()
{
    char choice;        // for selection of any logic gate
    int input1, input2; // for two inputs
    cout << "Please select any one Basic gate in below: " << endl;
    cout << "1). AND Gate (.)" << endl;
    cout << "2). OR Gate (+)" << endl;
    cout << "3). NOT Gate (!)" << endl;
    cout << "4). XOR Gate " << endl;
    cin >> choice;
    switch (choice)
    {
    case '1':
        cout << "You select AND GATE!" << endl;
        cout << "Enter two inputs with one space (inputs must be 1 or 0): ";
        cin >> input1 >> input2;
        cout << "Output is " << input1 * input2;
        break;
    case '2':
        cout << "You select OR GATE!" << endl;
        cout << "Enter two inputs with one space apart (inputs must be 1 or 0): ";
        cin >> input1 >> input2;
        cout << "Output is " << input1 + input2;
        break;
    case '3':
        cout << "You select NOT GATE!" << endl;
        cout << "Enter input (1 or 0)!" << endl;
        cin >> input1;
        if (input1 == 1)
            cout << "Output is 0" << endl;
        if (input1 == 0)
            cout << "Output is 1" << endl;
        break;
    case '4':
        cout << "You select XOR GATE!" << endl;
        cout << "Enter two inputs with one space apart (inputs must be 1 or 0): ";
        cin >> input1 >> input2;
        if ((input1 == 0 && input2 == 0) || (input1 == 1 && input2 == 1))
            cout << "Output is 0" << endl;
        else
            cout << "Output is 1" << endl;
        break;
    default:
        cout << "Wrong input provided" << endl;
    }
}
int main()
{
    cout << "\t\t\t*****ALU Design Project*****" << endl
         << endl
         << endl;
    int choose;        // for selection
    char choice = 'y'; // for another try
    while (choice == 'y')
    {
        cout << "Please select any one option in the below: " << endl;
        cout << "1)_ For Arithmetic Operation!" << endl
             << "2)_ For Logic Operation!" << endl
             << "3)_ For exit program!\n"
             << endl;
        cin >> choose;

        switch (choose)
        {
        case 1:
            cout << "\nYou choose option 1 (arithmetic operation)!" << endl;
            ar_op();
            break;
        case 2:
            cout << "\nYou choice option 2 (Logic operations)!" << endl;
            logic_op();
            break;
        case 3:
            cout << "You choose option 3 (exit program)" << endl;
            exit(0);
        default:
            cout << "Wrong input provided" << endl;
        }

        cout << endl
             << endl
             << "Do You Wanna Try Again(y/n): ";
        cin >> choice;
        cout << endl
             << endl;
    }
    return 0;
}
