#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;


int Count(const string str)
{
    int k = 0;
    size_t pos = 0;
    while ((pos = str.find("while", pos, 5)) < str.size())
    {
        k++;
        pos += 5;
    }
    return k;
}
string change(string& str)
{
    size_t pos = 0;
    while ((pos = str.find("while", pos, 5)) < str.size())
        str.replace(pos, 5, "***");
    return str;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string str;

    cout << "Enter string: ";
    getline(cin, str);

    cout << "String contained : " << Count(str) << " group of 'while'." << endl;
    cout << "Modified string: " << change(str) << endl;

    return 0;
}