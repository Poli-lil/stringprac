#include <iostream>
#include <string>

//Task1
//using namespace std;
//
//int main()
//{
//    string email;
//
//    cout << "Введіть електронну пошту: ";
//    getline(cin, email);
//
//    int position = email.find('@');
//
//    if (position != string::npos)
//    {
//        string userName = email.substr(0, position);
//        string domain = email.substr(position + 1);
//
//        cout << "Ім'я користувача: " << userName << '\n';
//        cout << "Домен: " << domain << '\n';
//    }
//    else
//    {
//        cout << "Помилка: символ @ не знайдено." << '\n';
//    }
//
//}

//Task2

using namespace std;

int main()
{
    string text;
    string word;

    cout << "Введіть речення: ";
    getline(cin, text);

    cout << "Введіть заборонене слово: ";
    getline(cin, word);

    int position = text.find(word);

    if (position != string::npos)
    {
        text.replace(position, word.length(), "****");
    }
    text += " [Відредаговано]";
    cout << "Результат: " << text << '\n';

}