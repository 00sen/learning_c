#include <stdlib.h>
#include <iostream>
#include <stdio.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL; // start empty list
void _insert(int data, int n){
    Node* temp1 = new Node();
    temp1 -> data = data;
    temp1 -> next = NULL;
    if(n == 1){
        temp1 -> next = head;
        head = temp1;
        return;
    }
    Node* temp2 = head;
    for(int i = 0; i < n -2; i++){
        temp2 = temp2 -> next;
    }
    temp1 -> next = temp2 -> next;
    temp2 -> next = temp1;
}
void _print(){
    Node* temp = head;
    while(temp != NULL){
        printf("%d ",temp-> data);
        temp = temp -> next;
    }
    printf("\n");
}

int main(){
    _insert(2,1); // 2
    _insert(3,2); // 2, 3
    _insert(4,1); // 4, 2, 3
    _insert(5,2); // 4, 5, 2, 3
    _print();
}