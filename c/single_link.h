/* -author   : drinksober
   -date     : 2015.04.29
   -function : analyze the weather_type for json_data that get by internet
   -parameter: pjson_waether
   -return   : weather_type
   -example  : "��ת����"  ----- the weather type is cloud
*/

typedef struct Node
{
int type;
char weather[15];
struct Node *next;
}Lnode;

int Analyze_Weather(char* data);
void printList(Lnode *head);  //��ӡ
Lnode *createList();          //�������� �ֶ���������ֵ
Lnode *insertList(Lnode *head,int elem,int position); // ����
Lnode *deleteElem(Lnode *head,int elem);  //ɾ��
Lnode *reverseList(Lnode *head);   //��ת
void SaveList(Lnode* head);    //���������ݱ���Ϊtxt�ļ�
Lnode *Find_Node(Lnode* head,int pos); //�����������е�pos��λ�õĽ�㡣
Lnode *Init_Node();           //��ʼ������ ��ֵΪ�趨����ֵ
int Sub_Analyze_Weather(char* data,Lnode* value);
