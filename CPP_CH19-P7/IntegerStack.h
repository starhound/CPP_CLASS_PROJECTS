#ifndef IntegerStack_H
#define IntegerStack_H

class IntegerStack
{
private:
    int* integerStackArray;  
    int integerStackSize;    
    int top;          

public:
    IntegerStack(int);

    IntegerStack(const IntegerStack&);

    ~IntegerStack();

    void push(int);
    void pop(int&);
    bool isFull() const;
    bool isEmpty() const;
};
#endif 