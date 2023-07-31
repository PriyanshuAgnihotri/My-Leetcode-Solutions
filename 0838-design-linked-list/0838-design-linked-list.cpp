class Node {
public:

    Node* next;
    Node* prev;
    int val;

    Node(int _val){
        val = _val;
    }

};
class MyLinkedList {
    int size;
    Node* head;
    Node* tail;

public:
    MyLinkedList() {
        head = new Node(0);
        tail = new Node(0);

        head->next = tail;
        tail->prev = head;

        size = 0;
    }
    
    int get(int index) {
        if(index >= size){
            return -1;
        }
        Node* temp = head->next;
        for(int i=0; i<index; ++i) {
            temp= temp->next;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        size++;

        Node* node = new Node(val);
        
        Node* temp = head->next;

        temp->prev = node;
        node->next = temp;
        node->prev = head;
        head->next = node;
    }

    
    void addAtTail(int val) {
        size++;

        Node* node = new Node(val);
        Node* temp = tail->prev;

        temp->next = node;
        node->prev = temp;
        tail->prev = node;
        node->next = tail;
    }
    
    void addAtIndex(int index, int val) {
        if(index > size){
            return;
        }   

        if(size == index){
            addAtTail(val);
            return;
        }

        if(index == 0){
            addAtHead(val);
            return;
        }

        Node* temp = head;

        while(index--){
            temp = temp->next;
        }

        Node* node = new Node(val);

        Node* back = temp->next;

        back->prev = node;
        node->next = back;
        node->prev = temp;
        temp->next = node;

        size++;


    }
    
    void deleteAtIndex(int index) {
        if (index >= size) {
            return;
        }
        size--;

        Node* temp = head;

        while (index--) {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        temp->next->prev = temp;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */