#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 100;
    int a[n], i = 0;
    int t;
    int top = -1;
    int x;
	while (1) {
		printf("1: push, 2: pop, 3: print, 4: empty, 5: top, 6: exit\n");
		scanf("%d", &t);

		switch (t) {
		case 1:
			if(top>=n-1) {
				printf("Stack is full. \n");
			} else {
				printf("Enter your element value: \n");
				scanf("%d",&x);
				top++;
				a[top] = x;
			}
	
			break;
		case 2:
			if(top<=-1) {
				printf("Empty stack \n");

			} else {
				printf("Popped top element is %d\n",a[top]);
				top--;
			}

			break;
		case 3:
			if(top>=0) {
				for(int j=0;j<=top;j++){
              	  printf("Elements : \t %d\n",a[j]);
				}
				break;
			} else printf("Stack is empty. \n");
			break;

		case 4:
			if(top==-1) {
				printf("Empty.\n");
			} else printf("%d element in stack.\n",top+1);
			
			break;
		case 5:
		if(top==-1) {
			printf("Empty. \n");
		} else {
			printf("Top element is value of %d at %dth index.\n",a[top],top);
		}
			
			
			break;
		default:
			exit(0);
		}
	}

	return 0;
}
