#include<stdio.h> 
 #include<stdlib.h> 
 struct node 
 { 
 	int data; 
 	struct  node*next; 
 }*head=NULL,*tail; 
  
 void creat(int n) 
 { 
 	      
 		 for(int i=0;i<n;i++) 
 { 
 	  struct Node *temp=(struct Node *)malloc(size of (struct Node)); 
 	  printf("enter data :  "); 
 	  scanf("%d" ,&temp->data); 
 	  if(head==NULL) 
 	  { 
 	  	head=temp; 
 	  	temp->next=NULL; 
 	  	tail=temp; 
 	  	 
 	  } 
 	 else 
 	 { 
 	 	 
 	 		tail->next=temp; 
 	 		temp->next=NULL; 
 	 		tail=temp; 
 	 	 } 
 	 
 } 
 } 
   
   
  void display(struct Node *p) 
  { 
  	 
  	while(p!=NULL) 
 	 { 
 	 	 
 	 	printf("%d  \t" ,head->data); 
 	 	p=p->next; 
 	 
 	 } 
 	 printf("\n"); 
  } 
   
 void print_even(struct Node *p) 
  
 { 
 	 
 	printf("print even numbers in link list \n"); 
 	while(p!=NULL) 
 	{ 
 		 
 	 if (p->data%2==0) 
 	 { 
 	 	printf("%d\t,p->data"); 
 	 } 
 	 p=p->next; 
 	} 
 	 
 	printf("\n"); 
 } 
 	 
 	int main() 
 	{ 
 		ceate(5); 
 		display(head); 
 		print_even(head); 
 	} 

