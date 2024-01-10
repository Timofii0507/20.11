#ifndef LIBRARY_H
#define LIBRARY_H

#include "book.h"

class Library 
{
public:
    static const int BOOK_COUNT = 10;
    Book books[BOOK_COUNT];
    void editBook();
    void printAllBooks() const;
    void searchByAuthor(const string& author) const;
    void searchByTitle(const string& title) const;
    void sortByTitle();
    void sortByAuthor();
    void sortByPublisher();
};

#endif 
