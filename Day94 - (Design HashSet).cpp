class Node {
public:
    int val;
    Node* next;
    Node(int data) {
        val = data;
        next = nullptr;
    }
};

class MyHashSet {
public:
    Node *head = nullptr;
    MyHashSet() {
        
    }
    
    void add(int key) {
        Node *curr = head;
        while(curr) {
            if(curr -> val == key) return;
            curr = curr -> next;
        }
        Node *node = new Node(key);
        node -> next = head;
        head = node;
    }
    
    void remove(int key) {
        Node *curr = head, *prev = nullptr;
        while(curr) {
            if(curr -> val == key) break;
            prev = curr;
            curr = curr -> next;
        }
        if(!curr) return;
        if(!prev) head = head->next;
        else {
            prev -> next = curr -> next;
        }
    }
    
    bool contains(int key) {
        Node *curr = head;
        while(curr) {
            if(curr -> val == key) return true;
            curr = curr -> next;
        }
        return false;
    }
};