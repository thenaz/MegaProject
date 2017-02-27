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
    Type data;
    BiDirectionalNode<Type> * nextPointer;
    BiDirectionalNode<Type> * previousPointer;
public:
    BiDirectionalNode();
    BiDirectionalNode(Type data);
    BiDirectionalNode(Type data, BiDirectionalNode<Type> * previous, BiDirectionalNode<Type> * next);
    Type getNodeData();
    BiDirectionalNode<Type> * getNextPointer();
    BiDirectionalNode<Type> * getPreviousPointer();
    
    void setNodeData(Type data);
    void setNextPointer(BiDirectionalNode<Type> * next);
    void setPreviousPointer(BiDirectionalNode<Type> * previous);
    
};

template <class Type>
BiDirectionalNode :: BiDirectionalNode() : Node()
{
    
}


template <class Type>
BiDirectionalNode :: BiDirectionalNode(Type data) : Node(data)
{
    
}




#endif /* BiDirectionalNode_hpp */
