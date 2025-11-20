/* class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class myStack {

  public:
    Node* top;
    int count;
    myStack() {
        // Initialize your data members
        top=nullptr;
        count=0;
    }

    bool isEmpty() {
        // check if the stack is empty
        return top==nullptr;
    }

    void push(int x) {
        // Adds an element x at the top of the stack
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;
        count++;
    }

    void pop() {
        // Removes the top element of the stack
        if(isEmpty()) return;
        Node* temp = top;
        top = top->next;
        delete temp;
        count--;
    }

    int peek() {
        // Returns the top element of the stack
        // If stack is empty, return -1
        if(isEmpty())return -1;
        return top->data;
    }

    int size() {
        // Returns the current size of the stack.
        if(isEmpty()) return 0;
        return count;
    }
};