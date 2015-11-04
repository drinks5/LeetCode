/* -author   : drinksober
   -date     : 2015.04.29
   -function : analyze the weather_type for json_data that get by internet
   -parameter: pjson_waether
   -return   : weather_type
   -example  : "晴转多云"  ----- the weather type is cloud
*/

typedef struct Node
{
int type;
char weather[15];
struct Node *next;
}Lnode;

int Analyze_Weather(char* data);
void printList(Lnode *head);  //打印
Lnode *createList();          //创建链表， 手动输入链表值
Lnode *insertList(Lnode *head,int elem,int position); // 插入
Lnode *deleteElem(Lnode *head,int elem);  //删除
Lnode *reverseList(Lnode *head);   //反转
void SaveList(Lnode* head);    //把链表数据保存为txt文件
Lnode *Find_Node(Lnode* head,int pos); //查找在链表中第pos个位置的结点。
Lnode *Init_Node();           //初始化链表 初值为设定的数值
int Sub_Analyze_Weather(char* data,Lnode* value);
