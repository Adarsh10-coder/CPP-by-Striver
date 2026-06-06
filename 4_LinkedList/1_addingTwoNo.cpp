#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(NULL) {}
};

Node *addTwoNumbers(Node *num1, Node *num2){
    Node* dummyHead = new Node(-1);
    Node* curr = dummyHead;
    Node* temp1 = num1;
    Node* temp2 = num2;
    int carry = 0;
    while(temp1 != NULL || temp2 != NULL) {
        int sum = carry;

        if(temp1) sum += temp1->data;
        if(temp2) sum += temp2->data;

        Node* newNode = new Node(sum % 10);
        carry = sum / 10;

        curr->next = newNode;
        curr = curr->next;

        if(temp1) temp1 = temp1->next;
        if(temp2) temp2 = temp2->next;
    }
    if(carry){
        Node* newNode = new Node(carry);
        curr->next = newNode;
    }
    return dummyHead->next;
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
    int arr1[] = {2, 4, 3};
    int arr2[] = {5, 6, 4};
    
    Node* num1 = createList(arr1, 3);
    Node* num2 = createList(arr2, 3);
    
    cout << "First Number: ";
    printList(num1);
    
    cout << "Second Number: ";
    printList(num2);
    
    Node* result = addTwoNumbers(num1, num2);
    
    cout << "Sum: ";
    printList(result);
    
    return 0;
}