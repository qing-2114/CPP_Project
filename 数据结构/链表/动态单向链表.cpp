#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* next;
};

node *head,*pre,*now,*p;

int main(){
	int n;
	cin >> n;
	
	 
	head = new node;
	head->data = 1;
	head->next = NULL;
	now = head; 
	
	for(int i = 2; i <= n; i++){
		p = new node;
		p->data = i;
		p->next = NULL;
		
		now->next = p;
		now = p;
	} 
	
	pre = now;
	now = head;
	
	
	for(int i = 1; i <= n; ++i){
		cout << now->data << endl;
		now = now->next;	
	}
	
	return 0;
} 
