#include <iostream>
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* removeNthFromEnd(ListNode* head, int n) {
    if(head->next == nullptr){
        delete head;
        return nullptr;
    }
    int counter = 0;
    ListNode* traverseLinkedList = head;
    while(traverseLinkedList->next != nullptr){
        traverseLinkedList = traverseLinkedList->next;
        counter++;
    }
    traverseLinkedList = head;
    if(counter+1 == n){
        head = head->next;
        delete traverseLinkedList;
        return head;
    }
    int nodeToRemove = counter - n;
    for(int i=0; i<nodeToRemove; i++){
        traverseLinkedList = traverseLinkedList->next;
    }
    ListNode* toDelete = traverseLinkedList->next;
    traverseLinkedList->next = traverseLinkedList->next->next;
    delete toDelete;
    return head;
}