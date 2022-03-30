#include <iostream>
#include <string>
#include <map> //key, value
#include <sstream>

using namespace std;

int main()
{
    string word, code, token;
    int x = 0;

    map <char, string> cipher{
            {'a', "..-"},
            {'b', "-.."},
            {'c', ".-."},
            {'d', "-.-"},
            {'e', "--."},
            {'f', "...-"},
            {'g', "-..."},
            {'h', "...-."},
            {'i', "---.-"},
            {'j', ".-.-."},
            {'j', ".-.-."},
            {'k', "-.-.-"},
            {'l', "..--"},
            {'m', "--.."},
            {'n', ".--.."},
            {'o', ".---"},
            {'p', "---."},
            {'q', "---.--"},
            {'r', "...--..."},
            {'s', "--..--.."},
            {'t', "---"},
            {'u', "..--..--.."},
            {'v', ".."},
            {'w', "--"},
            {'x', ".-"},
            {'y', "-."},
            {'z', "...."}

  };
    while (x != 3) {
        cout <<endl << "What do you want to do: " << endl << "1- cipher" << endl << "2- decipher " << endl << "3- end" << endl;

        cin >> x;

        if (x == 1) {
            cout << "please Enter a word to change into cipher: " << endl;
            cin.clear();
            cin.sync();
            while (word.empty())
                getline(cin, word);
            for (char letter: word) {
                if (islower(letter)) {
                    cout << cipher[letter] << " ";
                } else if (isupper(letter)) {
                    cout << "your letter is uppercase cant change into cipher " << endl;
                } else if (isdigit(letter)) {

                    cout << "invalid" << " ";

                }


            }
        } else if (x == 2) {
            cout << "ENTER END TO END !" << endl << "Please Enter Encrypted Message: " << endl;

            while (cin >> token) {
                if (token == "end") {
                    break;
                }
                for (char letter = 97; letter <= 122; letter++) {
                    if (cipher[letter] == token) {
                        cout << letter;
                    }
                }
            }
            cout << endl;
        } else {
            cout << "invalid" << endl;
        }
    }
}
