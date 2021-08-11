#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cstdio>

/**
	Define a simple matrix.
*/
class Matrix
{
private:
	std::size_t column_count;
	std::size_t line_count;

	// TODO: store the data
	// hints: you can use std::string, std::vectors + string, char**, vector<vector<char>>, etc
	std::vector<std::vector<char>> matrix;
public:
	Matrix(std::size_t numColumnsX, std::size_t numLinesY);
	

	// Set an entire line
	void setLine(std::size_t line_number, const std::string& data);
	
	//comment
	void setCellYX(std::size_t y, std::size_t x, char cell_content);
	
	//comment
	void print();
	
};

