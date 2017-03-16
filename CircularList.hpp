//
//  CircularList.hpp
//  MegaProject
//
//  Created by Nazir, Ammar on 3/3/17.
//  Copyright © 2017 Nazir, Ammar. All rights reserved.
//

#ifndef CircularList_hpp
#define CircularList_hpp

#include "DoublyLinkedList.hpp"

template <class Type>
class CircularLlist : public DoublyLinkedList<Type>
{
private:
public:
    CircularList();
    ~CircularList();
    void add(Type data);
    Type remove(int index);
    Type getFromIndex(int index);
    Type setAtIndex(int index, Type data);
}

template <class Type>
CircularList<Type> :: CircularList() : DoublyLinkedList<Type>()
{
    
}

template <class Type>
CircularList<Type> :: ~CircularList()
{
    BiDirectionalNode<Type> * remove = this->getFront();
    while(this->getFront() != nullptr)
    {
        this->setFront(this->getFront()->getNextPointer());
        delete remove;
        remove = this-> getFront();
    }
}

#endif /* CircularList_hpp */
