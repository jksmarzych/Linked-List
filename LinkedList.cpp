#include <iostream>
#include "LinkedList.h"
#include "Node.h"
#include <stdexcept>

LinkedList::LinkedList(){
Head=nullptr;
}
LinkedList::~LinkedList(){
   Clear();
}
void LinkedList::PushBack(int value){
//empty case
if(Head == nullptr){
    Head= new Node(value);
}
else{
    Node* Current = Head;
    while(Current->Next != nullptr){
        Current = Current -> Next;
    }
   Node* Temp =  new Node(value, Current);
   Current->Next = Temp;
}
}
std::ostream& operator<<(std::ostream& ostr, const LinkedList& rhs){
std::cout<<"x ";
Node* Current = rhs.Head;
while(Current != nullptr){
  std::cout << Current->Data<<" ";
  Current=  Current->Next;
}
std::cout<<"x";
return ostr;
}
void LinkedList::PopBack(){
if(Head==nullptr){
    //empty list case
    throw std::out_of_range("Tried to pop epty linked list!");
}
if(Head->Next == nullptr){
    //1 element in the list
    delete Head;
    Head = nullptr;
}
else{
    //size 2 or more
    Node* Current = Head;
    while(Current->Next != nullptr){
        Current = Current-> Next;
    }
    Current->Previous->Next = nullptr;
    delete Current;
}
}
double LinkedList::Front(){
if(Head == nullptr){
    //empty case
    throw std::logic_error("Linked list is empty!");

}
return Head->Data;
}
double LinkedList::Back(){
if(Head==nullptr){
    //empty case
    throw std::logic_error("Linked list is empty!");
}
Node* Current= Head;
while(Current->Next != nullptr){
    Current= Current->Next;
}
return Current->Data;
}
bool LinkedList::Empty(){
return Head == nullptr;
}
void LinkedList::Clear(){
Node* Current = Head;
while(Current != nullptr){
  Node* Temp = Current->Next;
  delete Current;
  Current = Temp;
}
Head= nullptr;
}
