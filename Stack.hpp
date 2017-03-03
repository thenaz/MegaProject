//
//  Stack.hpp
//  MegaProject
//
//  Created by Nazir, Ammar on 3/3/17.
//  Copyright © 2017 Nazir, Ammar. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include "DoublyLinkedList.hpp"

template <class Type>
class Stack : public DoublyLinkedList<Type>
{
private:
public:
    Stack();
    ~Stack();
    void add(Type value);
    Type remove(int index);
    Type pop();
    Type peek();
    void push(Type data);
};

/*
 The add method only adds to the end on a stack. Never at an index
 
 */
template <class Type>
void Stack<Type> :: add(Type valueToAdd)
{
    push(valueToAdd);
}

/*
 Adds the supplied object to the stack to the end.
 Set new object to point to end.
 Increases the size by 1.
 Adjust the end pointer to reflect the new end of the stack.
 */
template <class Type>
void Stack<Type> :: push(Type addedThing)
{
    BiDirectionalNode<Type> * addToStack = new BiDirectionalNode(addedThing);
    
    if(this->size == 0 || this->front == nullptr || this->end == nullptr)
    {
        this->front = addToStack;
        this->end = addToStack;
    }
    else
    {
        this->end->setNextPointer(addToStack);
        addToStack->setPreviousPointer(this->end);
        this->end = addToStack
    }
    
    this->size++;
}

#endif /* Stack_hpp */
