//
//  main.cpp
//  Lab9-Cpt_S_122_spring
//
//  Created by will on 3/25/22.
//

#include <iostream>
#include <stack>
#include <vector>
#include <sstream>
using namespace std;



template <class T>
class Stack
{
public:
    Stack(int newSize = 0);
    ~Stack();

    bool push(T &newItem);
    bool pop(T &poppedItem);
    bool peek(T &item);

    bool isEmpty();

private:
    int mSize; // represents the current number of items in the stack
    int cur;
    int mMaxSize; // must not exceed the max size of our allocated array
    T *mTop; // will point to contigous memory on the heap (an array)
};

template <class T>
Stack<T>::Stack(int newSize)
{
    cur = -1;
    mSize = newSize; // this can also be used as the index to the top of the stack
    mMaxSize = 100;
    mTop = new T[100]; // allocating an array of 100 items of type T on the heap
}

template <class T>
Stack<T>::~Stack()
{
    delete[] mTop; // this is how we free up an array on the heap in C++
}

// Places the newItem at the top of the stack
template <class T>
bool Stack<T>::push(T &newItem)
{
    cur++;
    mTop[cur] = newItem;
    return false;
}

// In this implementation you will apply defensive design. You must check to
// see if the stack is empty or not before you pop. Places the popped item in
// the parameter referred to as "poppedItem". Returns true if the item was popped; false
// otherwise.
template <class T>
bool Stack<T>::pop(T &poppedItem)
{
    cur--;
    while(cur >= 0)
    {
        cur--; 
    }
    if (cur >= 0)
    {
        
        poppedItem = mTop[cur];

        return true;
    }

    return false;
}

// In this implementation you will apply defensive design. You must check to
// see if the stack is empty or not before you peek. Places the item at the top of the
// stack in the parameter referred to as "item". Returns true if there
// is an item at the top; false otherwise.
template <class T>
bool Stack<T>::peek(T &item)
{
    item = mTop[cur];
    return true;
}

// Returns true if the stack is empty; false otherwise
template <class T>
bool Stack<T>::isEmpty()
{
    if (cur == -1)
        return true;
    return false;
}

//
//
//
//
//
//
//
//
//
//






stack<int> opstack;
void tokenize(std::string const &str, const char delim,std::vector<std::string> &out)
{
    // construct a stream from the string
    std::stringstream ss(str);

    std::string s;
    while (std::getline(ss, s, ' ')) {
    out.push_back(s);
    }
}




int main() {
    Stack<string> stk;
    string item = "Hello";
    stk.push(item);
    item = "World";
    stk.push(item);
    stk.peek(item);
    cout << item << endl;
    stk.pop(item);
    cout << item << endl;
    
//    char delimiter = ' ';
//    cout << "Hello World" << endl;
//    while(true)
//    {
//        string cmd;
//        cout << "wenzhi:";
//        cin >> cmd;
//        vector <string> cmds;
//        if (cmd == "clear")
//        {
//            while(!opstack.empty())
//            {
//                cout << opstack.top() << endl;
//                opstack.pop();
//            }
//        }
//        else {
//            tokenize(cmd, delimiter, cmds);
//            for (auto word:cmds)
//            {
//                if (word == "+" || word == "-" || word == "/" || word == "*")
//                {
//                    int first = opstack.top();
//                    opstack.pop();
//                    int second = opstack.top();
//                    opstack.pop();
//                    if (word == "+")
//                        opstack.push(first + second);
//                    else if (word == "-")
//                        opstack.push(first - second);
//                    else if (word == "-")
//                        opstack.push(first / second);
//                    else if (word == "*")
//                        opstack.push(first * second);
//                }
//                else
//                {
//                    opstack.push(stoi(word));
//                }
//            }
//        }
//    }
}
