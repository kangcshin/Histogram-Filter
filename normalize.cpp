#include "headers/normalize.h"
using namespace std;

vector< vector<float> > normalize(vector< vector <float> > &grid) {

	float total = 0.0;
	int rows = grid.size();
	int cols = grid[0].size();
	int i, j;

	for (i = 0; i < rows; ++i){
		for (j = 0; j< cols; ++j){
			total += grid[i][j];
		}
	}

	for (i = 0; i < rows; ++i){
		for (j=0; j< cols; ++j){
			grid[i][j] = grid[i][j] / total;
		}
	}
	return grid;
}