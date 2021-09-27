#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
void create(node** head,int value){
	node* newnode=new node();
	newnode->data=value;
	newnode->next=(*head);
	(*head)=newnode;
}
int counter(struct node* start,int item){
	node* curr=start;
	int count=0;
	while(curr!=NULL){
		if(curr->data==item){
			count++;
		}
		curr=curr->next;
	}
	return count;
} 
int main(){
	node* start=NULL;
	create(&start,16);
	create(&start,16);
	create(&start,42);
	create(&start,42);
	cout<<"Frequency of 16 is:"<<counter(start,16);
	cout<<endl;
	cout<<"Frequency of 42 is:"<<counter(start,42);
	counter(start,42);
	return 0;
	
}
