//
//  IntNode.cpp
//  MegaProject
//
//  Created by Nazir, Ammar on 2/6/17.
//  Copyright © 2017 Nazir, Ammar. All rights reserved.
//

#include "IntNode.hpp"

IntNode :: IntNode()
{
    this->nodeData = -999;
    this->nextPointer = nullptr;
}

IntNode :: IntNode(int data)
{
    this->nodeData = data;
    this->nextPointer = nullptr;
}

IntNode :: IntNode(int nodeData, IntNode * next)
{
    this->nodeData = nodeData;
    this->nextPointer = next;
}

int IntNode :: getNodeData()
{
    return nodeData;
}

IntNode * IntNode :: getnextPointer()
{
    return nextPointer;
}

void IntNode :: setNodeData(int nodeData)
{
    this->nodeData = nodeData;
}

void IntNode :: getnextPointer(IntNode * next)
{
    this->nextPointer = next;
}

