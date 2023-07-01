#include <stdio.h>
#include <stdlib.h>

struct Node{
    int val;
    struct Node* next;
};

struct Node* CreateNode(int val){
    struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
    NewNode->val=val;
    NewNode->next=NULL;
    return NewNode;
}

struct Node* Add(struct Node* L1,struct Node* L2){
    struct Node* res=NULL;
    
}

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
       List Ls[2];
       for(int i=0;i<2;i++){
        while (1)
        {
           int x;
           scanf("%d",&x);
           if(x<0){
            break;
           }

        }
        
       }
    }
}