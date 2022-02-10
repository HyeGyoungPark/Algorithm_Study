#include <stdio.h>
#include <stdlib.h>

//원형 연결리스트로 구현
typedef struct _node {
    int data;
    struct _node * next;
} Node;

typedef struct circle_list {
    Node* tail;
    Node* cur;
    Node* before;
} Clist;

void listinit(Clist* plist) {
    plist->tail = NULL;
    plist->cur = NULL;
    plist->before = NULL;
}
void insert(Clist* plist, int data) {
    Node * newnode = (Node*)malloc(sizeof(Node));
    newnode->data = data;
    
    if(plist->tail == NULL) {
        plist->tail = newnode;
        newnode->next = newnode;
    } else {
        newnode->next = plist->tail->next;
        plist->tail->next = newnode;
        plist->tail = newnode;
    }
}
int first(Clist* plist, int* pdata) {
    if(plist->tail == NULL) return 0;
    plist->before = plist->tail;
    plist->cur = plist->tail->next;
    
    *pdata = plist->cur->data;
    return 1;
}
int Lnext(Clist* plist, int* pdata) {
    if(plist->tail == NULL) return 0;
    plist->before = plist->cur;
    plist->cur = plist->cur->next;
    
    *pdata = plist->cur->data;
    return 1;
}
int Lremove(Clist* plist) {
    Node* rnode = plist->cur;
    int rdata = rnode->data;
    
    if(rnode == plist-> tail) {
        if(plist->tail == plist->tail->next) plist->tail = NULL;
        else plist->tail = plist->before;
    }
    plist->before->next = plist->cur->next;
    plist->cur = plist->before;
    
    free(rnode);
    return rdata;
}
int main(void) {
    int N, K;
    scanf("%d %d", &N, &K);
    Clist list;
    listinit(&list);
    int data;
    for(int i=1; i<=N; i++) {
        insert(&list, i);
    }
    
    first(&list, &data);
    for(int i=0; i<K-1; i++) {
        Lnext(&list, &data);
    }
    printf("<%d", Lremove(&list));
    while(list.tail != NULL) {
        for(int i=0; i<K; i++) {
            Lnext(&list, &data);
        }
        printf(", %d", Lremove(&list));
    }
    printf(">\n");

    return 0;
}
