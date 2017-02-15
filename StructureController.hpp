//
//  StructureController.hpp
//  MegaProject
//
//  Created by Nazir, Ammar on 2/9/17.
//  Copyright © 2017 Nazir, Ammar. All rights reserved.
//

#ifndef StructureController_hpp
#define StructureController_hpp

#include "../Model/Node.hpp"
#include "../Model/Array.hpp"
#include <string>
using namespace std;

class StructureController
{
private:
    Node<int> numberNode;
    Node<string> wordNode;
    Array<int> numberArray;
    void testIntArray();
    void testNodeTypes();
    void testArrayTemplate();
public:
    StructureController();
    void start();
};


#endif /* StructureController_hpp */
