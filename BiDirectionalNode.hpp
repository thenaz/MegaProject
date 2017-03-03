//
//  BiDirectionalNode.hpp
//  MegaProject
//
//  Created by Nazir, Ammar on 2/27/17.
//  Copyright © 2017 Nazir, Ammar. All rights reserved.
//

#ifndef BiDirectionalNode_hpp
#define BiDirectionalNode_hpp

template <class Type>
class BiDirectionalNode : public Node<Type>
{
private:
//  Type data; Removed as the data member will be inherited from Node<Type>
    Type data;
    BiDirectionalNode<Type> * nextPointer;
    BiDirectionalNode<Type> * previousPointer;
public:
    BiDirectionalNode();
    BiDirectionalNode(Type data);
    BiDirectionalNode(Type data, BiDirectionalNode<Type> * previous, BiDirectionalNode<Type> * next);
    Type getNodeData();
    
//  Type getNodeData();
    BiDirectionalNode<Type> * getNextPointer();
    BiDirectionalNode<Type> * getPreviousPointer();
    
//  void setNodeData(Type data);
    void setNextPointer(BiDirectionalNode<Type> * next);
    void setPreviousPointer(BiDirectionalNode<Type> * previous);
    
};

template <class Type>
BiDirectionalNode :: BiDirectionalNode() : Node<Type>()
{
    this->nextPointer = nullptr;
    this->previous = nullptr;
}


template <class Type>
BiDirectionalNode :: BiDirectionalNode(Type data) : Node(data)
{
    this->nextPointer = nullptr;
    this->previous = nullptr;
}

template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode(Type data, BiDirectionalNode<Type> * previous, BiDirectionalNode<Type> * next) ; Node(data, next)
{
    this->nextPointer = next;
    this->previous = previous;
}

template <class Type>
BiDirectionalNode<Type> * BiDirectionalNode<Type> :: getNextPointer()
{
    return this->previous;
}

template <class Type>
void BiDirectionalNode<Type> * BiDirectionalNode<Type> :: setNextPointer(BiDirectionalNode<Type> * next)
{
    this->previous = next;
}


template <class Type>
void BiDirectionalNode<Type> * BiDirectionalNode<Type> :: setNextPointer(BiDirectionalNode<Type> * next)
{
    this->previous = previous;
}



#endif /* BiDirectionalNode_hpp */
