#include "library.h"
#include <algorithm>
#include <iostream>

void Library::printAllBooks() const 
{
    
    for (const auto& book : books) 
    {
        book.displayInfo();
    }
}

void Library::searchByAuthor(const std::string& author) const 
{
    
    for (const auto& book : books) 
    {
        if (book.author == author) 
        {
            book.displayInfo();
        }
    }
}

void Library::searchByTitle(const std::string& title) const 
{
    for (const auto& book : books) 
    {
        if (book.title == title) 
        {
            book.displayInfo();
        }
    }
}

bool compareByTitle(const Book& book1, const Book& book2) 
{
    return book1.title < book2.title;
}

bool compareByAuthor(const Book& book1, const Book& book2) 
{
    return book1.author < book2.author;
}

bool compareByPublisher(const Book& book1, const Book& book2) 
{
    return book1.publisher < book2.publisher;
}

void Library::sortByTitle() 
{
    sort(books, books + BOOK_COUNT, compareByTitle);
}

void Library::sortByAuthor()
{
    sort(books, books + BOOK_COUNT, compareByAuthor);
}

void Library::sortByPublisher() 
{
    sort(books, books + BOOK_COUNT, compareByPublisher);
}
