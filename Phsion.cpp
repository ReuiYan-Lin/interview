// Phsion.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "array_500.h"
#include "array_list.h"
#include "find_highest_bit.h"
#include "Fibonacci.h"
#include "all_probability.h"
#include "triangle.h"
#include "diamond.h"
#include "sort.h"
#include "array_pair.h"
#include "endian_convert.h"
#include "strcmp.h"
#include "add_big_num.h"
#include "stdio.h"
#include "stdlib.h"
#include "linked_list.h"
#include "bit.h"
#include "unsigned.h"
#include "add_two_num.h"
#include "doubly_linked_list.h"
#include "random500.h"
#include "quick_srot.h"
#include "set_bit.h"
#include "merge_sort.h"

#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable: 4996)
#define add2(x,y) x+=2;y+=2;

int main()
{
	int arr[10] = { 0,9,6,4,3,2,8,7,1,5 };
	sort(arr, sizeof(arr) / sizeof(arr[0]));
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ",arr[i]);
	}

	/*
	Doubly_Node* root = 0;
	root = insert(root, 3);
	root = insert(root, 1);
	root = insert(root, 6);
	root = insert(root, 7);
	delete_node(root, 0);
	root = insert(root, 10);
	print(root);
	/*
	unsigned int arr[4] = { 0,1,2,3 };
	set_bit(arr, sizeof(arr) / sizeof(arr[0]));


	for (int i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}
	*/
	/*
	bool flag = false;
	int j = 5, k = 7;
	if (flag) add2(j, k);
	printf("%d %d", j, k);
	*/
	/*
	int arr[10] = { 0,9,6,4,3,2,8,7,1,5 };
	quick_sort(arr, sizeof(arr)/sizeof(int));
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	*/
	/*
	random_vector();
	/*
	doubly_linked();
	/*
	unsigned int a=0;
	int n = 6;
	a |= 1UL << 6;
	printf("%d ", a);
	printf("%d ", 1UL);
	*/
	/*
	Linked_List list_a;
	Linked_List list_b;
	list_a.insert(2);
	list_a.insert(4);
	list_a.insert(3);
	list_b.insert(5);
	list_b.insert(6);
	list_b.insert(4);
	list_a.print();
	list_b.print();
	add_two_num(list_a.get_root(), list_b.get_root());
	*/

	/*
	Unsigned();
	/*
	nine_bit();
	*/
	/*
	char a[5] = { 1,2,3,4,5 };
	char *p = a;
	std::cout << sizeof(p) << std::endl;
	*/
	/*
	Linked_List l(10);
	l.insert(1);
	l.insert(3);
	l.insert(7);
	l.delete_node(10);
	l.insert(9);
	l.reverse();
	l.print();
	/*
	char n1[80];
	char n2[80];
	char rs[80];
	int len_rs = 0;
	scanf("%s",n1);
	scanf("%s",n2);

	char_rev(n1);
	char_rev(n2);

	int len_n1 = strlen(n1);
	int len_n2 = strlen(n2);
	


	
	Add_big_number(n1,len_n1, n2,len_n2,rs,&len_rs);
	printf("%d", len_rs);
	printf(" \n ");
	for (int i = len_n1 - 1; i >= 0; i--) {
		if (n1[i] != '/0')
			printf("%c", n1[i]);
	}
	printf(" + ");
	for (int i = len_n2 -1 ; i >= 0; i--) {
		if (n2[i] != '/0')
			printf("%c", n2[i]);
	}
	printf(" = ");
	for (int i = len_rs-1; i >= 0; i--) {
		printf("%c", rs[i]);
	}
	printf(" \n ");
	/*
	char a[] = "1234";
	char* p = a;
	printf("%c\n", *(p++)); //1
	printf("%c\n", *(++p)); //3

	*/
	/*
	char* a = "azde";
	char* b = "asde";
	int r = strcmp(a, b);
	printf("%d", r);
	*/
/*
	Endian_reverse_2();
	/*
	int arr[10] = { 5,6,7,8,2,3,1,4,9,10 };
	Array_Pair ar(arr,10);
	*/
	/*
	int arr[10] = { 5,6,7,8,2,3,1,4,9,10 };
	Sort s(arr,10);
	s.insert_sort();
	//s.bubble_sort();
	//s.merge_sort();
	//s.selection_sort();
	//s.quick_sort();
	*/
	/*
	diamond(5);
	*/
	/*
	triangle(5);
	*/
	/*
	int s = 10;
	All_probability a(s);
	a.print();
	*/
	/*
	Fibonacci F;
	int res = F.recursize(10);
	int non_res = F.non_recursize2(10);
	cout << res << endl;
	cout << non_res << endl;
	
	*/
/*
	int a = 17;
	Find_Bighest_Bit bit(a);
	
	/*
	Array_List Arr;
	int Data_A = 9;
	int Data_B = 10;
	Arr.check(Data_A, Data_B);
	*/
	/*
	int a[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int b = 1;
	Array_500 arr(a,b);
	Array_500 arr(a);
	*/
	system("pause");
    return 0;
}

