//insertion and deletion in linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int val;
    struct node*link;
};
typedef struct node ndptr;
ndptr* root =NULL;
int create(){
    ndptr *newnode;
    int a;
    newnode=(ndptr*)malloc(sizeof(ndptr));
    newnode->link=NULL;
    printf("\nenter a value: ");
    scanf("%d",&a);
    newnode->val=a;
    root=newnode;
    return 1;
}
int insert_first(){
    ndptr *newnode;
    int a;
    newnode=(ndptr*)malloc(sizeof(ndptr));
    newnode->link=root;
    printf("\nenter a value: ");
    scanf("%d",&a);
    newnode->val=a;
    root=newnode;
    return 1;
}
int insert_last(){
    ndptr *newnode, *ptr=root;
    int a;
    newnode=(ndptr*)malloc(sizeof(ndptr));
    printf("\nenter a value: ");
    scanf("%d",&a);
    newnode->val=a;
    while( ptr->link!=NULL){
        ptr=ptr->link;
    }
    newnode->link=NULL;
    ptr->link=newnode;
    return 1;
}
void delete_first(){
    ndptr *newnode,*ptr=root;
    root=root->link;
    ptr->link=NULL;
}
void delete_last(){
    ndptr *preptr, *ptr=root;
    while(ptr->link!=NULL){
        preptr=ptr;
        ptr=ptr->link;
    }
    preptr->link=NULL;
}
int display(){
    ndptr *ptr=root;
    while(ptr!=NULL){
        printf("\n%d",ptr->val);
        ptr=ptr->link;
    }
    return 1;
}
int main(){
    int ch;
    while(1){
        printf("\nenter your choice\n");
        printf("\npress 1 to create a node\n");
        printf("\npress 2 to insert a node at first position\n");
        printf("\npress 3 to insert a node at last position\n");
        printf("\npress 4 to delete a node at first position\n");
        printf("\npress 5 to delete a node at last position\n");
        printf("\npress 8 to display\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:create();
                   break;
            case 2:insert_first();
                  break;
            case 3:insert_last();
                  break;
            case 4:delete_first();
                  break;
            case 5:delete_last();
                  break;
            case 8:display();
                  break;
        }
    }
    return 1;
}
