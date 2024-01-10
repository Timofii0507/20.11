
#include "book.h"
#include <iostream>

Book::Book() {
}

Book::Book(string title, string author, string publisher, string genre)
    : title(title), author(author), publisher(publisher), genre(genre) {
}

void Book::displayInfo() const
{
    cout << "�����: " << title << endl;
    cout << "�����: " << author << endl;
    cout << "�����������: " << publisher << endl;
    cout << "����: " << genre << endl;
    cout << "-----------------------------" << endl;
}
