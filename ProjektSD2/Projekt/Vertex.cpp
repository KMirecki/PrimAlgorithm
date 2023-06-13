#include "Vertex.h"

Vertex::Vertex(int index) {
    this->index = index;
}

void Vertex::addNeighbour(int neighbour, int weight) {
    neighbours.addItem(neighbour);
    edgeWeight.addItem(weight);
}

/*string Vertex::toString() {
    string result = "[";
    for(int i = 0; i < neighbours.getSize(); i++){
        result = result + to_string(index) + ", "  + to_string(neighbours.getValue(i)) + ", " + to_string(edgeWeight.getValue(i)) + "]";
    }
    return result;
}*/