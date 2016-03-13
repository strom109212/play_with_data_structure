/*ÏßÐÔ±í*/

typedef struct Node
{
	ELEMTYPE data;
	struct Node *next;
}Node;

class LinkList
{
private:
	Node *list;
	int	length;
public:
	LinkList();
	~LinkList();
	int ListEmpty();
    int ClearList();
    int GetElem(int index, ELEMTYPE &elem);
    int InsertElem(int  index, ELEMTYPE &elem;
    int DeleteElem(int index, ELEMTYPE &elem);
    int GetLength(int &length);	
	void Display();	
};