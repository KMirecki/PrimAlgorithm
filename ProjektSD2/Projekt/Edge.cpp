#include "Edge.h"

Edge::Edge() {}

Edge::Edge(int source, int destination, int weight) {
	this->source = source;
	this->destination = destination;
	this->weight = weight;
}

int Edge::getSource() {
	return source;
}

int Edge::getDestination() {
	return destination;
}

int Edge::getWeight() {
	return weight;
}