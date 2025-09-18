/*
3. WAP to check whether the character contains
    a. Upper case then display character contains upper case
    b. Lower Case then display character contains lower case
    c. digits then display character contains digits
    d. none of the above then display character contains special characters

*/

#include <iostream>

using namespace std;

int main()
{
    char alp;
    cout << "Enter character: ";
    cin >> alp;

    if (alp >= 'A' && alp <= 'Z')
    {
        cout << "Alphabet = " << alp << " is Upper Case\n";
    }
    else if (alp >= 'a' && alp <= 'z')
    {
        cout << "Alphabet = " << alp << " is Lower Case\n";
    }
    else if (alp >= '0' && alp <= '9')
    {
        cout << "Alphabet = " << alp << " is Digit\n";
    }
    else
    {
        cout << "Alphabet = " << alp << " is a special character\n";
    }
}