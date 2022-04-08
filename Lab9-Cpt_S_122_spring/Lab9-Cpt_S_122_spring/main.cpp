////
////  main.cpp
////  Lab9-Cpt_S_122_spring
////
////  Created by will on 3/25/22.
////
//
//#include <iostream>
//#include <stack>
//#include <vector>
//#include <sstream>
//using namespace std;
//
//
//
//template <class T>
//class Stack
//{
//public:
//    Stack(int newSize = 0);
//    ~Stack();
//
//    bool push(T &newItem);
//    bool pop(T &poppedItem);
//    bool peek(T &item);
//
//    bool isEmpty();
//
//private:
//    int mSize; // represents the current number of items in the stack
//    int cur;
//    int mMaxSize; // must not exceed the max size of our allocated array
//    T *mTop; // will point to contigous memory on the heap (an array)
//};
//
//template <class T>
//Stack<T>::Stack(int newSize)
//{
//    cur = -1;
//    mSize = newSize; // this can also be used as the index to the top of the stack
//    mMaxSize = 100;
//    mTop = new T[100]; // allocating an array of 100 items of type T on the heap
//}
//
//template <class T>
//Stack<T>::~Stack()
//{
//    delete[] mTop; // this is how we free up an array on the heap in C++
//}
//
//// Places the newItem at the top of the stack
//template <class T>
//bool Stack<T>::push(T &newItem)
//{
//    cur++;
//    mTop[cur] = newItem;
//    return false;
//}
//
//// In this implementation you will apply defensive design. You must check to
//// see if the stack is empty or not before you pop. Places the popped item in
//// the parameter referred to as "poppedItem". Returns true if the item was popped; false
//// otherwise.
//template <class T>
//bool Stack<T>::pop(T &poppedItem)
//{
//    cur--;
//    while(cur >= 0)
//    {
//        cur--;
//    }
//    if (cur >= 0)
//    {
//
//        poppedItem = mTop[cur];
//
//        return true;
//    }
//
//    return false;
//}
//
//// In this implementation you will apply defensive design. You must check to
//// see if the stack is empty or not before you peek. Places the item at the top of the
//// stack in the parameter referred to as "item". Returns true if there
//// is an item at the top; false otherwise.
//template <class T>
//bool Stack<T>::peek(T &item)
//{
//    item = mTop[cur];
//    return true;
//}
//
//// Returns true if the stack is empty; false otherwise
//template <class T>
//bool Stack<T>::isEmpty()
//{
//    if (cur == -1)
//        return true;
//    return false;
//}
//
////
////
////
////
////
////
////
////
////
////
//
//
//
//
//
//
//stack<int> opstack;
//void tokenize(std::string const &str, const char delim,std::vector<std::string> &out)
//{
//    // construct a stream from the string
//    std::stringstream ss(str);
//
//    std::string s;
//    while (std::getline(ss, s, ' ')) {
//    out.push_back(s);
//    }
//}
//
//
//
//
//int main() {
//    Stack<string> stk;
//    string item = "Hello";
//    stk.push(item);
//    item = "World";
//    stk.push(item);
//    stk.peek(item);
//    cout << item << endl;
//    stk.pop(item);
//    cout << item << endl;
//
////    char delimiter = ' ';
////    cout << "Hello World" << endl;
////    while(true)
////    {
////        string cmd;
////        cout << "wenzhi:";
////        cin >> cmd;
////        vector <string> cmds;
////        if (cmd == "clear")
////        {
////            while(!opstack.empty())
////            {
////                cout << opstack.top() << endl;
////                opstack.pop();
////            }
////        }
////        else {
////            tokenize(cmd, delimiter, cmds);
////            for (auto word:cmds)
////            {
////                if (word == "+" || word == "-" || word == "/" || word == "*")
////                {
////                    int first = opstack.top();
////                    opstack.pop();
////                    int second = opstack.top();
////                    opstack.pop();
////                    if (word == "+")
////                        opstack.push(first + second);
////                    else if (word == "-")
////                        opstack.push(first - second);
////                    else if (word == "-")
////                        opstack.push(first / second);
////                    else if (word == "*")
////                        opstack.push(first * second);
////                }
////                else
////                {
////                    opstack.push(stoi(word));
////                }
////            }
////        }
////    }
//}
#include <iostream>
using namespace std;
int* merge(int left[], int right[], int l_size, int r_size)
{
    
    int* res = new int[l_size + r_size];
    int l = 0;
    int r = 0;
    int cur = 0;
    while (l < l_size && r < r_size)
    {
        int l_v = left[l], r_v = right[r];
        if (left[l] < right[r])
        {
            res[cur] = left[l];
            l++;
        }
        else
        {
            res[cur] = right[r];
            r++;
        }
        cur++;
    }
    while (l < l_size)
    {
        res[cur] = left[l];
        l++;
        cur++;
    }
    while (r < r_size)
    {
        res[cur] = right[r];
        r++;
        cur++;
    }
    return res;
}
int* mergeSort(int arr[], int len)
{
    if (len < 2)
        return arr;
    int size = len;
    int mid = size / 2;

    int* left = new int[mid];
    int* right = new int[size - mid];
    int l = 0;
    int r = 0;
    for (int i = 0; i < size; i++)
    {
        if (i < mid)
        {
            left[l] = arr[i];
            l++;
        }
        else
        {
            right[r] = arr[i];
            r++;
        }
    }
    auto new_arr =  merge(mergeSort(left, mid), mergeSort(right, size - mid), mid, size - mid);
    
    
    return new_arr;
}
int main()
{
    cout << "Hello World" << endl;
    int arr[] = { 3,1,3,4,5,6,-1 };
    
    int len = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < len; i++)
        {
            cout << arr[i] << " ";
        }
    cout << endl;
    auto new_arr = mergeSort(arr, len);
    for (int i = 0; i < len; i++)
    {
        cout << new_arr[i] << " ";
    }

}
