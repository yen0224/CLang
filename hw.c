#include<stdio.h> 
#include<math.h> 
 char command;
int main(void)

{
	printf("Enter the number\n");
	
	int a,b,c,d;

	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	printf("%s %d %3s %d\n","A1=",a,"+j",b);
	printf("%s %d %s %d\n","A2=",c,"+j",d);
   
    float Realresult,imResult;
    scanf("%s",&command);
    switch (command)
    {
    case '+':
        imResult=b+d;
        Realresult=a+c;
        break;
    case '-':
        Realresult=a-c;
        imResult=b-d;
        break;
    case '*':
        Realresult=a*c-b*d;
        imResult=b*c+a*d;;
        break;
    case '/':
        Realresult=(float)(a*c-b*d)/(c*c+d*d);
        imResult=(float)(b*c+a*d)/(c*c+d*d);
        break;
    }
    printf("%s %.4f %s %.4f\n","Answer is",Realresult,"+j",imResult);
}
