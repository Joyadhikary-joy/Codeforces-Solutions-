
#include <iostream>

using namespace std;

int main()
{
    char message[100], ch,ch1;
    int i, key;
    cout << "Enter a message to encrypt: ";
    cin.getline(message, 100);
    cout << "Enter key: ";
    cin >> key;
    for (i = 0; message[i] != '\0'; ++i)
    {
        
        ch = message[i];
        if (ch >= 'a' && ch <= 'z')
        {
            ch1 = ch + key;
            if (ch1 > 'z')
            {
                ch1 = ch1 - 'z' + 'a' - 1;
            }
            message[i] = ch1;
             cout<<ch<<" ==>  "; cout<<ch1;
            cout<<endl;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch1 = ch + key;
            if (ch1 > 'Z')
            {
                ch1 = ch1 - 'Z' + 'A' - 1;
            }
            message[i] = ch1;
             cout<<ch<<" ==>  "; cout<<ch1;
              cout<<endl;
        }
    }
 //  cout << "Encrypted message: " << message<<endl;
    return 0;
}

//  abcdefghijklmnopqrstuvwxyz