#ifndef NODE_H
#define NODE_H

template <typename T>
struct Node {
    T data;
    struct Node* next;

    void killSelf()
    {
    	next ->killSelf(); // Esto está mal, deberías verificar que next no sea NULL
    	delete this;
    }

    void printReverse(){
    	if(next!= NULL)
    		next->printReverse();
    	std::cout<<data;
    }
};

#endif