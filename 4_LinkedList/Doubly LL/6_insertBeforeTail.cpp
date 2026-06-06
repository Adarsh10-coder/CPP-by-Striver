#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* back;
        Node* next;

        Node(int val) {
            data = val;
            back = NULL;
            next = NULL;
        }
};

Node* converArr2DLL(vector<int>& arr){
    if (arr.size() == 0) return NULL;
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* newNode = new Node(arr[i]);
        temp->next = newNode;
        newNode->back = temp;
        temp = newNode;
    }
    return head;
}

Node* insertHead(Node* head, int val) {
    Node* newHead = new Node(val, head, nullptr);
    head -> back = newHead;
    return newHead;

}

Node* insertBeforeTail(Node* head, int val) {
    if(head -> next == NULL){
        return insertHead(head, val);
    }
    Node* tail = head;
    while(tail -> next != NULL){
        tail = tail -> next;
    }
    Node* prev = tail -> back;
    Node* newNode = new Node(val, tail, prev);
    prev -> next = newNode;
    tail -> back = newNode;
    return head;
}

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {12,5,8,7};
    Node* head = converArr2DLL(arr);

    insertBeforeTail(head, 10);
    print(head);
    return 0;
}