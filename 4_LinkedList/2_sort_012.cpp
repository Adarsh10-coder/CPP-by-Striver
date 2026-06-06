#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(NULL) {}
};

Node* sortList(Node *head){
    if(!head || !head->next){
        return head;
    }
    Node* zeroHead = new Node(-1);
    Node* oneHead  = new Node(-1);
    Node* twoHead  = new Node(-1);

    Node* zero = zeroHead;
    Node* one  = oneHead;
    Node* two  = twoHead;
    Node *temp = head;
    while(temp) {
        if(temp->data == 0) {
            zero->next = temp;
            zero = zero->next;
        }
        else if(temp->data == 1) {
            one->next = temp;
            one = one->next;
        }
        else {
            two->next = temp;
            two = two->next;
        }
        temp = temp->next;
    }
    zero->next = (oneHead->next) ? oneHead->next : twoHead->next;
    one->next = twoHead->next;
    two->next = NULL;

    Node* newHead = zeroHead->next;

    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return newHead;
}

void printList(Node *head) {
    while(head != NULL) {
        cout << head->data;
        if(head->next != NULL) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

Node* createList(int arr[], int n) {
    if(n == 0) return NULL;
    Node* head = new Node(arr[0]);
    Node* curr = head;
    for(int i = 1; i < n; i++) {
        curr->next = new Node(arr[i]);
        curr = curr->next;
    }
    return head;
}

int main() {
    int arr[] = {1, 0, 2, 1, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node* head = createList(arr, n);

    cout << "Original List: ";
    printList(head);

    Node* sortedHead = sortList(head);

    cout << "Sorted List: ";
    printList(sortedHead);

    return 0;
}