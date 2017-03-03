//
//  Node.hpp
//  MegaProject
//
//  Created by Nazir, Ammar on 2/13/17.
//  Copyright © 2017 Nazir, Ammar. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp
template <class Type>
class Node
{
private:
    Type nodeData;
    Node<Type>* nextPointer;
public:
    Node<Type>();
    Node<Type>(Type data);
    Node<Type>(Type data, Node<Type> * nextPointer);
    
    Type getNodeData();
    Node<Type> * getnextPointer();
    void setNodeData(Type value);
    void getnextPointer(Node<Type> * nextPointer);
};

#endif /* Node_hpp */


/*
Implementation section of the templated class!
*/
