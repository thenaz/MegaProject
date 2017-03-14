//
//  Meme.hpp
//  MegaProject
//
//  Created by Nazir, Ammar on 3/13/17.
//  Copyright © 2017 Nazir, Ammar. All rights reserved.
//

#ifndef Meme_hpp
#define Meme_hpp
#include <string>

using namespace std;

class Meme
{
private:
    string title;
    int dankness;
    double hipsterQuotient;
    bool isMainstream;
public:
    Meme();
    Meme(string title);
    int getDankness();
    double getHipsterQuotient();
    bool isMainstream();
    string getTitle();
    void setTitle(string title);
    void setDankness(int dank);
    void setHipsterQuotient(double hipsterQuotient);
    void setMainstream(bool mainstream);
};

#endif /* Meme_hpp */
