#include <stdio.h>

struct node{
  int data;
  struct node *link;
  struct node *plink;
};

struct node *first = NULL, *last = NULL;

void swap(struct node* a1,struct node* a2){
  int tp;
  tp=a1->data;
  a1->data=a2->data;
  a2->data=tp;
}

void qsort(struct node *low, struct node *high){
  if(low==NULL || high==NULL || low == high || low->plink == high)
    return ;

struct node *pivot=low, *tmp=low->link;
while(tmp != high->link){
        if(tmp->data < low->data)
        {
                swap(pivot->link, tmp);
		pivot = pivot->link;
        }
        tmp = tmp->link;
}
   swap(low, pivot);
   qsort(low, pivot->plink);
   qsort(pivot->link, high);
}
