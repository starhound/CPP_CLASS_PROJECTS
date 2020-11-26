
#ifndef NumList_H
#define NumList_H


using namespace std;

template <class T>
class ListNode
{
public:
    T value;           
    ListNode<T>* next; 

    // Constructor
    ListNode(T nodeValue)
    {
        value = nodeValue;
        next = nullptr;
    }
};

template <class T>
class NumList
{
private:
    ListNode<T>* head;   

public:
    NumList()
    {
        head = nullptr;
    }

    ~NumList();

    void appendNode(T);
    void insertNode(T);
    void deleteNode(T);
    void displayList() const;
};



template <class T>
void NumList<T>::appendNode(T newValue)
{
    ListNode<T>* newNode;  
    ListNode<T>* nodePtr;  

    newNode = new ListNode<T>(newValue);


    if (!head)
        head = newNode;
    else  
    {
        nodePtr = head;

        while (nodePtr->next)
            nodePtr = nodePtr->next;

        nodePtr->next = newNode;
    }
}




template <class T>
void NumList<T>::displayList() const
{
    ListNode<T>* nodePtr;  

    nodePtr = head;

    while (nodePtr)
    {
        cout << nodePtr->value << endl;

        nodePtr = nodePtr->next;
    }
}


template <class T>
void NumList<T>::insertNode(T newValue)
{
    ListNode<T>* newNode;				
    ListNode<T>* nodePtr;				
    ListNode<T>* previousNode = nullptr; 

    newNode = new ListNode<T>(newValue);

    if (!head)
    {
        head = newNode;
        newNode->next = nullptr;
    }
    else  
    {
        nodePtr = head;

        previousNode = nullptr;

        while (nodePtr != nullptr && nodePtr->value < newValue)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        if (previousNode == nullptr)
        {
            head = newNode;
            newNode->next = nodePtr;
        }
        else 
        {
            previousNode->next = newNode;
            newNode->next = nodePtr;
        }
    }
}

template <class T>
void NumList<T>::deleteNode(T searchValue)
{
    ListNode<T>* nodePtr;      
    ListNode<T>* previousNode = nullptr; 

    if (!head)
        return;

    if (head->value == searchValue)
    {
        nodePtr = head->next;
        delete head;
        head = nodePtr;
    }
    else
    {
        nodePtr = head;

        while (nodePtr != nullptr && nodePtr->value != searchValue)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        if (nodePtr)
        {
            previousNode->next = nodePtr->next;
            delete nodePtr;
        }
    }
}

template <class T>
NumList<T>::~NumList()
{
    ListNode<T>* nodePtr;   
    ListNode<T>* nextNode;  

    nodePtr = head;

    while (nodePtr != nullptr)
    {
        nextNode = nodePtr->next;

        delete nodePtr;

        nodePtr = nextNode;
    }
}
#endif