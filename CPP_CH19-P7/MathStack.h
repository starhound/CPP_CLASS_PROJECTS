#ifndef MATHSTACK_H
#define MATHSTACK_H
#include "IntegerStack.h"

class MathStack : public IntegerStack {
public:
	MathStack(int s) : IntegerStack(s) {}

	void add();
	void sub();
	void mult();
	void addAll();
	void multAll();
};
#endif // !MATHSTACK_H

