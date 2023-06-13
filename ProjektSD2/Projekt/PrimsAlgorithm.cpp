#include "PrimsAlgorithm.h"

PrimData::PrimData(int mst, long int time, List<Edge> result) {
	this->mst = mst;
	this->time = time;
	this->result = result;
}

/*PrimData PrimsAlgorithm::PrimsAlgorithmList(List<Edge> data) {
	
}*/

PrimData PrimsAlgorithm::PrimsAlgorithmQueue(List<Edge> data) {
	PriorityQueue<Edge> queue = PriorityQueue<Edge>();
	
	bool* visited = new bool(data.getSize());
	for (int i = 0; i < data.getSize(); i++) {
		visited[i] = false;
	}
	List<Edge> tree = List<Edge>();
	Edge v = data.getValue(0);
	visited[v.getSource()] = true;
	int x = 1;
	for (int i = 1; i < queue.getSize(); i++) {
		Edge u = data.getValue(i);
		while (u.getSource() == v.getSource()) {
			if (visited[u.getDestination()] == false) {
				queue.addItem(u, u.getWeight());
			}
			x++;
			u = data.getValue(x);
		}
		i = x-1;
		Edge edge = queue.top();
		queue.pop();
		while (visited[edge.getDestination()]) {
			Edge edge = queue.top();
			queue.pop();
		}
		tree.addItem(edge);
		visited[edge.getDestination()]=true;
		v = edge;
	}
	return PrimData(0, 0, tree);
	
}

/*PrimData PrimsAlgorithm::PrimsAlgorithmQueue(List<Edge> data) {
	PriorityQueue<Edge> queue = PriorityQueue<Edge>();
	bool* visited = new bool(data.getSize());
	List<Edge> mstResult = List<Edge>();
	visited[0] = true;

	// int** neighbours = new int*[data.getSize()];
	// for (int i = 0; i < data.getSize(); i++) {
	// 	for (int j = 0; j < data.getSize(); j++) {
	// 		if (data.getValue(i).getSource() == data.getValue(j).getSource()) {
	// 			neighbours[i][j] = data.getValue(j).getDestination();
	// 		}
	// 	}
	// }

	for (int i = 1; i < data.getSize(); i ++){
		queue.addItem(data.getValue(i), data.getValue(i).getWeight());
		visited[i] = false;
	}

	int distanceFromStart = 0;
	int currentVertex;
	Edge currentEdge;

	while (queue.getSize() > 0) {
		currentVertex = queue.top().getSource();
		visited[currentVertex] = true;
		currentEdge = queue.top();
		queue.pop();

		for (int i = 0; i < data.getSize(); i++) {
			if (visited[currentEdge.getDestination()] == false &&
				currentEdge.getWeight() < distanceFromStart + currentEdge.getWeight()) {
				currentEdge = queue.top();
				currentVertex = currentEdge.getSource();
				distanceFromStart += currentEdge.getWeight();
			}
		}
	}
	return PrimData(distanceFromStart, 0, mstResult);
}*/
