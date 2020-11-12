#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[1000];
	int top = -1;
	int t;
	while (1) {
		printf("1: push, 2: pop, 3: print, 4: empty, 5: top, 6: exit\n");
		scanf("%d", &t);

		switch (t) {
		case 1:
			/*
			  Энд push үйлдэл хийнэ
			 */
			 
			 scanf("%d",&a[++top]);
			 
			break;
		case 2:
			/*
			  Энд pop үйлдэл хийнэ
			 */
			 if(top == -1) 
			 	printf("Empty.\n");
			 	
			 top--;
			break;
		case 3:
			/*
			  Энд print үйлдэл хийнэ
			 */
			 if(top == -1) {
			 	printf("Empty.\n");
			 } else {
				for(int i=0;i<=top;i++) {
			 		printf(" %d ",a[i]);
			 	} 
			 	printf("\n");
			 }

			break;
		case 4:
			/*
			  Энд empty үйлдэл хийнэ
			 */
			 if(top == -1)
			 	printf("Empty.\n");
			 else {
			 	printf("There is %d element.\n",top+1);
			 }
			break;
		case 5:
			/*
			  Энд top үйлдэл хийнэ
			 */
			 if(top == -1) {
			 	printf("Empty.\n");
			 	
			 } else {
			 	printf("%d\n",a[top]);
			 }
			break;
		default:
			exit(0);
		}
	}

	return 0;
}
