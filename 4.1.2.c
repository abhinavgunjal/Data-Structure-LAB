//Write a menu driven C program that implements singly linked list for the following operations:

//Create
//Display
//Concatenate

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef Node*NODE;
NODE addNode(NODE head,int data){
	NODE newNode = (NODE)malloc(sizeof(NODE));
	newNode->data = data;
	newNode->next=NULL;
	if(head==NULL){
		head=newNode;
	}else{
		NODE temp = head;
		while(temp->next!=NULL){
			temp = temp->next;
			
		}
		temp -> next=newNode;
	}
	return head;
}
void displayList(NODE head){
	NODE temp = head;
	while(temp!=NULL){
		printf("%d --> ",temp->data);
		temp = temp-> next;
	}
	printf("NULL\n");
}
NODE concatenate(NODE list1,NODE list2)
{
	if(list1 == NULL)
		return list2;
	NODE temp = list1;
	while(temp-> next!= NULL){
		temp=temp->next;
	}
	temp->next=list2;
	return list1;
}
