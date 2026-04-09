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

Node* deleteHead(Node* head) {
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* prev = head;
    head = head -> next;
    head -> back = nullptr;
    prev -> next = nullptr;
    delete prev;
    return head;
}

Node* deleteTail(Node* head) {
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* tail = head;
    while(tail->next != NULL){
        tail = tail -> next;
    }
    Node* newTail = tail -> back;
    newTail -> next = nullptr;
    tail -> back = nullptr;
    delete tail;
    return head;
}

Node* removeKthElement(Node* head, int k) {
    if(head == NULL) return NULL;
    int cnt = 0;
    Node* kNode = head;
    while(kNode != NULL){
        cnt++;
        if(cnt == k) break;
        kNode = kNode -> next;
    }
    Node* prev = kNode -> back;
    Node* front = kNode -> next;
    if(prev == NULL && front == NULL){
        return NULL;
    }
    else if(prev == NULL){
        return deleteHead(head);
    }
    else if(front == NULL){
        return deleteTail(head);
    }
    prev -> next = front;
    front -> back = prev;
    kNode -> next = nullptr;
    kNode -> back = nullptr;
    delete kNode;
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

    head = removeKthElement(head, 4);
    print(head);
    return 0;
}