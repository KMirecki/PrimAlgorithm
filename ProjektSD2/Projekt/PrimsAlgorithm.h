#pragma once

#include "Edge.h"
#include "List.h"
#include "PriorityQueue.h"
#include "ReadFile.h"
#include "Vertex.h"
#include <iostream>

using namespace std;

struct PrimData {
	int mst;
	long int time;
	List<Edge> result;
	PrimData(int mst, long int time, List<Edge> resoult);
};

class PrimsAlgorithm {
public:
	//static PrimData PrimsAlgorithmList(List<Edge> data);
	static PrimData PrimsAlgorithmQueue(List<Edge> data);
};