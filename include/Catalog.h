#include <iostream>
#include<Book.h>
#include<Container.h>
#ifndef CATALOG_H
#define CATALOG_H

using namespace std;
class Catalog
{
public:
    Catalog();
    virtual ~Catalog();
    void addbook();
    void removebook();
    void searchByTitle();
    void borrowbook();
    void statistics();



protected:

private:
    Container<Book>ob;
    Container <Book>borrow;
};

#endif // CATALOG_H
