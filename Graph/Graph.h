/* 
 * File:   Graph.h
 * Author: mark
 *
 * Created on August 15, 2017, 12:01 AM
 */

#ifndef GRAPH_H
#define GRAPH_H
#include <iostream>

class Graph {
private:
    bool** adjacencyMatrix;
    int vertexCount;
public:
    Graph(int vertexCount);
    ~Graph();
    void addEdge(int, int);
    void removeEdge(int, int);
    bool isEdge(int, int);
};
#endif /* GRAPH_H */

