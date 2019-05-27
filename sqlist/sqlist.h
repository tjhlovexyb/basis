#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
typedef int ElemType
typedef int Status
typedef struct _SqList{
	ElemType *elem;
	int length;
	int listsize;
}SqList;
Status InitSqList(SqList &L);
Status GetSqListElem(SqList L,int i,ElemType *e);
Status SqListInsert(SqList &L,int i,Elemtype e);
Status SqListDelete(SqList &L,int i,ElemType *e);
void ShowSqList(SqList L);
