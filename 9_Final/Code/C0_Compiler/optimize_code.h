#pragma once
#include "mid_code.h"

#define MAX_BASIC_BLOCK 5000
#define MAX_PARENT_BLOCK 1000
#define MAX_PREARRAY 1000
#define MAX_CONNECT 1000
#define MAX_NODE_NUMBER 1000


typedef struct{
	string *name;
	int index;
}Node_List;

typedef struct {
	int prearray[MAX_PREARRAY]; //������е�ǰ����
	int prenum; //ǰ��������
	int next_follow; //ֱ�Ӻ��
	int next_jump; //��ת���
}Block;

typedef struct {
	int edge_number;
	bool conflict[MAX_CONNECT];
}Conflict_Node;

