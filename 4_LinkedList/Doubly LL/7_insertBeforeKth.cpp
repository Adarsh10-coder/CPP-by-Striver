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

Node* insertBeforeKthElement(Node* head, int k, int val) {
    if(k == 1) {
        return insertHead(head, val);
    }
    Node* temp = head;
    int cnt = 0;
    while (temp != NULL) {
        cnt++;
        if (cnt == k) break;
        temp = temp->next;
    }
    if (temp == NULL) return head; // k out of range
    Node* prev = temp->back;
    // Node* newNode = new Node(val);
    // newNode->next = temp;
    // newNode->back = prev;
    Node* newNode = new Node(val, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
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

    insertBeforeKthElement(head, 4, 10);
    print(head);
    return 0;
}