/*ÏßÐÔ±í*/

typedef struct Node
{
	int data;
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
    int GetElem(int index, int &elem);
    int InsertElem(int  index, int &elem;
    int DeleteElem(int index, int &elem);
    int GetLength(int &length);	
	void Display();	
};