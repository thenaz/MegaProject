//
//  Array.hpp
//  MegaProject
//
//  Created by Nazir, Ammar on 2/15/17.
//  Copyright © 2017 Nazir, Ammar. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include <assert.h>
#include "Node.hpp"
#include <iostream>

using namespace std;

template <class Type>
class Array
{
private:
    Node<Type> * front;
    int size;
public:
    //Constructors
    Array<Type>(int size);
    int getSize();
    Type getFromIndex(int index);
    void setAtIndex(int index, Type value);
};

//Implementation Section

template <class Type>
Array<Type> :: Array()
{
    //DO NOT USE!!!!!!
    //Implemented only for compilation purposes
}

/*
 Creates an Array of specified size by linking Node<Type> together
 */

template <class Type>
Array<Type> :: Array(int size)
{
    assert(size > 0);
    this->size = size;
    
    this->front = new Node<Type>();
    
    for(int index = 1; index < size; index++)
    {
        Node<Type> * currentNode = new Node <Type>();
        currentNode->getnextPointer(front);
        front = currentNode;
    }
}


template <class Type>
Type Array<Type> :: getFromIndex(int index)
{
    assert(index >=0 && index < size);
    Type value;
    
    Node<Type> * current = front;
    
    for(int position = 0; position < index; position++)
    {
        current = current->getnextPointer();
        
    }
    
    value = current->getNodeData();
    return value;
}

template <class Type>
void Array<Type> :: setAtIndex(int index, Type value)
{
    assert(index >= 0 && index < size);
    Node<Type> * current = front;
    for(int position = 0; position < index; position++)
    {
        current = current->getnextPointer();
    }
    
    current->setNodeData(value);
}

template <class Type>
int Array<Type> :: getSize()
{
    return size;
}


#endif /* Array_hpp */
