#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


Node* reverseKGroup(Node* head, int k) {
    Node* temp = head;
    int count = 0;

   
    while (temp && count < k) {
        temp = temp->next;
        count++;
    }

    if (count < k) return head; 

    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    count = 0;

   
    while (curr && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    
    head->next = reverseKGroup(curr, k);

    return prev;
}


void insert(Node*& head, int val) {
    Node* newNode = new Node(val);

    if (!head) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
}


void print(Node* head) {
    while (head) {
        cout << head->data;
        if (head->next) cout << "->";
        head = head->next;
    }
    cout << endl;
}

int main() {

    Node* head = NULL;

    
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int k = 2;

    for(int i=0;i<n;i++)
        insert(head, arr[i]);

    cout << "Original: ";
    print(head);

    head = reverseKGroup(head, k);

    cout << "Output:   ";
    print(head);

    return 0;
}
