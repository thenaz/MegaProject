//
//  IntNodeArray.hpp
//  MegaProject
//
//  Created by Nazir, Ammar on 2/8/17.
//  Copyright © 2017 Nazir, Ammar. All rights reserved.
//

#ifndef IntNodeArray_hpp
#define IntNodeArray_hpp

#include "IntNode.hpp"

class IntNodeArray
{
private:
    IntNode * head;
    int size;
public:
    IntNodeArray(int bigness);
    int getSize();
    int getFromIndex(int index);
    void setAtIndex(int index, int value);
};

#endif /* IntNodeArray_hpp */
