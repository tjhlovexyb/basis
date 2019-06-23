#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
typedef int ElemType
typedef int Status
typedef struct _linklist{
	ElemType elem;
	struct _linklist *next;
}LinkList;
Status InitLinkList(LinkList &L);
Status GetLinkList(LinkList L,int i,ElemType *e);
Status TraverseLinkList(LinkList L);
Status InsertLinkList(LinkList &L,int i,ElemType e);
Status DeleteLinkList(LinkList &L,int i,ElemType *e);
Status ClearLinkList(LinkList &L);

