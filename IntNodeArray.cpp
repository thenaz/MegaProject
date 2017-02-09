//
//  IntNodeArray.cpp
//  MegaProject
//
//  Created by Nazir, Ammar on 2/8/17.
//  Copyright © 2017 Nazir, Ammar. All rights reserved.
//

#include "IntNodeArray.hpp"

#include <assert.h>

IntNodeArray :: IntNodeArray(int size)
{
    assert(size > 0);
    this->size = size;
    
    this->head = new IntNode();
    
    for(int index = 0; index < size; index++)
    {
        IntNode * currentNode = new IntNode();
        currentNode->setNodePointer(head);
        head = currentNode;
    }
}

int IntNodeArray :: getFromIndex(int index)
{
    int value = 0;
    
    
    
    return value;
}
