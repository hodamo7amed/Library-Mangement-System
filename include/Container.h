#include <iostream>
#ifndef CONTAINER_H
#define CONTAINER_H
using namespace std;
#include <Book.h>
template <class T>
class Container
{
public:
    Container(size_t initialCapacity=100);
    virtual ~Container();
    Container(const Container<T>&);
    Container&operator=(const Container& );
    T& operator[](size_t );
    T& find (T&);
    void resize(size_t newSize);
    void insertAtBeginning(const T& );
    void insertEnd(const T& value);
    void removeEnd();
    void removeFront();
    size_t  get_size();
protected:

private:
    T* data;
    size_t size;
    size_t Capacity;
};

#endif // CONTAINER_H
