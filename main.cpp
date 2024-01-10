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
        cout << "������ ��� ��� ����� #" << i + 1 << endl;
        cout << "�����: ";
        getline(cin, title);
        cout << "�����: ";
        getline(cin, author);
        cout << "�����������: ";
        getline(cin, publisher);
        cout << "����: ";
        getline(cin, genre);
        library.books[i] = Book(title, author, publisher, genre);
    }
    library.sortByTitle();
    cout << "���������� �� ������:" << endl;
    library.printAllBooks();
    library.sortByAuthor();
    cout << "���������� �� �������:" << endl;
    library.printAllBooks();
    library.sortByPublisher();
    cout << "���������� �� ������������:" << endl;
    library.printAllBooks();
    string searchAuthor;
    cout << "������ ������ ��� ������: ";
    getline(cin, searchAuthor);
    library.searchByAuthor(searchAuthor);
    string searchTitle;
    cout << "������ ����� ��� ������: ";
    getline(cin, searchTitle);
    library.searchByTitle(searchTitle);
    return 0;
}
