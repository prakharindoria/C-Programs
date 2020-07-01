#include <conio.h>
#include <stdio.h>
struct node{
int data;
struct node *next;
};

void append(struct node**,int);
int display(struct node*);
int countnodes(struct node*);

void main(){
struct node * start=NULL;
int count;
append(&start,10);
append(&start,20);
append(&start,30);
append(&start,40);
append(&start,50);
append(&start,60);
display(start);
count=countnodes(start);
printf("Count: %d",count);

}


void append(struct node **ps,int x){
struct node *p,*temp;
p=(struct node *)malloc(sizeof(struct node));
p->data=x;
p->next=NULL;
if(*ps==NULL)
{
    *ps=p;
    return;
}
temp=*ps;
while(temp->next!=NULL){


    temp=temp->next;

}
temp->next=p;

}


int display(struct node *p){

if(p==NULL){

    printf("List empty");
    return;
}
while(p!=NULL){
    printf("%d\n",p->data);
    p=p->next;


}


}



int countnodes(struct node *p){
int res=0;
while(p!=NULL){
    res=res+1;
    p=p->next;
}
return res;

}
