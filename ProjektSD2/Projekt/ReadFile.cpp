#include "ReadFile.h"

List<Edge> ReadFile::ReadFromFile(string link) {
	List<Edge> data = List<Edge>();
	fstream file;
	string line;
	file.open(link);
	regex newRegex(R"((\d+)\s+(\d+)\s+(\d+))");
	while (!file.eof()) {
		getline(file, line);
		smatch match;
		if (regex_match(line, match, newRegex)) {
			data.addItem(Edge(stoi(match[1].str()), stoi(match[2].str()), stoi(match[3].str())));
		}
	}
	file.close();
	return data;
}

/*
List<Vertex> ReadFile::ReadFromFileVertex(string link) {
	List<Vertex> data = List<Vertex>();
	fstream file;
	string line;
	file.open(link);
	int vertexIndex = 0;
	Vertex currentVertex(vertexIndex);
	regex newRegex(R"((\d+)\s+(\d+)\s+(\d+))");
	while (!file.eof()) {
		getline(file, line);
		smatch match;
		if (regex_match(line, match, newRegex)) {
			int index = stoi(match[1].str());
			int neighbour = stoi(match[2].str());
			int weight = stoi(match[3].str());

			if (index == vertexIndex) {
				currentVertex.addNeighbour(neighbour, weight);
			}
			else {
				data.addItem(currentVertex);
				vertexIndex = index;
				currentVertex =  Vertex(index);
				currentVertex.addNeighbour(neighbour, weight);
			}
		}
	}
	file.close();
	return data;
}*/