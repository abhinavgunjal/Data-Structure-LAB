//Implementation of directed graph and its operations using adjacent lists.

#include <stdio.h>
		while(curr != NULL){
			if(curr -> vertex > v){
				curr -> vertex-- ;
			}
			curr = curr-> next;
		}
	}
	(*n)--;
	printf("After deleting vertex the adjacency list is : \n");
	print(n);
} void deleteEdge(int *n){
	int src, dest;
	printf("Enter the source vertex of the edge : ");
	scanf("%d",&src);
	printf("Enter the destination vertex of the edge : ");
	scanf("%d",&dest);
	if(src>*n || dest>*n||src<=0|| dest<=0){
		printf("Invalid vertex number.\n");
		return;
	}

	GNODE curr = graph[src];
	GNODE prev = NULL;
	while(curr != NULL){
		if (curr -> vertex ==  dest){
			if(prev== NULL){
				graph[src] = curr -> next;
			}
			else{
				prev -> next = curr->next;
			}
			free(curr);
			printf("After deleting edge the adjacency list is : \n");
			print(n);
			return;
		}
		prev = curr;
		curr = curr-> next;
	}
	printf("Edge not found.\n");

	
}
void print(int *n){
	int i;
	 for(i =1; i<= *n ; i++){
		 if(graph[i] !=NULL){
			 printf("%d=>",i);
			 GNODE temp = graph[i];
			 while(temp != NULL){ 				 printf("%d\t",temp-> vertex);
				 temp = temp-> next;
			 }
			 printf("\n");
		 }
	 }
} 
