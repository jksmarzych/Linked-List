#ifndef LinkedList_H
#define LinkedList_H
#include "Node.h"
class LinkedList{
private:
   Node* Head;
public:
    LinkedList();
    ~LinkedList();
    void PushBack(int value);
    friend std::ostream& operator <<(std::ostream& ostr,const LinkedList& rhs);
    void PopBack();
    double Front();
    double Back();
    bool Empty();
    void Clear();

};

#endif
