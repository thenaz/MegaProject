//
//  BinarySearchTreeNode.hpp
//  MegaProject
//
//  Created by Nazir, Ammar on 4/11/17.
//  Copyright © 2017 Nazir, Ammar. All rights reserved.
//

#ifndef BinarySearchTreeNode_hpp
#define BinarySearchTreeNode_hpp

#include "Node.hpp"

template <class Type>
class BinarySearchTreeNode
{
private:
    BinarySearchTreeNode<Type> * root;
    BinarySearchTreeNode<Type> * leftChild;
    BinarySearchTreeNode<Type> * rightChild;
    
public:
    BinarySearchTreeNode();
    
    BinarySearchTreeNode<Type> * getRootPointer():
    BinarySearchTreeNode<Type> * getLeftChild();
    BinarySearchTreeNode<Type> * getRightChild();
    
    void setRootPointer(BinarySearchTreeNode<Type> * root);
    void setLeftChild(BinarySearchTreeNode<Type> * left);
    void setRightChild(BinarySearchTreeNode<Type> * right);
};
    
    
template <class Type>
    BinarySearchTreeNode<Type> :: BinarySearchTreeNode()
    {
        this->root = nullptr;
        this->leftChild = nullptr;
        this->rightChild = nullptr;
    }
    
template <class Type>
    BinarySearchTreeNode :: BinarySearchTreeNode(Type data) : Node<Type>(data)
    {
        this->root = nullptr;
        this->leftChild = nullptr;
        this->rightChild = nullptr;
    }
    
template <class Type>
BinarySearchTreeNode<Type> * BinarySearchTreeNode<Type> :: getRootPointer()
    {
        return this->root;
    }
    
template <class Type>
BinarySearchTreeNode<Type> * BinarySearchTreeNode<Type> :: getleftChild()
    {
        return this->leftChild;
    }
    
template <class Type>
BinarySearchTreeNode<Type> * BinarySearchTreeNode<Type> :: getrightChild()
    {
        return this->rightChild;
    }

template <class Type>
void BinarySearchTreeNode<Type> :: setRootPointer(BinarySearchTreeNode<Type> * root)
    {
        this->root = root;
    }
    
template <class Type>
void BinarySearchTreeNode<Type> :: setleftChild(BinarySearchTreeNode<Type> * left)
    {
        this->leftChild = left;
    }
    
template <class Type>
void BinarySearchTreeNode<Type> :: setrightChild(BinarySearchTreeNode<Type> * right)
    {
        this->rightChild = right;
    }



#endif /* BinarySearchTreeNode_hpp */
