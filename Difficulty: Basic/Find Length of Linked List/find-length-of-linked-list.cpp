/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int getCount(Node* head) {
        // Code here
        long long count=0;
        if(head==nullptr) {
            count=1;
        }
        else{
            Node*move = head;
            while(move->next){
                count++;
                move = move->next;
            }
            count = count+1;
        }
        return count;
    }
};