/*****************************************************************************
*    Brian Chairez                                                           *
*    Goal: std::list implementation of std::queue.                           *
*    Advantages:                                                             *
*       -Fast operations: O(1) push(), pop(), front() and back()             *
*       -Built in list functions and size tracking are helpful               *
*    Limitations:                                                            *
*       -Can only remove from the front one at a time                        *
*       -No way to access anything in the middle or end                      *
*       -Lists are known for their poor reference locality                   *
*****************************************************************************/

#ifndef QUEUE_H
#define QUEUE_H

#include <list>

// FIFO. Front of the line corresponds to the beginning of the list.
template <class T>
class Queue{
    private:
        std::list<T> queue_;
    public:
        Queue();
        Queue(const int& capacity, const T& data);
        Queue(const Queue<T>& other);
        ~Queue();
        T& operator=(const Queue<T>& other);
        void push(const T& data);
        void pop();     //Pops front
        T& front();
        T& back();
        bool empty() const;
        int size() const;
};

#endif
