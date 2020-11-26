//Wesley Reid
//COP2222 - Chapter 19 - Problem 7
//May 3rd 2020

#include <iostream>
#include "MathStack.h"
#include "IntegerStack.h"

using namespace std;

IntegerStack::IntegerStack(int size)
{
    integerStackArray = new int[size];
    integerStackSize = size;
    top = -1;
}

IntegerStack::IntegerStack(const IntegerStack& obj)
{
    if (obj.integerStackSize > 0)
        integerStackArray = new int[obj.integerStackSize];
    else
        integerStackArray = nullptr;

    integerStackSize = obj.integerStackSize;
    for (int count = 0; count < integerStackSize; count++)
        integerStackArray[count] = obj.integerStackArray[count];
    top = obj.top;
}

IntegerStack::~IntegerStack()
{
    delete[] integerStackArray;
}

void IntegerStack::push(int num)
{
    if (isFull())
    {
        cout << "The stack is full.\n";
    }
    else
    {
        top++;
        integerStackArray[top] = num;
    }
}

void IntegerStack::pop(int& num)
{
    if (isEmpty())
    {
        cout << "The stack is empty.\n";
    }
    else
    {
        num = integerStackArray[top];
        top--;
    }
}

bool IntegerStack::isFull() const
{
    bool status;
    if (top == integerStackSize - 1)
        status = true;
    else
        status = false;
    return status;
}

bool IntegerStack::isEmpty() const
{
    bool status;

    if (top == -1)
        status = true;
    else
        status = false;

    return status;
}

void MathStack::add() {
    int num, sum;

    pop(sum);
    pop(num);

    sum += num;

    push(sum);
}

void MathStack::sub() {
    int num, diff;

    pop(diff);
    pop(num);

    diff -= num;

    push(diff);
}

void MathStack::mult() {
    int num, multi;
    pop(multi);
    pop(num);

    multi *= num;

    push(multi);
}

void MathStack::addAll() {
    int num, sum = 0;
    while (!isEmpty()) {
        pop(num);
        sum += num;
    }
    push(sum);
}

void MathStack::multAll() {
    int num = 0;
    int total = 1;
    while (!isEmpty()) {
        pop(num);
        total = total * num;
    }
    push(total);
}

int main()
{
    int outVar;

    cout << "Creating Math Stack with value of 5\n";
    MathStack stack(5);

    cout << "Pushing 1\n";
    stack.push(1);

    cout << "Pushing 7\n";
    stack.push(7);

    cout << "Adding stack.\n";
    stack.add();

    stack.pop(outVar);
    cout << "Add result: " << outVar << endl;

    cout << endl;

    cout << "Pushing 9\n";
    stack.push(9);

    cout << "Pushing 5\n";
    stack.push(5);

    cout << "Subtracting 7\n";
    stack.sub();

    stack.pop(outVar);
    cout << "The subtraction result is: " << outVar << endl;

    cout << endl;

    cout << "Pushing 3\n";
    stack.push(3);

    cout << "Pushing 8\n";
    stack.push(8);

    cout << "Multiplying values\n";
    stack.mult();
    stack.pop(outVar);

    cout << "Multiplication value: " << outVar << endl;
    cout << endl;

    cout << "Pushing 2\n";
    cout << "Pushing 3\n";
    cout << "Pushing 4\n";
    stack.push(2);
    stack.push(3);
    stack.push(4);

    cout << "Adding All\n";
    stack.addAll();
    stack.pop(outVar);
    cout << "All Add Result: " << outVar << endl;

    cout << endl;

    cout << "Pushing 2\n";
    cout << "Pushing 3\n";
    cout << "Pushing 4\n";
    stack.push(2);
    stack.push(3);
    stack.push(4);

    cout << "Multiplying All\n";
    stack.multAll();
    stack.pop(outVar);

    cout << "Multiply All Result: " << outVar << endl;
    return 0;
}
