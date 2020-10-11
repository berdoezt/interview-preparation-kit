#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;
};

Node* head = NULL;
Node* tail = NULL;

Node* create(int data){
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;

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

    node->prev = tail;
    tail->next = node;

    tail = node;
}

void insert(int data){
    Node* node = create(data);
    Node* temp = head;

    while(temp != NULL){
        if(data <= temp->data){
            if(temp == head){
                head = node;

            }else{
                temp->prev->next = node;
                node->prev = temp->prev;
            }

            temp->prev = node;
            node->next = temp;
            return;
        }

        temp = temp->next;
    }

    tail->next = node;
    node->prev = tail;
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
    int t,n,value;

    cin >> t;
    while(t--){
        head = NULL;
        tail = NULL;

        cin >> n;
        while(n--){
            cin >> value;
            append(value);
        }

        cin >> value;
        insert(value);

        cetak();

    }
    return 0;
}