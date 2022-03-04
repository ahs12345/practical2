#ifndef CIRCULAR_QUEUE
#define CIRCULAR_QUEUE

#include <array>


class CircularQueue{
    public:
        void add(int frame);
        int getNext();
        CircularQueue(int capacity);
    private:
    int front;
    int capacity;
    int currentSize;
    std::array<int> frames;
}

#endif