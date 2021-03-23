#pragma once
#include <vector>
//#include <cstdlib>

struct Node {
	int value;
	int amount;
};

class Experiment {
protected:
	std::vector <int> vec;
	int size;

private:
	Experiment(double p_1, double p_2, int _size) {
		size = _size;

	}
	
	int Number_of_hits(double p_1, double p_2) {
		for (int i = 0; true; i++) {
			if (p_1 < 1 / rand())
				return i;
			if (p_2 < 1 / rand())
				return i + 1;
		}
	}

};