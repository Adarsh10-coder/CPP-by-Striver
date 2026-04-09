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

void deleteNode(Node* head) {
    Node* temp = head;
    Node* prev = temp -> back;
    Node* front = temp -> next;
    if(front == NULL){
        prev -> next = nullptr;
        temp -> back = nullptr;
        free(temp);
        return;
    }
    prev -> next = front;
    front -> back = prev;
    temp->next = temp->back = nullptr;
    free(temp);

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

    deleteNode(head);
    print(head);
    return 0;
}