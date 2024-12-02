#include "Container.h"

template class Container<Book>;
template <class T>
Container<T>::Container(size_t initialCapacity) : size(0), Capacity(initialCapacity)
{
    data = new T[Capacity];
}

template <class T>
Container<T>::Container(const Container<T>& other) : size(other.size), Capacity(other.Capacity)
{
    data = new T[Capacity];
    for (size_t i = 0; i < size; ++i)
    {
        data[i] = other.data[i];
    }
}
template <class T>
Container<T>&Container<T>::operator=(const Container<T>& other)
{
    if (this != &other)
    {
        delete[] data;
        size = other.size;
        Capacity = other.Capacity;
        data = new T[Capacity];
        for (size_t i = 0; i < size; ++i)
        {
            data[i] = other.data[i];
        }
    }
    return *this;
}


template <class T>
T&Container<T>::operator[](size_t index)
{
    if (index >= size)
    {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

template <class T>
void Container<T>::resize(size_t newSize)
{
    if (newSize <= 0)
    {
        throw invalid_argument("Invalid new size");
    }

    T* newData = new T[newSize];
    for(size_t i=0 ; i<min(size,newSize) ; ++i)
    {
        newData[i]=data[i];
    }
    delete[] data;
    data=newData;
    size=newSize;

}
template <class T>
void Container<T>::insertAtBeginning(const T& value)
{
    if (size == Capacity)
    {
        resize(2 * Capacity);
    }
    // Shift elements to the right
    for (size_t i = size; i > 0; --i)
    {
        data[i] = data[i - 1];
    }
    data[0] = value;
    size++;
}
template <class T>
void Container<T>::insertEnd(const T& value)
{
    if (size == Capacity)
    {
        resize(2 * Capacity);
    }
    data[size++] = value;
}
template <class T>
void Container<T>::removeEnd()
{
    if (size > 0)
    {
        size--;
    }
}
template <class T>
void Container<T>::removeFront()
{
    if (size > 0)
    {
        // Shift elements to the left
        for (size_t i = 0; i < size - 1; i++)
        {
            data[i] = data[i + 1];
        }
        size--;
    }
}
template <class T>
Container<T>::~Container()
{
    delete[] data;
}
template <class T>
size_t Container<T>::get_size()
{
    return size;


}
