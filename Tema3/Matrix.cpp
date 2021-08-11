#include "pch.h"
#include "Matrix.h"

Matrix::Matrix(size_t numColumnsX, size_t numLinesY)
// TODO: add functionality
{
	column_count = numColumnsX;
	line_count = numLinesY;
	// TODO: add functionality
	matrix.clear();
	matrix.resize(line_count);
	//for (size_t count = 0; count < line_count; count++) {
	//	matrix[count].resize(column_count);
	//}

}

// Set an entire line
void Matrix::setLine(size_t line_number, const std::string& data)
{
	std::vector<char> aux(data.begin(), data.end());
	matrix[line_number] = std::vector<char>(data.begin(), data.end());
}
  
void Matrix::setCellYX(size_t y, size_t x, char cell_content)
{
	// TODO: add functionality
	matrix[y][x] = cell_content;
}

void Matrix::print()
{
	// print all lines and columns
	// TODO: add functionality
	for (auto rand : matrix) {
		for (auto element : rand) {
			std::cout << element << " ";
			std::cout.flush();
		}
		std::cout << "\n";
	}
}
