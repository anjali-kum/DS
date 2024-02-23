//Implementation of stack using Array


#define SIZE 10
void push(int);
void pop();
void display();

int stack[SIZE],top = -1;
void main(){
	int value,choice;
	while(1){
	printf("\n\n **** Menu ****");
	printf("1. Push \n 2. Pop\n 3.Display\n 4. Exit");
	printf("\n Enter Your choice ");
	scanf("%d",&choice);
	switch(choice){
		case 1: printf("Enter the value to be insert: ");
		scanf("%d",&value);
		push(value);
		break;
		case 2: pop();
		break;
		case 3:display();
		break;
		case 4: exit(0);
		default: printf("\n Wrong selection!!! Try again!!!");
	}
	}	
	}
void push(int value){
	if(top == SIZE-1)
	printf("\n Stack is full !!! Insertion is not possible!!!");
	else{
		top++;
		stack[top] = value;
		printf("\n Insertion successful!!!");
	}
	}
void pop(){
	if(pop == -1)
	printf("\n Stack is Empty !!! Deletion is not possible!!!");
	else{
		printf("\n Deleted: %d",stack[top]);
		top--;
	}	
}
void display(){
	if(top == -1)
	printf("\n Stack is Empty!!!");
	else{
		int i;
		printf("\n Stack elemnets are:\n");
		for(i=top;i>=0;i--)
		printf("%d\n",stack[i]);
		
	}
}
