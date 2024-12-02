#include "Catalog.h"

Catalog::Catalog()
{
    Container<Book>ob(100);
    Container <Book>borrow(100);
}

void Catalog::addbook()
{
    Book book;
    book.read();
    ob.insertEnd(book) ;
    cout<<"insert successfully"<<endl;
}
void Catalog::removebook()
{
    ob.removeEnd() ;
    cout<<"Removed successfully"<<endl;
}
void Catalog :: searchByTitle()
{
    string s;
    cout<<"Enter string name : "<<endl;
    cin>>s;
    for(size_t i=0; i<ob.get_size(); ++i)
    {
        if(ob[i].get_Title()==s)
        {
            ob[i].print();
        }
    }




}
void Catalog :: borrowbook()
{
    string k;
    cout<<"Enter user title :"<<endl;
    cin>>k;
    for(size_t i=0; i<ob.get_size (); ++i)
    {
        if(ob[i].get_Title()==k)
        {
            borrow.insertEnd(ob[i]);
            ob[i].changeavailability();

        }


    }
}
void Catalog :: statistics()
{
    for(size_t i=0 ; i<ob.get_size (); ++i )
    {
        if(ob[i].isavailable()==false)
        {
            cout<<"borrowed books :"<<endl;
            ob[i].print();
        }
        else
        {
            cout<<"available books :"<<endl;
            ob[i].print();
        }
    }

}

Catalog::~Catalog()
{
    //dtor
}
