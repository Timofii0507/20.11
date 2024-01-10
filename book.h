#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book
{
public:
    string title;
    string author;
    string publisher;
    string genre;
    Book();
    Book(string title, string author, string publisher, string genre);
    void displayInfo() const;
};

#endif
