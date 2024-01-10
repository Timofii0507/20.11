
#include "book.h"
#include <iostream>

Book::Book() {
}

Book::Book(string title, string author, string publisher, string genre)
    : title(title), author(author), publisher(publisher), genre(genre) {
}

void Book::displayInfo() const
{
    cout << "Назва: " << title << endl;
    cout << "Автор: " << author << endl;
    cout << "Видавництво: " << publisher << endl;
    cout << "Жанр: " << genre << endl;
    cout << "-----------------------------" << endl;
}
