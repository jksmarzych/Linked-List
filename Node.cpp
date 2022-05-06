#include <iostream>
#include "Node.h"
using namespace std;
Node::Node(int value, Node* previous, Node* next){
Data=value;
Previous=previous;
Next=next;
}
