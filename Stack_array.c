#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int stack[100], choice, n, i, top,x;
	void push();
	void pop();
	void display();
int main(int argc, char *argv[]) {
	top =-1;
	printf("\n Enter the size of your stack\n");
	scanf("%d",&n);
	printf("\n Stack operations using array\n");
	printf("\n\t ----------------------------");
	printf("\n \t 1. PUSH\n\t 2. POP \n\t 3. DISPLAY\n\t 4. EXIT");
	do{
		printf("\n Enter your choice\n");
		scanf("%d",&choice);
		switch (choice){
			case 1:
				{
				push();
				break;	
				}
			case 2:
				{
				pop();
				break;	
				}
			case 3:
				{
				display();
				break;	
				}
			case 4:
				{
				printf("\n\t EXIT POINT");
				break;	
				}
			default:
				{
				printf("Please enter valid choice 1, 2, 3, 4\n");
				break;	
				}
		}
	}while(choice !=4);
	return 0;
}
void push(){
	if(top>=n-1){
		printf("\n\t Stack is overflow");
	}
	else{
		printf("Enter a value to be pushed");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
void pop(){ 
if(top<=-1){
		printf("\n\t Stack is underflow");
	}
	else{
		printf("\n\t The popped element is %d",stack[top]);
		top--;
	}
}
void display(){
if(top>=0){
		printf("\n\t The element in the stack are: \n");
		for(i=top;i>=0;i--){
			printf("\n%d",stack[i]);
		}
		printf("\n Press the next choice");
	}
	else{
		printf("The stack is empty");
		
	}
	}

