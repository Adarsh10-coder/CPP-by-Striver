#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

Node* mergeTwoLists(Node* list1, Node* list2) {
    Node* dummyNode = new Node(-1);
    Node* temp = dummyNode;
    while(list1 != NULL && list2 != NULL) {
        if(list1->data < list2->data) {
            temp->next = list1;
            temp = list1;
            list1 = list1->next;
        }
        else {
            temp->next = list2;
            temp = list2;
            list2 = list2->next;
        }
    }
    if(list1) temp->next = list1;
    else if(list2) temp->next = list2;

    return dummyNode->next;
}

Node* buildList(const vector<int>& values) {
    Node* head = nullptr;
    Node* tail = nullptr;
    for (int value : values) {
        Node* node = new Node(value);
        if (!head) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }
    return head;
}

void printList(Node* head) {
    Node* current = head;
    while (current) {
        cout << current->data;
        if (current->next) cout << " -> ";
        current = current->next;
    }
    cout << endl;
}

void freeList(Node* head) {
    while (head) {
        Node* next = head->next;
        delete head;
        head = next;
    }
}

int main() {
    vector<int> values1 = {1, 3, 5, 7};
    vector<int> values2 = {2, 4, 6, 8};

    Node* list1 = buildList(values1);
    Node* list2 = buildList(values2);

    cout << "List 1: ";
    printList(list1);
    cout << "List 2: ";
    printList(list2);

    Node* merged = mergeTwoLists(list1, list2);
    cout << "Merged list: ";
    printList(merged);

    freeList(merged);
    return 0;
}
