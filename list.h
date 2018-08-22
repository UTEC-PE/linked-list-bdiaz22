#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "node.h"
#include "iterator.h"

using namespace std;

template <typename T>
class List {
    private:
        Node<T>* head;
        Node<T>* tail;
        int nodes;

        void print_reverse(Node<T>* head);

    public:
        List(){
            head = NULL;
            tail = NULL;
            nodes = 0; 
        }

        T front()
        {
            return head -> data;
        }
        T back()
        {
            return tail -> data;
        }
        void push_front(T value)
        {
            if(!head)
            {
                head = new Node<T>;
                head->data = value;
                head->next = NULL;
                tail=head;
            }
            else
            {
                Node<T> *temp = new Node<T>;
                temp->data = value;
                temp->next = head;
                head = temp;
            }
            nodes++;
        }
        void push_back(T value)
        {
            if(!head)
            {
                head = new Node<T>;
                tail->data = value;
                tail->next = NUll;
                head = tail;
            }
            else
            {
                Node<T> *temp =  new Node<T>;
                temp->data = value;
                temp->next = NUll;
                tail->next= temp;
                tail = temp;
            }
            nodes++;
        }
        void pop_front()
        {

        }
        void pop_back()
        {

        }
        T get(int position)
        {

        }
        void concat(List<T> &other);
        bool empty()
        {

        }
        int size()
        {

        }
        void print()
        {
            Node<T> *temp = head;
            if(temp != NUll)
            {
                
            }
        }
        void print_reverse()
        {

        }
        void clear()
        {

        }
        Iterator<T> begin();
        Iterator<T> end();

        ~List();
};
#endif
