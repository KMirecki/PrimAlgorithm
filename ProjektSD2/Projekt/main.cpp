#include <iostream>
#include "List.h"
#include "PriorityQueue.h"
#include "ReadFile.h"
#include "PrimsAlgorithm.h"

using namespace std;

int main()
{
	
	/*List<Edge> lista = ReadFile::ReadFromFile("dane1.txt");
	for (int i = 0; i < lista.getSize(); i++) {
		cout << lista.getValue(i).getSource() << endl;
	}*/
	/*List<Vertex> lista = ReadFile::ReadFromFileVertex("dane1.txt");
	for (int i = 0; i < lista.getSize(); i++) {
		cout << lista.getValue(i).toString() << endl;
	}*/
	PriorityQueue<int> lista = PriorityQueue<int>();
	lista.addItem(1,1);
	cout << lista.getValue(0);
}