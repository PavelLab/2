#pragma once
#include <vector>
#include <algorithm>
#include <math.h>

struct Node {
	int value=0;
	int amount=0;
};

class Experiment {
public:	
	std::vector <Node> sort_vec;
	std::vector <int> full_sort_vec;	//изначальный отсортированный вектор значений
	double p1, p2;
	int size;							//кол-во экспериметов


	Experiment(double p_1=0, double p_2=0, int _size=0) {
		size = _size;
		p1 = p_1; p2 = p_2;
		for (int i = 0; i < size; i++) {
			int _number_of_hits = Number_of_hits(p1, p2);
			full_sort_vec.push_back(_number_of_hits);
		}
		sort(full_sort_vec.begin(), full_sort_vec.end());
		sort_vec = Create_sorted_vec(full_sort_vec);
	}
	
	//кол-во бросков 2-го игрока до первого попадания
	int Number_of_hits(double p1, double p2) {
		for (int i = 0; true; i++) {
			if ((double)rand()/ (double)RAND_MAX < p1 )
				return i;
			if ((double)rand() / (double)RAND_MAX < p2)
				return i + 1;
		}
	}

	//вектор значений величины с подсчетом похожих значений
	std::vector<Node> Create_sorted_vec(std::vector <int> &vec) {
		Node Elem;
		for (int i = 0; i < size; i++) {
			Elem.value = vec[i];
			Elem.amount = 1;
			sort_vec.push_back(Elem);
			int j = 1;
			while (i+j < size) {
				if (vec[i] != vec[i + j])
					break;
				sort_vec[sort_vec.size()-1].amount++;
				j++;
			}
			i = i + j - 1;
			
		}
		return sort_vec;
	}

	//------------------------------------------------------------
	
	// Различные характеристки
	
	//частоты
	double Frequency(int i) {
		return sort_vec[i].amount / (double)size;
	}

	//выборочное среднее
	double Sample_mean() {
		double sam_mean=0;
		for (int i = 0; i < sort_vec.size(); i++) {
			sam_mean += sort_vec[i].amount * sort_vec[i].value;
		}
		sam_mean /= size;
		return sam_mean;
	}

	//выборочная дисперсия
	double Sample_variance() {
		double sam_mean = Sample_mean();
		double sam_var = 0;
		for (int i = 0; i < sort_vec.size(); i++) {
			sam_var += sort_vec[i].amount * pow((sort_vec[i].value - sam_mean), 2);
		}
		sam_var /= size;
		return sam_var;
	}

	//размах выборки
	int Sample_range() {
		if (sort_vec.size() != 0)
			return sort_vec[sort_vec.size() - 1].value - sort_vec[0].value;
	}

	//выборочная медиана
	double Sample_median() {
		if (size % 2 == 0)
			return (full_sort_vec[(size - 1) / 2] + full_sort_vec[(size - 1) / 2 + 1]) / 2.;
		else return full_sort_vec[(size - 1) / 2];
	}

	//Выбор. функция распределения
	double Sample_distribution_function(double x) {
		if (sort_vec.empty()) throw - 1;
		if (x <= sort_vec[0].value) return 0;
		if (x > sort_vec[sort_vec.size() - 1].value) return 1;
		double func_value = 0;
		for (int i = 0, j = 0; i < x; i++) {
			//проверка, есть ли такая величина в массиве
			if (i == sort_vec[j].value) {
				func_value += sort_vec[j].amount;
				j++;
			}
		}
		return func_value / size;
	}

	//------------------------------------------------

	//Теоретические характеристики

	//вер-ть, что 2ой игрок сделает m бросков
	double Second_player_probability(int m) {
		if (m == 0)
			return p1;
		else return pow((1 - p1), m) * pow((1 - p2), m - 1) * p2 + pow((1 - p1), m) * pow((1 - p2), m) * p1;
	}

	//мат. ожидание
	double Expected_value() {
		return (1 - p1) / (p2 + p1 - p1 * p2);
	}

	//дисперсия
	double Dispersion() {
		return (1 - p1 - p2 + 2 * p1 * p2 - p1 * p1 * p2) / pow((p2 + p1 - p1 * p2), 2);
	}

	//Функция распределения
	double Distribution_function(double x) {
		if (sort_vec.empty()) throw - 1;
		if (x <= 0) return 0;
		double func_value = 0;
		for (int i = 0; i < x; i++) {
			func_value += Second_player_probability(i);
		}
		return func_value;
	}
	
	//Максимальное отклонение вер-ти от частоты
	double Maximum_deviation() {
		double max_deviat = 0;
		for (int i = 0; i < sort_vec.size(); i++) {
			if (abs(Second_player_probability(sort_vec[i].value) - Frequency(i)) > max_deviat)
				max_deviat = abs(Second_player_probability(sort_vec[i].value) - Frequency(i));
		}
		return max_deviat;
	}
};

struct Interval
{
	double left_boundary=0, right_boundary=0;
	int quantity=0;
	double probability=0;
};

class Hypothesis {
public:
	Interval* intervals;
	Experiment *experem;
	int size;

	Hypothesis(Experiment *_experem, int number){
		experem = _experem;
		size = number;
		intervals = new Interval[size];
	}

	void set_boundary(int i, double left, double right) {
		intervals[i].left_boundary = left;
		intervals[i].right_boundary = right;
	}

	void calculate_probab() {
		if (size > 1) {
			intervals[0].probability = experem->Distribution_function(intervals[0].right_boundary); //(-oo,right) Probab = F(right)-0
			for (int i = 1; i < size - 1; i++) {
				intervals[i].probability = experem->Distribution_function(intervals[i].right_boundary)- experem->Distribution_function(intervals[i].left_boundary);
			}
			intervals[size - 1].probability = 1-experem->Distribution_function(intervals[size-1].left_boundary); //(left,oo)  Probab = 1-F(left)
		}
	}

	void calculate_quantity() {
		for (int i =0, j = 0;  i<experem->sort_vec.size(); i++) {
			while (j<size) {
				//если значение sort_vec[i] попадает в последний интервал
				if (j == size - 1) {
					intervals[j].quantity += experem->sort_vec[i].amount;
					break;
				}
				//проходим все интервалы
				if ((intervals[j].left_boundary <= experem->sort_vec[i].value) && (experem->sort_vec[i].value < intervals[j].right_boundary)) {
					intervals[j].quantity += experem->sort_vec[i].amount;
					break;
				}
				j++;
			}
		}

	}

	double calculate_R_o() {
		double R_0 = 0;
		for (int i = 0; i < size; i++) {
			R_0 += pow((intervals[i].quantity - experem->size * intervals[i].probability),2) / (experem->size * intervals[i].probability);
		}
		return R_0;
	}


	~Hypothesis() {
		delete[] intervals;
	}
};