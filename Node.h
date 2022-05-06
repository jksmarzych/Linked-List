#ifndef Node_H
#define Node_H
class Node{
public:
int Data;
Node* Previous;
Node* Next;
Node(int value, Node* previous = nullptr, Node* next = nullptr);
};
#endif
