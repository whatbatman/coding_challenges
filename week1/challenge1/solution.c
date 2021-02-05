#include <stdio.h>
#include <stdlib.h>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/**
   get the length of the linked list
    while head->next != NULL
        count ++
    Once we know that, calculate the middle
    iterate to that length
    return the node
*/

struct ListNode {
    int val;
    struct ListNode *next;
};
// get half of a number
int half (const int i)
{
    if (!i) return 0;
    int s = 1, v = i;
    if (i < 0) s = -1, v = -i;

    return (v >> 1) * s;
}

struct ListNode* middleNode(struct ListNode* head){
    if(head == NULL || head->next == NULL) {
        return head;
    }
    int count = 0;
    struct ListNode *tmp = head->next;
    while(tmp->next != NULL) {
        count++;
        tmp = tmp->next;
    }
    
    // now calc middle
    int middle = half(count);
    count = 0;
    tmp = head->next;
    while(tmp->next != NULL) {
        if(count == middle) {
            return tmp;
        }
        if(count > middle) {
            break;
        }
        tmp = tmp->next;
        count++;
    }
    return tmp;
}

int main() {
   // [1,2,3,4,5]
   struct ListNode* one = NULL;
   struct ListNode* two = NULL;
   struct ListNode* three = NULL;
   one = (struct ListNode*)malloc(sizeof(struct ListNode));
   two = (struct ListNode*)malloc(sizeof(struct ListNode));
   three = (struct ListNode*)malloc(sizeof(struct ListNode));
    one->val = 1;
    one->next = two;
    two->val = 2;
    two->next = three;
    three->val = 3;
    three->next = NULL;
    struct ListNode* ret = NULL;
    if((ret = middleNode(one)) == two) {
        printf("yay\n");
    }
    else {
        printf("bad solution :( \n");
    }
    return 0;
}
