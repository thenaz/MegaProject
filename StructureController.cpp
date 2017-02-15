//
//  StructureController.cpp
//  MegaProject
//
//  Created by Nazir, Ammar on 2/9/17.
//  Copyright © 2017 Nazir, Ammar. All rights reserved.
//

#include "IntNodeArray.hpp"
#include "StructureController.hpp"
#include "../Model/Timer.hpp"
#include <iostream>

using namespace std;

StructureController :: StructureController()
{
    wordNode = Node<string>();
    numberNode = Node<int>();
    numberArray = Array<int>(0);
    
}

void StructureController :: testArrayTemplate()
{
    cout << "Array Template" << endl;
    Timer arrayTimer;
    arrayTimer.startTimer;
    int test [9];
    arrayTimer.stopTimer();
    arrayTimer.displayTimerInformation();
    arrayTimer.resetTimer();
    arrayTimer.startTimer();
    numberArray = Array<int>(9);
    arrayTimer.stopTimer();
    arrayTimer.displayTimerInformation();
    
    
    
    
}

void StructureController :: testIntArray()
{
    cout << "Here is a string node" << endl;
    cout << wordNode.getNodeData() << endl;
    cout << "Here is an uninitialized int node" << end;
    cout << numberNode.getNodeData() << endl;
}

void StructureController :: start()
{
    cout << "Going to test the IntNodeArray" << endl;
    testIntArray();
    cout << "Finished IntNodeArray" << endl;
}
