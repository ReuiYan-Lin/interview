#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

typedef struct doubly_node {
	int val;
	doubly_node* next;
	doubly_node* before;
}Doubly_Node;

Doubly_Node* insert(Doubly_Node* root, int val);
void delete_node(Doubly_Node* root, int val);
void print(Doubly_Node* root);

Doubly_Node* newNode(int val) {
	Doubly_Node* node = new Doubly_Node();
	node->val = val;
	node->before = 0;
	node->before = 0;
	return node;
}

Doubly_Node* insert(Doubly_Node* root,int val) {
	Doubly_Node* newnode = newNode(val);
	if (!root)
		root = newnode;
	else {
		Doubly_Node* cur = root;
		while (cur->next) {
			cur = cur->next;
		}
		cur->next = newnode;
		cur->next->before = cur;
	}
	return root;
}
void delete_node(Doubly_Node* root, int val) {
	Doubly_Node* cur = root;
	if (root->val == val) {
		root = cur->next;
		delete cur;
		cur = 0;
	}
	else {
		while (cur) {
			if (cur->val == val) {
				break;
			}
			cur = cur->next;
		}
		if (!cur) {
			printf("Not found\n");
		}
		else {
			cur->before->next = cur->next;
			cur->next->before = cur->before;
			delete cur;
			cur = 0;
		}
	}
}
void print(Doubly_Node* root) {
	Doubly_Node* cur=root;
	Doubly_Node* pre = 0;
	while (cur) {
		printf("%d ", cur->val);
		pre = cur;
		cur = cur->next;
	}
	printf("\n");
	cur = pre;
	while (cur) {
		printf("%d ", cur->val);
		cur = cur->before;
	}
	printf("\n");
}