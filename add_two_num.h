#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
void print(Node* root) {
	printf("\n");
	Node* cur = root;
	while (cur) {
		printf("%d ", cur->get_val());
		cur = cur->get_next();
	}
	printf("\n");
}
void add_two_num(Node* list_a,Node* list_b) {
	Node* root = NULL;
	Node* cur =NULL;
	Node* cur_a = list_a;
	Node* cur_b = list_b;
	int flag = 0;
	while (cur_a || cur_b) {
		int tmp_a = 0, tmp_b = 0;
		if (cur_a) {
			tmp_a = cur_a->get_val();
			cur_a = cur_a->get_next();
			printf("%d ", tmp_a);
		}
		if (cur_b) {
			tmp_b = cur_b->get_val();
			cur_b = cur_b->get_next();
			printf("%d ", tmp_b);
		}
		Node* newnode = new Node((tmp_a + tmp_b+flag)%10);
		flag = (tmp_a + tmp_b) / 10;
		if (!root) {
			root = newnode;
			cur = root;
		}
		else {
			cur->set_next(newnode);
			cur = cur->get_next();
		}
	}

	print(root);
}