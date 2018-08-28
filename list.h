#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "node.h"
#include  <stdexcept>
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
            if(!head){
                throw "Lista Vacia";
            }
            return head -> data;
        }
        T back()
        {
            if(!tail){
                throw "Lista Vacia"
            }
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
            if(!head)
                throw "Lista vacia";

            Node<T> *temp = head;
            head = head->next;
            delete temp; 
            nodes--;
        }
        void pop_back()
        {
            if(!head)
                throw "Lista Vacia";
            Node <T> *copiatail = tail;
            if(head->next=NULL)
            {
                head = NULL;
                tail = NULL;
                delete copiatail;
                nodes--;
            }
            else{
                Node <T> *temp = head;
                for (int i = 0; i < nodes; i++)
                {
                    if (temp->next == tail)
                    {
                        tail = temp;
                        continue;
                    }
                    temp = temp->next;
                }
                delete copiatail;
                tail->next = NULL;
                nodes--;    
                }
            
        }
        T get(int position)
        {
            if (position >= nodes || position < 0)
            {
                throw "Pos"
            }
            Node <T> *temp = head;
            for (int i  = 0; i < nodes; i++)
            {
                if(i == position)
                    return temp -> data;
                temp = temp->next;
            }
        }
        void concat(List<T> &other)
        {
            if(!head)
                throw"Lista Vacia";
            tail->next = other->head;
            nodes += other->nodes;

        }
        bool empty()
        {
            if(!head)
                throw"Lista Vacia";
            return tail == NULL;
        }
        int size()
        {

            if(!head)
                throw"Lista Vacia";
            return nodes;
        }
        void print()
        {

            if(!head)
                throw"Lista Vacia";
            Node<T> *temp = head;
            while(temp)
            {
                cout << temp->data <<"\n";
                temp = temp->next;
            }
        }
        void print_reverse()
        {
            if(!head)
            {
                throw "lista vacia";
            }
            head ->printReverse();
        }
        void clear()
        {}
            if(!head)
                throw"Lista Vacia";
            head -> killSelf();
        }
        Iterator<T> begin();
        Iterator<T> end();

        ~List();
};
#endif
