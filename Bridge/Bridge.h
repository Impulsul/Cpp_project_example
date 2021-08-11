#include <windows.h>
#include <vcclr.h>
#using <System.dll>
#include "../Tema3/Matrix.h"
using namespace System;

public ref class MatrixRef
{
public:
	Matrix *a;
};
public ref class Bridge
{
public:

	MatrixRef^ call() {

		Matrix matrix(20, 10);

		matrix.setLine(0, "X-----X----X-----XX-");
		MatrixRef^ r = gcnew MatrixRef();
		r->a = &matrix;
		return r;
	}

};



