#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head = NULL;
Node* tail = NULL;

Node* create(int data){
    Node* node = NULL;

    node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;

    if(head == NULL){
        head = node;
    }

    if(tail == NULL){
        tail = node;
    }

    return node;
}

void append(int data){
    Node* node = create(data);

    tail->next = node;
    tail = node;
    // node->next = head;
    // head = node;
}

void insertAt(int data, int index){
    Node* node = create(data);

    if(index){
        Node* temp = head;
        index--;
        while(index--){
            temp = temp->next;
        }

        node->next = temp->next;
        temp->next = node;
    }else{
        node->next = head;
        head = node;
    }
}

void cetak(){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data;
        if(temp->next != NULL){
            cout << " ";
        }
        temp = temp->next;
    }

    cout << endl;
}

int main(){
    int n;
    cin >> n;

    int value;

    while(n--){
        cin >> value;
        append(value);
    }

    int pos;
    cin >> value;
    cin >> pos;

    insertAt(value, pos);

    cetak();

    return 0;
}