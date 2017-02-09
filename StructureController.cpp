//
//  StructureController.cpp
//  MegaProject
//
//  Created by Nazir, Ammar on 2/9/17.
//  Copyright © 2017 Nazir, Ammar. All rights reserved.
//

#include "IntNodeArray.hpp"
#include "StructureController.hpp"
#include <iostream>

using namespace std;

StructureController :: StructureController()
{
    
}

void StructureController :: testIntArray()
{
    cout << "Creating an IntNodeArray" << endl;
    IntNodeArray temp = IntNodeArray(3);
    for(int spot = 0; spot < 3; spot++)
    {
        cout << temp.getFromIndex(spot) << " is at " << spot << endl;
    }
    
    for(int spot = 0; spot < 3; spot++)
    {
        temp.setAtIndex(spot,spot);
    }
}

void StructureController :: start()
{
    cout << "Doing to test the IntNodeArray" << endl;
    testIntArray();
    cout << "Finished IntNodeArray" << endl;
}
