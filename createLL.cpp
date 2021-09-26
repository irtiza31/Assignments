#include <stdio.h> 
  
  
 struct node 
 { 
     int data; 
     struct node*next; 
 }; 
 struct node n1,n2,n3; 
  
  
  int main() 
   
   
            { 
                n1.data=1; 
                n2.data=2; 
                n3.data=3; 
                 
                 
                n1.next=&n2; 
                n2.next=&n3; 
                 
                printf("%d",n1.data); 
                 
                 printf("%d",n1.next->data); 
                 
                   printf("%d",n1.next->data); 
                    
                     printf("%d",n2.data); 
                      
                     printf("%d",n1.next->next->data); 
                    
                 
                 
            } 

