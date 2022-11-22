#include <stdlib.h>
#include <iostream>
#include <stdio.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

void insert(int x){
    struct Node* temp = (Node*)malloc(sizeof(struct Node));
    temp -> data = x;
    temp -> next = head;
    head = temp;
}
void print(Node* head){
    std::cout<<"list: \n";
    while(head != NULL){
        std::cout<<head->data<<std::endl;
        head = head -> next;
    }
}

int main() {
    head = NULL;
    std::cout<<"How many numbers?\n";
    int n, x;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        std::cout<<"enter number\n";
        scanf("%d", &x);
        insert(x);
        print(head);
    }
}