#include <stddef.h>
#include<iostream>
#include<string>
#include <stdexcept>
#include "Container.h"
#include "Book.h"
#include "Catalog.h"
using namespace std;
int main()
{
    Catalog catalog;
    int c=-1;
    int r;
    while(c!=0)
    {

        cout<<"-------------------------------\n"
            <<"1. insert new book \n"
            <<"2. remove book \n"
            <<"3.  search for book  \n"
            <<"4. borrow book  \n"
            <<"5. statistics  \n"
            <<"0. quit \n"
            <<"Enter your choice : ";

        cin>>r;
        switch(r)
        {
        case 1:
        {

            catalog.addbook();

        }
        break;


        case 2:
        {

            catalog.removebook();
        }
        break;


        case 3:
        {
            catalog.searchByTitle();
        }
        break;
        case 4:
        {
            catalog.borrowbook();
        }
        break;
        case 5:
        {
            catalog.statistics();
        }
        break;
        }
    }

    return 0;
}


