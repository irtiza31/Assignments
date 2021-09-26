#include <stdio.h> 
  
  
 struct node 
 { 
     int data; 
     struct node*next; 
 }; 
 struct node n1,n2,n3,n4,n5; 
  
  
  int main() 
   
   
            { 
                n1.data=1; 
                n2.data=2; 
                n3.data=3; 
                n4.data=4; 
                n5.data=5; 
                 
                 
                n1.next=&n2; 
                n2.next=&n3; 
                n3.next=&n4; 
                n4.next=&n5; 
                 
                printf("%d",n1.data); 
                 
                 printf("%d",n1.next->data); 
                 
                  
                    
                     printf("%d",n2.next->data); 
                      
                     printf("%d",n1.next->next->data); 
                       
                       
                      printf("%d",n3.next->data); 
                      
                     printf("%d",n2.next->next->next->data); 
                       
                       
                       printf("%d",n4.next->data); 
                      
                     printf("%d",n3.next->next->next->next->next-> data); 
                 } 

