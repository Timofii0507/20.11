#include "library.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Library library;
    for (int i = 0; i < Library::BOOK_COUNT; ++i) 
    {
        string title, author, publisher, genre;
        cout << "Введіть дані для книги #" << i + 1 << endl;
        cout << "Назва: ";
        getline(cin, title);
        cout << "Автор: ";
        getline(cin, author);
        cout << "Видавництво: ";
        getline(cin, publisher);
        cout << "Жанр: ";
        getline(cin, genre);
        library.books[i] = Book(title, author, publisher, genre);
    }
    library.sortByTitle();
    cout << "Сортування за назвою:" << endl;
    library.printAllBooks();
    library.sortByAuthor();
    cout << "Сортування за автором:" << endl;
    library.printAllBooks();
    library.sortByPublisher();
    cout << "Сортування за видавництвом:" << endl;
    library.printAllBooks();
    string searchAuthor;
    cout << "Введіть автора для пошуку: ";
    getline(cin, searchAuthor);
    library.searchByAuthor(searchAuthor);
    string searchTitle;
    cout << "Введіть назву для пошуку: ";
    getline(cin, searchTitle);
    library.searchByTitle(searchTitle);
    return 0;
}
