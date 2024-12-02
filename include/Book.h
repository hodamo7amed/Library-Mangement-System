#include <iostream>
using namespace std;
#ifndef BOOK_H
#define BOOK_H


class Book
{
public:
    Book();
    virtual ~Book();

    void read();

    bool isavailable();

    void print();

    void changeavailability();

    string get_Title();

    string get_author();

    string get_genre();

    string get_ISBN();

protected:

private:
    string title;
    string author;
    string ISBN;
    string genre;
    bool isAvailable= true;
    bool availability;

};

#endif // BOOK_H
