/* 
 * File:   main.cpp
 * Author: Mark Bouchett
 *
 * Created on August 15, 2017, 12:01 AM
 * Adaphed from: http://www.algolist.net/Data_structures/Graph/Internal_representation
 */

#include <iostream>  //console Input/Output
#include <string>  //string handler
#include "Graph.h"

using namespace std; //declares the name space
// declare function prototypes

/*
 * 
 */
int main() {

    Graph g(10);
    
    g.addEdge(1,4);
    g.addEdge(2,4);
    g.addEdge(2,5);
    g.addEdge(3,5);
    g.addEdge(4,1);
    g.addEdge(4,2);
    g.addEdge(4,5);
    g.addEdge(5,2);
    g.addEdge(5,3);
    g.addEdge(5,4);

    
    if(g.isEdge(7,5))
        cout << "We got us an edge buster";
    return 0;
}

