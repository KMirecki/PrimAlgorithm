#pragma once
#include "Edge.h"
#include "List.h"
#include <string>

using namespace std;

class Vertex
{
public:
    int index;
    List<int> neighbours;
    List<int> edgeWeight;
    Vertex(int index);
    void addNeighbour(int neighbour, int weight);
    string toString();
};