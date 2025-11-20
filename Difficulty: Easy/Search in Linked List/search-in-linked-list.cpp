/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    bool searchKey(Node* head, int key) {
        // Code here
        bool found = false;
        if(head->data == key){
            return true;
        }else{
           Node* move = head;
           while(move){
               if(move->data==key){
                   found=true;
               }
               move = move->next;
           }
        }
        return found;
    }
};
