#include "Book.h"

Book::Book()
{

}

Book::~Book()
{

}

void  Book::read()
{
    cout<<"Enter title ";
    cin.ignore();
    getline(cin,title);
    cout<<"Enter author";
    getline(cin,author);
    cout<<"Enter ISBN";
    getline(cin,ISBN);
    cout<<"Enter genre";
    getline(cin,genre);

}
bool Book::isavailable()
{
    return availability;
}
void Book::changeavailability()
{
    isAvailable=false;
}
void  Book::print()
{
    cout<<"book title :" <<title<<endl;
    cout<<"book author :" <<author<<endl;
    cout<<"book ISBN :"<<ISBN<<endl;
    cout<<"book genre :"<<genre;
}
string  Book::get_Title()
{
    return title;
}
string  Book::get_author()
{
    return author;
}
string  Book::get_genre()
{
    return genre;
}
string  Book::get_ISBN()
{
    return ISBN;
}

