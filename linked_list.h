#pragma once
#include <iostream>
class Node {
private:
	int val;
	Node* next;
public:
	Node(int val) :val(val), next(0) {};
	int get_val() {
		return val;
	}
	Node* get_next() {
		return next;
	}
	void set_next(Node* node) {
		next = node;
	}
	friend class Linked_List;
};

class Linked_List {
private:
	Node* root;
public:
	Linked_List() {};
	Linked_List(int val) {
		Node* newnode = new Node(val);
		root = newnode;
	};
	void insert(int val) {
		Node* newnode = new Node(val);
		if (!root) {
			root = newnode;
		}
		else {
			Node* cur;
			cur = root;
			while (cur->next) {
				cur = cur->next;
			}
			cur->next = newnode;
		}
	};
	void delete_node(int val) {
		Node* cur = root;
		Node* pre = 0;
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
				pre = cur;
				cur = cur->next;
			}
			if (!cur) {
				printf("Not found \n");
			}
			else {
				pre->next = cur->next;
				delete cur;
				cur = 0;
			}
		}
	};
	void print() {
		Node* cur;
		cur = root;
		while (cur) {
			printf("%d ", cur->val);
			cur = cur->next;
		}
		printf("\n");
	}
	void reverse() {
		Node* cur = root;
		Node* pre = 0;
		Node* post = cur->next;
		if (!post)
			return;
		while (post) {
			cur->next = pre;
			pre = cur;
			cur = post;
			post = post->next;
		}
		cur->next = pre;
		root = cur;
	}
	Node* get_root() {
		return root;
	}
};