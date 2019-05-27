#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "sqlist.h"

Status InitSqList(SqList &L){
	L->elem = (ElemType *)calloc(LIST_INIT_SIZE, sizeof(ElemType));
	if(!L->data)
		return false;
	L->length = 0;
	L->listsize = LIST_INIT_SIZE;
	return true;
}
Status GetSqListElem(SqList L,int i,ElemType *e){
	if(L.length == 0 || i > L.length)
		return false;
	*e = L.elem[i - 1];
	return true;
}
Status SqListInsert(SqList &L,int i,Elemtype e){
	if(i < 1 || i > L->length + 1)
		return false;
	if(L->length >= L->listsize)
	{
		L->elem = (ElemType *)realloc(L->elem, (LIST_INIT_SIZE + LISTINCREMENT)*sizeof(ElemTYpe));
		if(!L->elem)
			return false;
		L->listsize += LISTINCREMENT;
	}
	ElemType *p, *q;
	q = L->elem + i - 1;
	for(p = L->elem + L->length - 1; p >= q; p--)
		*(p+1) = *p;
	*q = e;
	L->length++;
	return true;
}
Status SqListDelete(SqList &L,int i,ElemType *e){
	if(i < 1 || i > L->length)
		return false;
	ElemType *p, *q;
	*e = L->elem[i - 1];
	q = L->elem + L->length - 1;
	for(p = L->elem[i]; p <= q; p++)
		*(p-1) = *p;
	L->length--;
	return false;
}
void ShowSqList(SqList L){
	for(int i = 0; i < L.length; i++)
		printf("%d", L.elem[i]);
	printf("\n");
}