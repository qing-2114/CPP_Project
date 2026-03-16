#include <bits/stdc++.h>
using namespace std;

const int N = 105;
struct node{
	int id;
	int next_id;
}nodes[N];

int main(){
	
	int n;
	cin >> n;
	
	nodes[1].id = 1;
	nodes[1].next_id = 2;
	
	for(int i = 2; i <= n; ++i){
		nodes[i].id = i;
		nodes[i].next_id = i+1;
	}
	
	int pre = 1;
	int now = 1;
	
	while((n--)!=0){
		cout << nodes[now].id << endl;
		now++;
	}
	return 0;
} 
