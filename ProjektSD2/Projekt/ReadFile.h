#pragma once

#include "Edge.h"
#include "List.h"
#include "Vertex.h"
#include <iostream>
#include <fstream>
#include <string>
#include <regex>

using namespace std;

class ReadFile {
public:
	static List<Edge> ReadFromFile(string link);
	static List<Vertex> ReadFromFileVertex(string link);

};