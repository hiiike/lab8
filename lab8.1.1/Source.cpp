#include <iostream>

using namespace std;
int Count(char* str)
{
    if (strlen(str) < 5)
        return 0;

    int k = 0;

    for (int i = 1; str[i + 1] != 0; i++)
        if (str[i - 2] == 'w' && str[i - 1] == 'h' && str[i] == 'i' && str[i + 1] == 'l' && str[i + 2] == 'e') {
            k++;

        }

    return k;
}




char* change(char* str)
{

    if (strlen(str) < 5)
        return str;

    char* strNew = new char[101];
    size_t l = 0;

    for (size_t i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'w' && str[i + 1] == 'h' && str[i + 2] == 'i' && str[i + 3] == 'l' && str[i + 4] == 'e')
        {
            strNew[l] = '*';
            strNew[l + 1] = '*';
            l += 2;
            i += 4;
        }
        else
        {
            strNew[l] = str[i];
            ++l;
        }
    }
    strNew[l] = '\0';
    strcpy_s(str, strlen(strNew) + 1, strNew);
    delete[] strNew;
    return str;
}

int main()
{
    char* str = new char[101];

    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    if (Count(str) == 1)
    {
        cout << endl << "String contained " << Count(str) << " group of 'while'." << endl;
    }
    else {
        cout << endl << "String contained " << Count(str) << " groups of 'while'." << endl;
    }
    cout << endl;
    cout << "Modified string:";
    cout << endl;
    char* t = change(str);
    cout << t;
    delete[] str;
    cout << endl;
}