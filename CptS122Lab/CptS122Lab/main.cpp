////
////  main.cpp
////  CptS122Lab
////
////  Created by will on 2/25/22.
////
//
#include<iostream>
#include <queue>
using namespace std;

////class Complex {
////private:
////    int real, imag;
////public:
////    Complex(int r = 0, int i = 0) {real = r;   imag = i;}
////
////    Complex operator +(const Complex& obj)
////    {
////        int newReal = 0, newImage = 0;
////        newReal = real * obj.real;
////        newImage = imag * obj.imag;
////        Complex res(newReal, newImage);
////        return res;
////    }
////    void add(Complex &obj)
////    {
////        real += obj.getReal();
////        imag += obj.getimag();
////    }
////    int getReal()
////    {
////        return real;
////    }
////    int getimag()
////    {
////        return imag;
////    }
////    void print() { cout << real << " + i" << imag << '\n'; }
////};
//class Node
//{
//public:
//    int data;
//    Node* next; // Pointer to next node in DLL
//    //Node * prev;
//    Node (int d)
//    {
//        data = d;
//    }
//
//};

//class LinkList
//{
//public:
//    Node * head;
//    Node * tail;
//    Node * node;
//public:
//    bool isEmpty()
//    {
//        return node == NULL;
//    }
//    LinkList(int data)
//    {
//        node = new Node(data);
//        node->next = NULL;
//        head = node;
//        tail = node;
//    }
//    void push(int data)
//    {
//        if (node == NULL){
//            node = new Node(data);
//            node->next = nullptr;
//        }
//        else{
//            if (node->next == NULL){
//                node->next = pushHelper(node->next, data);
//                tail= node->next;
//            }
//            else
//                node->next = pushHelper(node->next, data);
//        }
//    }
//    // O(log n) ~ O(n)
//    // real Queue enqueueu O(1)
//    // tail->next = new Node(data)
//    Node * pushHelper(Node* cur, int data)
//    {
//        if (cur == NULL)
//        {
//            Node * newNode = new Node(data);
//            newNode->next = NULL;
//            tail = newNode;
////            delete tail;
////            tail = newNode;
//            return newNode;
//        }
//        else
//            cur->next = pushHelper(cur->next, data);
//            return cur;
//    }
//    void pop()
//    {
//        if (node != NULL){
//            // size of queue is 1 or 0
//            if (node->next != NULL && node->next == tail)
//            {
//                node->next = NULL;
//                tail = node;
//            }
//            else
//                node->next = popHelper(node->next);
//        }
//    }
//    Node * popHelper(Node * node)
//    {
//        if (node == NULL)
//            return NULL;
//        if (node->next != NULL && node->next == tail)
//        {
//            node->next = NULL;
//            tail = node;
//        }
//        else
//            node->next = popHelper(node->next);
//        return node;
//    }
//    void show()
//    {
//        Node * copy = head;
//        while(copy != NULL)
//        {
//            cout << copy->data << endl;
//            copy = copy->next;
//
//        }
//    }
//    void printTail()
//    {
//        cout << tail->data << endl;
//    }
//    void printHead()
//    {
//        cout << head->data << endl;
//    }
//};
//int main()
//{
//    LinkList * Q = new LinkList(1);
//    Q->show();
//    cout << "---" << endl;
//    Q->push(2);
//    Q->push(3);
//    Q->show();
//    Q->pop();
//
//    cout << "---" << endl;
//    Q->show();
//    Q->printHead();
//    Q->printTail();
//    try {
//        if (Q->tail->data == 5)
//            cout << "Correct" << endl;
//        else
//            throw (3);
//    } catch (int ans) {
//        cout << "Answer is " << ans << endl;
//    };
//    queue<int> q;
//    q.push(1);
//    q.push(2);
//    q.push(3);
//    cout << "---" << endl;
//    cout << "Head: "<< q.front() << endl;
//    cout << "Tail: "<< q.back() << endl;
//
//}
//
//
//#include <iostream>
//using namespace std;
//
//class Complex
//{
//private:
//    int real, imag;
//public:
//    Complex(int r = 0, int i =0)
//    {  real = r;   imag = i; }
//    friend ostream & operator << (ostream &out, const Complex &c);
//    friend istream & operator >> (istream &in,  Complex &c);
//};
//
//ostream & operator << (ostream &out, const Complex &c)
//{
//    out << c.real;
//    out << "+i" << c.imag << endl;
//    return out;
//}
//
//istream & operator >> (istream &in,  Complex &c)
//{
//    cout << "Enter Real Part ";
//    in >> c.real;
//    cout << "Enter Imaginary Part ";
//    in >> c.imag;
//    return in;
//}
//
//////int main()
//////{
//////   Complex c1;
//////   cin >> c1;
//////   cout << "The complex object is ";
//////   cout << c1;
//////   return 0;
//////}
//void swap(int *xp, int *yp)
//{
//    int temp = *xp;
//    *xp = *yp;
//    *yp = temp;
//}
//
//// A function to implement bubble sort
//void bubbleSort(int arr[], int n)
//{
//    int i, j;
//    for (i = 0; i < n-1; i++)
//
//    // Last i elements are already in place
//    for (j = 0; j < n-i-1; j++)
//        if (arr[j] > arr[j+1])
//            swap(&arr[j], &arr[j+1]);
//}
//
///* Function to print an array */
//void printArray(int arr[], int size)
//{
//    int i;
//    for (i = 0; i < size; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//}
//class Node
//{
//    public:
//    Node(int d)
//    {
//        data = d;
//    }
//    int data;
//    Node* next; // Pointer to next node in DLL
//    Node* prev; // Pointer to previous node in DLL
//};
//class DL
//{
//public:
//    Node * node;
//    Node * head;
//    Node * tail;
//    DL(int data)
//    {
//        node = new Node(data);
//        head = node;
//        tail = node;
//    }
//    DL()
//    {
//
//    }
//    void push(int data)
//    {
//        insertAtFront(&node, data);
//    }
//    void inorderInsert(int data)
//    {
//        insertAtFront(&node, data);
//        sort();
//    }
//    void sort()
//    {
//        sort(node, node);
//    }
//    void print()
//    {
//        cout << "Print in head node " << endl;
//        // shallow copy
//        Node * temp = head;
//        while(temp != NULL){
//            cout << temp->data << endl;
//            temp = temp->next;
//        }
//    }
//
//public:
//    void sort(Node * cur, Node * data)
//    {
//        int size = 0;
//        while (cur != NULL)
//        {
//            size++;
//            cur = cur->next;
//        }
//        int * arr = new int[size];
//        size = 0;
//        // deep copy
//        while (data != NULL)
//        {
//            arr[size] = data->data;
//            size++;
//            data = data->next;
//        }
//
//        bubbleSort(arr, size);
//        Node* temp = new Node(arr[size - 1]);
//        node = temp;
//        head = node;
//
//        for (int i = size - 2; i >= 0; i--)
//            insertAtFront(&node, arr[i]);
//
//    }
//    void insertAtFront(Node** head_ref, int new_data)
//    {
//        /* 1. allocate node */
//        Node* new_node = new Node(new_data);
//
//        /* 2. put in the data */
//        new_node->data = new_data;
//
//        /* 3. Make next of new node as head
//        and previous as NULL */
//        new_node->next = (*head_ref);
//        new_node->prev = NULL;
//
//        /* 4. change prev of head node to new node */
//        if ((*head_ref) != NULL)
//            (*head_ref)->prev = new_node;
//
//        /* 5. move the head to point to the new node */
//        (*head_ref) = new_node;
//        head = (*head_ref);
//    }
//    void insertInOrder(Node** head_ref, int new_data)
//    {
//        /* 1. allocate node */
//        Node* new_node = new Node(new_data);
//
//        /* 2. put in the data */
//        new_node->data = new_data;
//
//        /* 3. Make next of new node as head
//        and previous as NULL */
//        new_node->next = (*head_ref);
//        new_node->prev = NULL;
//
//        /* 4. change prev of head node to new node */
//        if ((*head_ref) != NULL)
//            (*head_ref)->prev = new_node;
//
//        /* 5. move the head to point to the new node */
//        (*head_ref) = new_node;
//        head = (*head_ref);
//        sort();
//    }
//};
//DL* insertInOrder(DL*list, int data)
//{
//    list->push(data);
//    list->sort();
//    return list;
//}
//int main()
//{
//    queue<int> q;
//    q.push(1);
//    q.pop();
//    DL * doubleLinklist = new DL(5);
//    doubleLinklist->push(2);
//    doubleLinklist->push(8);
//    doubleLinklist->print();
//    doubleLinklist = insertInOrder(doubleLinklist, -1);
//    doubleLinklist->print();
//}
#include <iostream>
using namespace std;
class BST
{
public:
    int data;
    BST *l;
    BST*r;
    BST(int data)
    {
        this->data = data;
        l = NULL;
        r = NULL;
    }
    void insertNode(int data)
    {
        if (data > this->data)
            l = inserthelper(l, data);
        else
            r = inserthelper(r, data);
    }
    BST*inserthelper(BST * node, int data)
    {
        if (node == NULL)
            return  new BST(data);
        else
        {
            if (data > node->data)
            {
                node->l = inserthelper(node->l, data);
            }
            else
            {
                node->r = inserthelper(node->r, data);
            }
            return node;
        }
    }
    void printInorder()
    {
        //left -> parent node -> right
        //cout << this->data << " " ;
        if (r != NULL)
            printInorderhelper(r);
        
        cout << this->data << " " ;
        if (l != NULL)
            printInorderhelper(l);
        //cout << this->data << " " ;
        
        
        
        
        
    }
    void printInorderhelper(BST * node)
    {
        if (node != NULL)
        {
            
            //cout << node->data << " " ;
            if (node->r != NULL)
            {
                printInorderhelper(node->r);
            }
            cout << node->data << " " ;
            if (node->l != NULL)
            {
                printInorderhelper(node->l);
            }
            //cout << node->data << " " ;
            
            

            
        }
    }
    
    void printPreOrder()
    {
        // left -> parent node -> right
        cout << this->data << " " ;;
        if (l != NULL)
        printInorderhelper(l);
        if (r != NULL)
        printInorderhelper(r);
        
    }
    void printPreorderhelper(BST * node)
    {
        if (node != NULL)
        {
            
            cout << node->data << " " ;
            if (node->l != NULL)
            {
                printInorderhelper(node->l);
            }
            if (node->r != NULL)
                        {
                            printInorderhelper(node->r);
                        }
            
        }
    }
    
};

int main()
{
    // 10 15 25 30 42 65 70 75 100
    BST * tree = new BST(42);
    tree->insertNode(25);
    tree->insertNode(75);
    tree->insertNode(10);
    tree->insertNode(30);
    tree->insertNode(15);
    tree->insertNode(65);
    tree->insertNode(100);
    tree->insertNode(70);
    tree->printInorder();
    //ree->printPreOrder();
    //tree->printPreOrder();
}

