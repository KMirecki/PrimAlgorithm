#pragma once
#include "Vertex.h"
#include <iostream>
#include "List.h"

class Edge
{
private:
    int source;
    int destination;
    int weight;

public:
    Edge();
    Edge(int source, int destination, int weight);
    int getSource();
    int getDestination();
    int getWeight();
    //List<int> getNeighbours(int vertex, List<Edge> edges);
};