#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(){
LinkedList a;
a.PushBack(1);
cout<<a<<endl;
a.PushBack(2);
cout<<a<<endl;
a.PopBack();
cout<<a<<endl;
a.PushBack(3);
cout<<a<<endl;
a.Clear();
cout<<a<<endl;
return 0;
}
