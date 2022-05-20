

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>


//declaring menu
void menu();

//Declaring for arithmatic operation

void arth();

void ADD();			   
void SUBTRACT();	   
void MULTIPLICATION(); 
void DIVISION();	   
void FACTORIZATION(); 
void FACTORIAL();	   
void RT();			   
void POWER();		   

//Declaring for matrix problem

void matrix();

void add_matrix();
void subtract_matrix();
void multiply_matrix();
void transpose_matrix();

//Declaring for equation solving

void eqn();

void quadratic();
void cubic();
void linear1();
void linear2();

//Declaring for permutation and combination

void per_comb();
void permutation();
void combination();

//Declaring for unit converter

void unit_converter();
void area();
void energy();
void distance();
void memory();
void volume();

void Formula();

void gotoxy(int x, int y); 


//Main function start

int main()
{
	system("cls");
	char ch;
	int a;
	
	gotoxy(70,18);
	printf("<-----Enter any key to continue----->");
	
	ch = getch();
	a = ch;
	system("cls");
	if(a < 255)
	{
		menu();
	}
	return 0;
}

//defining function menu()

void menu()
{
	    char ch;
	    
	    gotoxy(68,12);
	    printf("<------MENU------>");
	    
	    gotoxy(68,15);
	    printf("1. ARITHMATIC OPERATION");
		
		gotoxy(68,16);
		printf("2. MATRIX");
	
	    gotoxy(68,17);
		printf("3. EQUATION");
		
		gotoxy(68,18);
		printf("4. PERMUTATION AND COMBINATION");
		
		gotoxy(68,19);
		printf("5. UNIT CONVERTER");
	
	    gotoxy(68,20);
		printf("6. FORMULA BOOK");
		gotoxy(68,23);
		printf("<--(E/e)exit");
		ch = getch();
		
		system("cls");
		switch (ch)
		{
		case '1':
			arth(); //Calling arithmatic function
			break;
		case '2':
			matrix(); //Calling matrix function
			break;
		case '3':
			eqn(); //Calling eqn function
			break;
		case '4':
			per_comb(); //calling per_combo function
			break;
		case '5':
		    unit_converter();  //calling unit_converter function
			break;
		case '6' :
		    Formula();
			break;
		case 'E':
		    exit(0);
		    break;
		case 'e':
		    exit(0);
		    break;
		default :	
			gotoxy(68,18);
		    printf("Please enter valid option !");
			gotoxy(68,19);
			printf("Press any key to return to menu.");
			char n;
			int a;
			n = getch();
			a = n;
			system("cls");
			if(a < 255)
			{
				menu();
			}					
		}
}
//defining function arth()
void arth()
{
	char c;
    gotoxy(68,12);
    printf("Select Options as indicated below.");
    
    gotoxy(68,15);
	printf("Enter + for ADDITION");
	
	gotoxy(68,16);
	printf("Enter - for SUBTRACTION");
	
	gotoxy(68,17);
	printf("Enter * for MULTIPLICATION");
	
	gotoxy(68,18);
	printf("Enter / for DIVISION AND MODULO CALCULATION");
	
	gotoxy(68,19);
	printf("Enter ! for FACTORIAL");
	
	gotoxy(68,20);
	printf("Enter ^ for POWER CALCULATION");
	
	gotoxy(68,21);
	printf("Enter F for FACTORIZATION");
	
	gotoxy(68,22);
	printf("Enter R for ROOT CALCULATION");
	
	gotoxy(68,25);
	printf("<-- (B/b)-Back");
	
	gotoxy(68,26);
	printf("<-- (E/e)-exit");

	fflush(stdin);
	c = getch();
	system("cls");
	switch (c)
	{
	case '+':
		ADD(); //calling function ADD()
		break;
	case '-':
		SUBTRACT(); //calling function DIFFERENCE()
		break;
	case '*':
		MULTIPLICATION(); //calling function MULTIPLICATION()
		break;
	case '/':
		DIVISION(); //calling function DIVISION()
		break;
	case '!':
		FACTORIAL();
		break;
	case '^':
		POWER();
		break;
	case 'F':
		FACTORIZATION();
		break;
	case 'R':
		RT();
		break;
	case 'B' :
	   menu();
	   break;
	case 'b':
	   menu();
	   break;	  
	case 'E':
	   exit(0);
	case 'e' :
	   exit(0);   
	default :
		    
			gotoxy(68,18);	
	        printf("Please enter valid option !");
	        
	        gotoxy(68,19);
			printf("Press any key to return back.");
			char ch;
			int a;
			gotoxy(68,21);
			ch=getch();
			a = ch;
		    if(a < 255)
			{
				system("cls");
				arth();
			}			
	}
}
//defining void matrix()
void matrix()
{
	char c;
	gotoxy(68,12);
    printf("Select Options as indicated below.");
    gotoxy(68,15);	
	printf("Enter + for ADDTTION of matrices");
	gotoxy(68,16);
	printf("Enter - for SUBTRACTION of matrices");
	gotoxy(68,17);
	printf("Enter * for MULLTIPLICATION of matrices");
	gotoxy(68,18);
	printf("Enter T for TRANSPOSE of matrice");
	gotoxy(68,21);
	printf("<-- (B/b)-Back");
	gotoxy(68,22);
	printf("<-- (E/e)-Exit");
	fflush(stdin);
	c = getch();
	system("cls");
	switch (c)
	{
	case '+':
		add_matrix();
		break;
	case '-':
		subtract_matrix();
		break;
	case '*':
		multiply_matrix();
		break;
	case 'T':
		transpose_matrix();
		break;
	case 'E':
	    exit(0);
		break;
	case 'e':
	    exit(0);
		break;
	case 'B':
	    menu();
		break;
	case 'b':
	    menu();
		break;
	default :
		    gotoxy(68,18);	
	        printf("Please enter valid option !");
	        gotoxy(68,19);
			printf("Press any key to return back.");
			char ch;
			int a;
			gotoxy(68,21);
			ch=getch();
			a = ch;
		    if(a < 255)
			{
				system("cls");
				matrix();
			}				
	}
}
//defining void eqn()
void eqn()
{
	char n;
	gotoxy(68,12);
    printf("Select Options as indicated below.");
    gotoxy(68,15);
	printf("1. aX^2 + bX + c");
	gotoxy(68,16);
	printf("2. aX^3 + bX^2 + cX + d");
	gotoxy(68,17);
	printf("3. Anx + Bny = Cn");
	gotoxy(68,18);
	printf("4. Anx + Bny + Cnz = Dn");
	gotoxy(68,21);
	printf("<-- (B/b)-Back");
	gotoxy(68,22);
	printf("<-- (E/e)-exit");
	n = getch();
	system("cls");
	switch (n)
	{
	case '1':
		quadratic();
		break;
	case '2':
		cubic();
		break;
	case '3':
	    linear1();
		break;
	case '4':
	    linear2();
		break;	
	case 'e':
	    exit(0);
		break;
	case 'E':
	    exit(0);
		break;
	case 'B':
	    menu();
		break;
	case 'b':
	    menu();
		break;
	default :
		    gotoxy(68,18);	
	        printf("Please enter valid option !");
	        gotoxy(68,19);
			printf("Press any key to return back.");
			char ch;
			int a;
			gotoxy(68,21);
			ch=getch();
			a = ch;
		    if(a < 255)
			{
				system("cls");
				eqn();
			}					
	}
}
//defining void per_comb()
void per_comb()
{
	char n;	
	gotoxy(68,12);
    printf("Select Options as indicated below.");
	gotoxy(68,15);
	printf("1. Combination");
	gotoxy(68,16);
	printf("2. Permutation\n");
	gotoxy(68,19);
	printf("<-- (B/b)-Back");
	gotoxy(68,20);
	printf("<-- (E/e)-exit");
	n = getch();
	system("cls");
	switch (n)
	{
	case '1':
		combination();
		break;
	case '2':
		permutation();
		break;
	case 'b':
	    menu();
		break;
	case 'B':
	    menu();
		break;
	case 'e':
	    exit(0);
		break;
	case 'E':
	    exit(0);
		break;
	default :
		
		    gotoxy(68,18);	
	        printf("Please enter valid option !");
	        
	        gotoxy(68,19);
			printf("Press any key to return back.");
			char ch;
			int a;
			gotoxy(68,21);
			ch=getch();
			a = ch;
		    if(a < 255)
			{
				system("cls");
				per_comb();
			}					
	}
}
//defining void unit_converter()
void unit_converter()
{
	char ch;
	gotoxy(68,12);
	printf("Unit Converter");
	gotoxy(68,15);
	printf("1.  Area");
	gotoxy(68,16);
	printf("2.  Energy");
	gotoxy(68,17);
	printf("3.  Distance");
	gotoxy(68,18);
	printf("4.  Memory");
	gotoxy(68,19);
	printf("5.  Volume");
	gotoxy(68,22);
    printf("<-- (B/b)-Back");
    gotoxy(68,23);
	printf("<-- (E/e)-exit");
    fflush(stdin);
	ch = getch();	
	system("cls");
	switch(ch)
	{
		case '1' :
		    area();
		    break;
		case '2' :
		    energy();
		    break;
		case '3' :
		    distance();
		    break;
		case '4' :
			memory();
			break;  
		case '5' :
			volume();
			break;	
		case 'b':
		    menu();
		    break;
		case 'B':
		    menu();
		    break;
        case 'E':
		    exit(0);
		    break;
		case 'e':
		    exit(0);
		    break; 
		default :
			gotoxy(68,18);	
	        printf("Please enter valid option !");
	        
	        gotoxy(68,19);
			printf("Press any key to return back.");
			char ch;
			int a;
			gotoxy(68,21);
			ch=getch();
			a = ch;
		    if(a < 255)
			{
				system("cls");
				unit_converter();
			}   
	}
}
//defining Formula()
void Formula()
{
	FILE *fp;
	char ch , ch1;
    fp = fopen("Formula.txt","r");
     if (fp == NULL)
   {
   	  gotoxy(68,19);
      printf("Error while opening the file.\n");
   }
   gotoxy(68,19);
   printf("Important Formulas:\n");
   while((ch=fgetc(fp))!=EOF)
      printf("%c", ch);
    gotoxy(100,19);
   printf("<-- (B/b)-Back");
   gotoxy(100,20);
   printf("<-- (E/e)");
   fflush(stdin);
   ch1 = getch();
   if(ch1 == 'b' || ch1 == 'B')
   {
	   fclose(fp);
	   system("cls");
	   menu();
   }
   else if(ch1=='e'||ch1=='E')
   {
   	   system("cls");
	   exit(0);
   }
   else
   {
   	        system("cls");
   	        gotoxy(68,18);	
	        printf("Please enter valid option !");
	        gotoxy(68,19);
			printf("Press any key to return back.");
			char ch;
			int a;
			gotoxy(68,21);
			ch=getch();
			a = ch;
		    if(a < 255)
			{
				system("cls");
				Formula();
			}
   }
}
//ARTHEMATIC CALCULATIONS START FROM HERE
//defining function ADD()
void ADD()
{
	int n, i ;
	float* ptr;
	float sum;
	float number;
	char ch;
    gotoxy(68,15);
	printf("How many numbers you want to add ?");
	scanf("%d", &n);
	ptr = (float*)malloc(n * sizeof(float));
    gotoxy(68,16);
	printf("Enter oprands : \n");
	i = 0;
	sum = 0;
	while (i < n)
	{
		gotoxy(68,17+i);
		scanf("%f",ptr+i);
		i++;
	}
	for(i=0;i<n;i++)
	{
		sum = sum + *(ptr+i);
	}
	gotoxy(68,18+n);
	printf("SUM = %f", sum);
	free(ptr);
	gotoxy(68,20+n);
	printf("Press any key to return back.");
	char c;
	int a;
	gotoxy(68,23+n);
	c=getch();
	a = ch;
	if(a < 255)
	{
	    system("cls");
	    arth();
	}
}
//defining function DIFFERENCE()
void SUBTRACT()
{
	float n1, n2;
	char ch;
	gotoxy(68,15);
	printf("1st number = ");
	scanf("%f", &n1);
	gotoxy(68,16);
	printf("2nd number : ");
	scanf("%f", &n2);
	float subt = n1 - n2;
	gotoxy(68,18);
	printf("DIFFERENCE = %.5f", subt);
    gotoxy(68,21);
    printf("Press any key to return back.");
	char c;
	int a;
	gotoxy(68,23);
	c=getch();
	a = ch;
	if(a < 255)
	{
	    system("cls");
	    arth();
	}
}
//defining function MULTIPLICATION()
void MULTIPLICATION()
{
	int n, i;
	float* ptr;
	float number, multiplication;
	char ch;

    gotoxy(68,15);
	printf("How many number you want to multiply ?\n");
	
	gotoxy(68,16);
	scanf("%d", &n);
	ptr = (float*)malloc(n * sizeof(float));

	i = 1;
	multiplication = 1;

    gotoxy(68,17);
	printf("Enter oprands :\n");

	for (i = 0; i < n; i++)
	{
		gotoxy(68,18+i);
		scanf("%f", ptr+i);
		
	}
	for(i=0;i<n;i++)
	{
		multiplication = multiplication * *(ptr+i);
	}
	
	gotoxy(68,19+n);
	printf("PRODUCT = %.5f", multiplication);
	free(ptr);

    gotoxy(68,21+n);
    printf("Press any key to return back.");
	char c;
	int a;
	gotoxy(68,23+n);
	c=getch();
	a = ch;
	if(a < 255)
	{
	    system("cls");
	    arth();
	}
}
//defining function DIVISION()
void DIVISION()
{
	float number, d, D;
	int division;
	int remainder;
	char ch;
	gotoxy(68,15);
	printf("Enter number : ");
	scanf("%f", &number);
	gotoxy(68,16);
	printf("Enter divisor : ");
	scanf("%f", &d);
	division = (int)number / (int)d;
	remainder = (int)number % (int)d;
	D = number / d;
    gotoxy(68,18);
	printf("Quotient = %d", division);
	gotoxy(68,19);
	printf("Remainder = %d", remainder);
	gotoxy(68,20);
	printf("Ans = %.5f", D);
    gotoxy(68,23);
    printf("Press any key to return back.");
	char c;
	int a;
	gotoxy(68,23);
	c=getch();
	a = ch;
	if(a < 255)
	{
	    system("cls");
	    arth();
	}
}
//defining function FACTORIZATION()
void FACTORIZATION()
{
	int number;
	int i = 1;
	char ch;
    int j = 0;
    gotoxy(68,15);
	printf("Enter number : ");
	scanf("%d", &number);
    gotoxy(68,17);
	printf("Factors of %d are :\n", number);
	for (i = 1; i <= number; i++)
	{
		if (number % i == 0)
		{
			gotoxy(68+j,18);
			printf("%d", i);
			j = j + 2;
		}
	}
    gotoxy(68,21);
    printf("Press any key to return back.");
	char c;
	int a;
	gotoxy(68,23);
	c=getch();
	a = ch;
	if(a < 255)
	{
	    system("cls");
	    arth();
	}
}
//defining function POWER()
void POWER()
{
	int number, power, p;
	char ch;
    gotoxy(68,15);
	printf("Enter number : ");
	scanf("%d", &number);
	gotoxy(68,16);
	printf("Enter power to be given : ");
	scanf("%d", &power);
	p = pow(number, power);
    gotoxy(68,18);
	printf("%d to the power %d = %d", number, power, p);
    gotoxy(68,21);
    printf("Press any key to return back.");
	char c;
	int a;
	gotoxy(68,23);
	c=getch();
	a = ch;
	if(a < 255)
	{
	    system("cls");
	    arth();
	}
}
//defining function FACTORIAL()
void FACTORIAL()
{
	int number, i = 1;
	int fact = 1;
	char ch;
    gotoxy(68,15);
	printf("Enter number : ");
	scanf("%d", &number);
	while (i <= number)
	{
		fact = fact * i;
		i = i + 1;
	}
    gotoxy(68,17);
	printf("Factorial of %d = %d", number, fact);
    gotoxy(68,20);
    printf("Press any key to return back.");
	int a;
	gotoxy(68,23);
	ch=getch();
	a = ch;
	if(a < 255)
	{
	    system("cls");
	    arth();
	}
}
//definig function RT()
void RT()
{
	int number, root;
	float r, R;
	char ch;
    gotoxy(68,15);
	printf("Enter number : ");
	scanf("%d", &number);
	gotoxy(68,16);
	printf("Enter nth root : ");
	scanf("%d", &root);
	R = (float)1 / (float)root;
	r = pow((float)number, R);
	if (root == 1)
	{
		gotoxy(68,18);
		printf("%dst root of %d = %f", root, number, r);
	}
	else if (root == 2)
	{
		gotoxy(68,18);
		printf("%dnd root of %d = %f", root, number, r);
	}
	else if (root == 3)
	{
		gotoxy(68,18);
		printf("%drd root of %d = %f", root, number, r);
	}
	else
	{
		gotoxy(68,18);
		printf("%dth root of %d = %f", root, number, r);
	}
    gotoxy(68,21);
    printf("Press any key to return back.");
	char c;
	int a;
	gotoxy(68,23);
	c=getch();
	a = ch;
	if(a < 255)
	{
	    system("cls");
	    arth();
	}
}
//MATRIX CALCULATION STARTS FROM HERE
// defining add_matrix()
void add_matrix()
{	
	gotoxy(68,12);
	printf("ADDTITON OF MATRICES");
	int x, y, i, j ,r1=0 , r2 = 0 , k=0 , l=0 , c1=0 , c2 = 0 ,r3=0 , c3=0;
	int a[10][10], b[10][10], c[10][10];
	char ch;
	gotoxy(68,15);
	printf("Enter no. of row : ");
	scanf("%d", &x);
	gotoxy(68,16);
	printf("Enter no. of column : ");
	scanf("%d", &y);
	gotoxy(68,18);
	printf("Enter the elemnts of first matrix");
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			gotoxy(68+r1,19+c1);
			scanf("%d", &a[i][j]);
			r1 = r1 + 8;
		}
		r1 = 0;
		c1 = c1 + 2;
	}
	gotoxy(68,19+c1);
	printf("Enter the elements of second matrix");
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			gotoxy(68+r2,20+c1+c2);
			scanf("%d", &b[i][j]);
			r2 = r2 + 8;
		}
		r2 = 0;
		c2 = c2 + 2;
	}
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	gotoxy(68,21+c1+c2);
	printf("The sum of the matrces is ");
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			gotoxy(68+r3,22+c1+c2+c3);
			printf("%d", c[i][j]);
			r3 = r3 + 8;
		}
		r3=0;
		c3 = c3 + 2;
	}
    gotoxy(68,23+c1+c2+c3);
	printf("Press any key to return back.");
	char back;
	int BACK;
	gotoxy(68,29+y);
	back=getch();
	BACK = back;
	if(BACK < 255)
	{
	    system("cls");
	    matrix();
	}
}
//defining subtract_matrix()
void subtract_matrix()
{
	
	gotoxy(68,12);
	printf("SUBTRACTION OF MATRICES");

	int x, y, i, j, r1=0 , c1 = 0 , r2 = 0 , c2 = 0 , r3 = 0 , c3 = 0 ;
	int a[10][10], b[10][10], c[10][10];
	
	gotoxy(68,15);
	printf("Enter no. of row : ");
	scanf("%d", &x);
	
	gotoxy(68,16);
	printf("Entre no. of column : ");
	scanf("%d", &y);
	
	gotoxy(68,18);
	printf("Enter the elemnts of first matrix");
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			gotoxy(68+r1,19+c1);
			scanf("%d", &a[i][j]);
			r1 = r1 + 8;
		}
		r1 = 0;
		c1 = c1 + 2;
	}
	
	gotoxy(68,21+c1);
	printf("Enter the elements of second matrix");
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			gotoxy(68+r2,22+c1+c2);
			scanf("%d", &b[i][j]);
			r2 = r2 + 8;
		}
		r2 = 0;
		c2 = c2 + 2;
	}
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			c[i][j] = a[i][j] - b[i][j];
		}
	}
	
	gotoxy(68,24+c1+c2);
	printf("The difference of the matrices is");
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			gotoxy(68+r3,25+c1+c2+c3);
			printf(" %d ", c[i][j]);
			r3 = r3 + 8;
		}
		r3 = 0;
		c3 = c3 + 2;
	}

    gotoxy(68,27+c1+c2+c3);
	printf("Press any key to return back.");
	char back;
	int BACK;
	gotoxy(68,29+c1+c2+c3);
	back=getch();
	BACK = back;
	if(BACK < 255)
	{
	    system("cls");
	    matrix();
	}
}

//defining void multiply_matrix()

void multiply_matrix()
{
	gotoxy(68,12);
	printf("Multiplication of matxices");
	
	
	int a[10][10], b[10][10], M[10][10];
	int i, j, k, r1, c1, r2, c2, product , p=0 , l=0 , R1=0 , R2=0 , R3=0 , C1 = 0 , C2 = 0 , C3 = 0;
	char ch;
	
	gotoxy(68,15);
	printf("Enter no of row of 1st matrix : ");
	scanf("%d", &r1);
	
	gotoxy(68,16);
	printf("Enter no of column of 1st matrix : ");
	scanf("%d", &c1);
	
	gotoxy(68,17);
	printf("Enter no of row of 2nd matrix : ");
	scanf("%d", &r2);
	
	gotoxy(68,18);
	printf("Enter no of column of 2nd matrix : ");
	scanf("%d", &c2);

	if (c1 != r2)
	{
		gotoxy(68,20);
		printf("! Invalid Operation !");
		gotoxy(68,21);
		printf("Row of 1st matrix must be equal to column of second matrix");
		gotoxy(68,24);
	    printf("Press any key to return back.");
	    char back;
	    int BACK;
	    back=getch();
	    BACK = back;
	    if(BACK < 255)
	    {
	       system("cls");
	       matrix();
	    }
	}
	else
	{
		gotoxy(68,20);
		printf("Enter elements of 1st matrix");
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c1; j++)
			{
				gotoxy(68+R1,21+C1);
				scanf("%d", &a[i][j]);
				R1 = R1 + 8;
			}
			R1=0;
			C1 = C1 + 2;
		}
		
		gotoxy(68,22+c1);
		printf("Enter elements of 2nd matrix");
		for (i = 0; i < r2; i++)
		{
			for (j = 0; j < c2; j++)
			{
				gotoxy(68+R2,23+C1+C2);
				scanf("%d", &b[i][j]);
				R2 = R2 + 8;
			}
			R2 = 0;
			C2 = C2 + 2;
		}
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c2; j++)
			{
				product = 0;
				for (k = 0; k < r2; k++)
				{
					product = product + a[i][k] * b[k][j];
				}
				M[i][j] = product;
			}
		}
		gotoxy(68,24+C1+C2);
		printf("Multiplication of given matrices");
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c2; j++)
			{
				gotoxy(68+R3,25+C1+C2+C3);
				printf("%d", M[i][j]);
				R3 = R3 +8;
			}
			R3 = 0;
			C3 = C3 + 2;
		}
		gotoxy(68,27+C1+C2+C3);
	    printf("Press any key to return back.");
	    char back;
	    int BACK;
	    back=getch();
	    BACK = back;
	    if(BACK < 255)
	    {
	      system("cls");
	      matrix();
	    }	
	}
}

//defining void transpose_matxrix()

void transpose_matrix()
{
	int a[10][10], T[10][10];
	int i, j, r, c , R1=0 , C1=0 , R2=0 , C2=0;
	char ch;
	gotoxy(68,12);
	printf("Transpose of matrix");
	gotoxy(68,15);
	printf("Enter no of row : ");
	scanf("%d", &r);
	gotoxy(68,16);
	printf("Enter no of column : ");
	scanf("%d", &c);
    gotoxy(68,18);
	printf("Enter elements of matrix");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			gotoxy(68+R1,19+C1);
			scanf("%d", &a[i][j]);
			R1=R1+8;
		}
		R1=0;
		C1 = C1 + 2;
	}
	for (i = 0; i < r; ++i)
	{
		for (j = 0; j < c; ++j)
		{
			T[j][i] = a[i][j];
		}
	}
	gotoxy(68,20+C1);
	printf("Transpose of given matrix");
	for (i = 0; i < c; i++)
	{
		for (j = 0; j < r; j++)
		{
			gotoxy(68+R2,21+C1+C2);
			printf("%d", T[i][j]);
		    R2 = R2 + 8;
		}
		R2 = 0;
		C2 = C2 + 2;
    }
	    gotoxy(68,23+C1+C2);
	    printf("Press any key to return back.");
	    char back;
	    int BACK;
	    back=getch();
	    BACK = back;
	    if(BACK < 255)
	    {
	      system("cls");
	      matrix();
	    }
}
//Equation solving starts from here
//defining void quadrtaic()
void quadratic()
{
	gotoxy(68,12);
	printf("aX^2 + bX + c = 0");
	int a, b, c , A;
	float x1, x2, D;
	char C;
	gotoxy(68,15);
	printf("a = ");
	scanf("%d", &a);
    gotoxy(68,16);
	printf("b = ");
	scanf("%d", &b);
	gotoxy(68,17);
	printf("c = ");
	scanf("%d", &c);
	if (a != 0)
	{

		D = b * b - 4 * a * c;
		if (D > 0)
		{
			x1 = (-b + pow(D, (float)1 / 2)) / (2 * a);
			x2 = (-b - pow(D, (float)1 / 2)) / (2 * a);
			gotoxy(68,19);
			printf("1st root = %f", x1);
			gotoxy(68,20);
			printf("2nd root = %f", x2);
			gotoxy(68,22);
			printf("Properties :");
			gotoxy(68,23);
			printf("Roots are real and unequal\n");
			gotoxy(68,24);
            printf("Press any key to return back.");
			C=getch();
	        A = C;
	        if(A < 255)
     	    {
	          system("cls");
	          eqn();
	        }
		}
		if (D == 0)
		{
			x1 = (float)(-b) / (2 * (float)a);
			gotoxy(68,19);
			printf("1st root = 2nd root = %f", x1);
			gotoxy(68,21);
			printf("properties :");
			gotoxy(68,22);
			printf("Roots are real and equal.");
			gotoxy(68,24);
            printf("Press any key to return back.");
            C=getch();
	        A = C;
	        if(A < 255)
     	    {
	          system("cls");
	          eqn();
	        }
		}
		if (D < 0)
		{
			gotoxy(68,19);
			printf("Properties:");
			gotoxy(68,20);
			printf("Roots are imaginary and unequal");
			gotoxy(68,23);
            printf("Press any key to return back.");
			C=getch();
	        A = C;
	        if(A < 255)
     	    {
	          system("cls");
	          eqn();
	        }
	    }
	}
	else
	{
		gotoxy(68,19);
		printf("\nGiven eqn is not quadratic\n");
		gotoxy(68,21);
        printf("Press any key to return back.");
	    char C;
	    int A;
	    C=getch();
	    A = C;
	   if(A < 255)
    	{
	      system("cls");
	      eqn();
	    }
	}	
}
//defining void cubic()
void cubic()
{
  int a , b , c , d , x1 , i , j=0 , k=0 , A , B , C , D;
  float DET , x2 , x3;
  int cube , sq , f[10] , r[3];
  char Ch;
  int  Rw;

   gotoxy(68,12);
   printf("Ax^3 + Bx^2 + Cx + D = 0");
   gotoxy(68,15);
   printf("Enter value of coefficient :");
   gotoxy(68,16);
   printf("A = ");
   scanf("%d",&a);
   gotoxy(68,17);
   printf("B = ");
   scanf("%d",&b);
   gotoxy(68,18);
   printf("C = ");
   scanf("%d",&c);
   gotoxy(68,19);
   printf("D = ");
   scanf("%d",&d);

  for(i=1;i<=d;i++)
  {
    if(d % i == 0)
    {
      f[j] = -i;
      f[j+1] = i;
      j=j+2;
    }
  }

  for(i=0;i<j;i++)
  {
     if((a)*(f[i]*f[i]*f[i]) + (b)*(f[i]*f[i]) + (c)*(f[i]) + (d) == 0)
     {
       r[k] = f[i];
       k++;
     }
  }

  if(k==3)
  {
  	gotoxy(68,21);
    printf("1st root = %d",r[0]);
    gotoxy(68,22);
    printf("2nd root = %d",r[1]);
    gotoxy(68,23);
    printf("3rd root = %d",r[2]); 
    gotoxy(68,25);
    printf("Press any key to return back.");
	char Ch;
	int Rw;
	    Ch=getch();
	    Rw = Ch;
	   if(Rw < 255)
    	{
	      system("cls");
	      eqn();
	    }
  }
  else if(k==2)
   {
   	 gotoxy(68,21);
     printf("1st root = %d",r[0]);
   
     A = a;
     B = r[0] * A + b;
     C = r[0] * B + c;
     D = r[0] * C + d;

     DET = B * B - 4 * A * C;
     if (DET > 0)
		 {
			x2 = (-B + pow(DET, (float)1 / 2)) / (2 * A);
			x3 = (-B - pow(DET, (float)1 / 2)) / (2 * A);
			
			gotoxy(68,22);
			printf("2nd root = %f", x2);
			gotoxy(68,23);
            printf("3rd root = %f\n", x3);
            gotoxy(68,25);
            printf("Press any key to return back.");
	        char Ch;
	        int Rw;
	        Ch=getch();
	        Rw = Ch;
	       if(Rw < 255)
    	   {
	         system("cls");
	         eqn();
	       }
		 }
     if (DET == 0)
	  	{
      
		   x2 = (float)(-B) / (2 * (float)A);
		   gotoxy(68,22);	 
           printf("2nd root = %f", x2);
           gotoxy(68,23);
		   printf("3rd root = %f", x2);
		   gotoxy(68,25);
           printf("Press any key to return back.");
	       char Ch;
	       int Rw;
	       Ch=getch();
	       Rw = Ch;
	      if(Rw < 255)
    	  {
	         system("cls");
	         eqn();
	      }
      }

      if(DET < 0)
      {
       
        x2 = (float)(-B) / (2*(float)A);
        gotoxy(68,22);
        printf("2nd root = %f-i", x2);
        gotoxy(68,23);
        printf("3rd root = %f+i", x2);
        gotoxy(68,25);
        printf("Press any key to return back.");
	    char Ch;
	    int Rw;
	    Ch=getch();
	    Rw = C;
	    if(Rw < 255)
    	{
	      system("cls");
	      eqn();
	    }
      }
   }
  else if(k==1)
  {
     A = a;
     B = r[0] * A + b;
     C = r[0] * B + c;
     D = r[0] * C + d;

     DET = B * B - 4 * A * C;
     if (DET > 0)
		 {
      x1 = r[0];
			x2 = (-B + pow(DET, (float)1 / 2)) / (2 * A);
			x3 = (-B - pow(DET, (float)1 / 2)) / (2 * A);
			gotoxy(68,21);
			printf("1st root = %d", x1);
			gotoxy(68,22);
			printf("2nd root = %f", x2);
            gotoxy(68,23);
			printf("3rd root = %f", x3);
			gotoxy(68,25);
            printf("Press any key to return back.");
	        char Ch;
	        int Rw;
	        Ch=getch();
	        Rw = Ch;
	       if(Rw < 255)
    	   {
	        system("cls");
	        eqn();
	       }
		}
     if (DET == 0)
	  	{
           x1 = r[0];
		   x2 = (float)(-B) / (2 * (float)A);
		   gotoxy(68,21);
		   printf("1st root = %d", x1);
		   gotoxy(68,22);	 
           printf("2nd root = %f", x2);
           gotoxy(68,23);
           printf("3rd root = %f", x2);
           gotoxy(68,21);
           printf("Press any key to return back.");
	       char Ch;
	       int Rw;
	       Ch=getch();
	       Rw = Ch;
	      if(Rw < 255)
    	   {
	         system("cls");
	         eqn();
	       }
      }

      if(DET < 0)
      {
        x1 = r[0];
        x2 = (float)(-B) / (2*(float)A);
        gotoxy(68,21);
        printf("1st root = %d", x1);
        gotoxy(68,22);
		printf("2nd root = %f-i", x2);
        gotoxy(68,23);
		printf("3rd root = %f+i", x2);
		gotoxy(68,25);
        printf("Press any key to return back.");
	    char Ch;
	    int Rw;
	    Ch=getch();
	    Rw = Ch;
	    if(Rw < 255)
    	{
	      system("cls");
	      eqn();
	    }
      }
  }
  else
  {
  	gotoxy(68,21);
  	printf("! Invalid Operation !");
  	gotoxy(68,22);
  	printf("Given function is not a cubic eqn.");
  }
        gotoxy(68,24);
        printf("Press any key to return back.");
	    Ch=getch();
	    Rw = Ch;
	    if(Rw < 255)
    	{
	      system("cls");
	      eqn();
	    }
}
//defining void linear1()

void linear1()
{
    float A1 , B1 , C1 , A2 , B2 , C2 ;
	int i , j , k , a , c;
	char ch;
	gotoxy(68,12);
    printf("A1x + B1y = C1");
    gotoxy(68,15);
    printf("Enter value of coefficients");
    gotoxy(68,16);
    printf("A1 = ");
	scanf("%f",&A1);
	gotoxy(68,17);
	printf("B1 = ");
	scanf("%f",&B1);
	gotoxy(68,18);
	printf("C1 = ");
	scanf("%f",&C1);
	gotoxy(68,20);
    printf("A2x + B2y = C1");
    gotoxy(68,21);
    printf("A2 = ");
	scanf("%f",&A2);
	gotoxy(68,22);
	printf("B2 = ");
	scanf("%f",&B2);
	gotoxy(68,23);
	printf("C2 = ");
	scanf("%f",&C2);

	float A[2][2] = {A1,B1,A2,B2};
	float C[2][1] = {C1,C2};
	float X[2][1];

	float D = (A1*B2) - (B1*A2);
	D = 1 / D;
	
	float adjA[2][2] = {B2,-B1,-A2,A1};

	float invA[2][2];

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			invA[i][j] = D * adjA[i][j];
		}
	} 
    int product;
    for(i=0;i<2;i++)
	{
		for(j=0;j<1;j++)
		{
			product = 0;
			for(k=0;k<2;k++)
			{
				product = product + invA[i][k] * C[k][j];
			}
			X[i][j] = product;
		}
	}
    gotoxy(68,25);
	printf("x = %.4f",X[0][0]);
	gotoxy(68,26);
	printf("y = %.4f",X[1][0]);
	gotoxy(68,28);
    printf("Press any key to return back.");
    c=getch();
    a = c;
    if(a < 255)
  	{
      system("cls");
      eqn();
    }
}
//defining void linear2()
void linear2()
{
    float A1 , B1 , C1 , A2, B2 , C2 , A3 , B3 , C3 , D1 , D2 , D3;
	float a1 , a2 , a3 , b1 , b2 , b3 , c1 , c2 , c3;
	int i , j , k;
    char ch , Rw;
    gotoxy(68,12);
	printf("A1x + B1y + C1z = Dn1");
	gotoxy(68,14);
	printf("A1 = ");
	scanf("%f",&A1);
	gotoxy(68,15);
	printf("B1 = ");
	scanf("%f",&B1);
	gotoxy(68,16);
	printf("C1 = ");
	scanf("%f",&C1);
	gotoxy(68,17);
	printf("D1 = ");
	scanf("%f",&D1);

    gotoxy(68,19);
	printf("A2x + B2y + C2z = Dn2");
	gotoxy(68,21);
	printf("A2 = ");
	scanf("%f",&A2);
	gotoxy(68,22);
	printf("B2 = ");
	scanf("%f",&B2);
	gotoxy(68,23);
	printf("C2 = ");
	scanf("%f",&C2);
	gotoxy(68,24);
	printf("D2 = ");
	scanf("%f",&D2);

    gotoxy(68,26);
	printf("A3x + B3y + C3z = Dn3");
	gotoxy(68,28);
	printf("A3 = ");
	scanf("%f",&A3);
	gotoxy(68,29);
	printf("B3 = ");
	scanf("%f",&B3);
	gotoxy(68,30);
	printf("C3 = ");
	scanf("%f",&C3);
	gotoxy(68,31);
	printf("D3 = ");
	scanf("%f",&D3);

	float A[3][3] = {A1,B1,C1,A2,B2,C2,A3,B3,C3};
	float C[3][1] = {D1,D2,D3};
    float X[3][1];

	float d = (A1 * ((B2*C3)-(B3*C2))) - (B1 * ((A2*C3) - (A3*C2))) + (C1 * ((A2*B3) - (B2*A3)));

	a1 = (B2*C3) - (B3*C2);
	b1 = -((A2*C3) - (A3*C2));
	c1 = (A2 * B3) - (B2*A3);
	a2 = -((B1*C3) - (C1*B3));
	b2 = (A1*C3) - (C1*A3);
	c2 = -((A1*B3) - (B1*A3));
	a3 = (B1*C2) - (C1*B2);
	b3 = -((A1*C2) - (C1*A2));
	c3 = (A1*B2) - (B1*A2);

	float adjA[3][3] = {a1,a2,a3,b1,b2,b3,c1,c2,c3};
    
	int product;
	for(i=0;i<3;i++)
	{
		for(j=0;j<1;j++)
		{
			product = 0;
			for(k=0;k<3;k++)
			{
				product = product + adjA[i][k] * C[k][j];
			}
			X[i][j] = product;
		}
	}
    gotoxy(68,33);
	printf("X = %.2f",X[0][0]/d);
	gotoxy(68,34);
	printf("Y = %.2f",X[1][0]/d);
	gotoxy(68,35);
	printf("Z = %.2f",X[2][0]/d);
	gotoxy(68,37);
    printf("Press any key to return back.");
    ch=getch();
    Rw = ch;
    if(Rw < 255)
  	{
      system("cls");
      eqn();
    }
	
}

//defining void permutation()

void permutation()
{
	int n, r, i, fact1 = 1, fact2 = 1, diff, p , a;
	char ch;
	gotoxy(68,12);
	printf("nPr");
	gotoxy(68,15);
	printf("n = ");
	scanf("%d", &n);
	gotoxy(68,16);
	printf("r = ");
	scanf("%d", &r);
	for (i = 1; i <= n; i++)
	{
		fact1 = fact1 * i;
	}
	diff = n - r;
	for (i = 1; i <= diff; i++)
	{
		fact2 = fact2 * i;
	}
	p = fact1 / fact2;
	gotoxy(68,18);
	printf("Permutation for n=%d and r=%d = %d", n, r, p);
    gotoxy(68,21);
	printf("Press any key to return back.");
    ch=getch();
    a = ch;
    if(a < 255)
  	{
      system("cls");
      per_comb();
    }
}

//defining void combination()

void combination()
{
	int n, r, i, fact1 = 1, fact2 = 1, fact3 = 1, diff, c , a;
	char ch;
	gotoxy(68,12);
	printf("nCr");
	gotoxy(68,15);
	printf("n = ");
	scanf("%d", &n);
	gotoxy(68,16);
	printf("r = ");
	scanf("%d", &r);
	for (i = 1; i <= n; i++)
	{
		fact1 = fact1 * i;
	}
	diff = n - r;
	for (i = 1; i <= diff; i++)
	{
		fact2 = fact2 * i;
	}
	for (i = 1; i <= r; i++)
	{
		fact3 = fact3 * i;
	}
	c = (fact1) / (fact2 * fact3);
	gotoxy(68,18);
	printf("Combination of n=%d and r=%d = %d", n, r, c);
	gotoxy(68,20);
	printf("Press any key to return back.");
    ch=getch();
    a = ch;
    if(a < 255)
  	{
      system("cls");
      per_comb();
    }
}

//Unit convertion starts from here
void area()
{
	float inarea , outarea;
	char ch1 , ch2 , b , ch;
	int a;
    gotoxy(68,15);
	printf("1. SQ KILOMETER to - ");
	gotoxy(68,16);
	printf("2. SQ METER to - ");
	gotoxy(68,17);
	printf("3. SQ CENTIMETERMETER to - ");
	gotoxy(68,18);
	printf("4. HECTARE to - ");
	gotoxy(68,19);
	printf("5. SQ MILE to - ");
	gotoxy(68,20);
    printf("6. SQ YARD to - ");
    gotoxy(68,21);
	printf("7. SQ FOOT to - ");
	gotoxy(68,22);
	printf("8. SQ INCH to - ");
	gotoxy(68,23);
	printf("9. ACRE to - ");
	gotoxy(68,26);
	printf("<--(b/B)- Back");
	gotoxy(68,27);
	printf("<--(E/e)- Exit");
    fflush(stdin);
	ch1 = getch();
	system("cls");
	switch(ch1)
	{
		case '1' :
         gotoxy(68,12);
		 printf("1. SQ KILOMETER to - ");
		 gotoxy(68,15);
		 printf("a) ----SQ METER");
		 gotoxy(68,16);
	     printf("b) ----SQ CENTI_METER");
	     gotoxy(68,17);
	     printf("c) ----HECTARE");
	     gotoxy(68,18);
	     printf("d) ----SQ MILE");
	     gotoxy(68,19);
	     printf("e) ----SQ YARD");
	     gotoxy(68,20);
	     printf("f) ----SQ FOOT");
	     gotoxy(68,21);
	     printf("g) ----SQ INCH");
	     gotoxy(68,22);
	     printf("h) ----ACRE");
	     gotoxy(68,25);
         printf("<-- (B)-Back");
         gotoxy(68,26);
	     printf("<-- (E)-exit");
		 ch2 = getch();
		 system("cls");
		 switch(ch2)
		 {
			 case 'a' :
			 	gotoxy(68,15);
			   printf("Enter value in Sq Km : ");
			   scanf("%f",&inarea);

			   outarea = inarea * 1000000;
			   gotoxy(68,17);
			   printf("Value in Sq Metre = %.4f",outarea);
			   gotoxy(68,20);
			   printf("Press any key to return back.");
               ch=getch();
               a = ch;
               if(a < 255)
  	            {
                  system("cls");
                  area();
                }
	            break;
			 
			 case 'b' :
			 	gotoxy(68,15);
			   printf("Enter value in Sq Km : ");
			   scanf("%f",&inarea); 
			   
			   outarea = inarea * 10000000000;
			   gotoxy(68,17);
			   printf("Value in Sq Centi_Metre = %.4f",outarea);
			   gotoxy(68,19);
			   printf("Press any key to return back.");
               ch=getch();
               a = ch;
               if(a < 255)
  	           {
                  system("cls");
                  area();
               }
	            break;
			 
			 case 'c' :   
			   gotoxy(68,15);
			   printf("Enter value in Sq Km : ");
			   scanf("%f",&inarea); 
			   
			   outarea = inarea * 100;
			   gotoxy(68,17);
			   printf("Value in Hectare = %.4f",outarea);
			   gotoxy(68,20);
			   printf("Press any key to return back.");
               ch=getch();
               a = ch;
               if(a < 255)
  	           {
                  system("cls");
                  area();
               }
	            break;
			   
			 case 'd' :
			 	gotoxy(68,15);
			   printf("Enter value in Sq Km : ");
			   scanf("%f",&inarea); 
			   
			   outarea = inarea * 0.3861;
			   gotoxy(68,17);
			   printf("Value in Sq Mile = %.4f",outarea);
			    gotoxy(68,20);
			   printf("Press any key to return back.");
               ch=getch();
               a = ch;
               if(a < 255)
  	           {
                  system("cls");
                  area();
               }
	            break;
			  
			 case 'e' :
			 	gotoxy(68,15);
			    printf("Enter value in Sq Km : ");
			   scanf("%f",&inarea);
			   
			   outarea = inarea * 1195990.0463; 
			   gotoxy(68,17);
			   printf("Value in Sq Yard = %.4f",outarea);
			   gotoxy(68,20);
			   printf("Press any key to return back.");
               ch=getch();
               a = ch;
               if(a < 255)
  	           {
                  system("cls");
                  area();
               }
	            break;
			   
			 case 'f' :
			 	 gotoxy(68,15);
			     printf("Enter value in Sq Km : ");
			     scanf("%f",&inarea);
			   
			   outarea = inarea * 10763910.4167;
			   gotoxy(68,17);
			   printf("Value in Sq Foot = %.4f",outarea);
			   gotoxy(68,20);
			   printf("Press any key to return back.");
               ch=getch();
               a = ch;
               if(a < 255)
  	           {
                  system("cls");
                  area();
               }
	            break;
			   
			 case 'g' :
			 	gotoxy(68,15);
			    printf("Enter value in Sq Km : ");
			   scanf("%f",&inarea);
			   outarea = inarea * 1550003100.0062;
			   gotoxy(68,17);
			   printf("Value in Sq Inch = %.4f",outarea);
			    gotoxy(68,20);
			   printf("Press any key to return back.");
               ch=getch();
               a = ch;
               if(a < 255)
  	           {
                  system("cls");
                  area();
               }
			   break;
			 case 'h' :
			 	gotoxy(68,15);
			    printf("Enter the value in Sq Km : ");
				scanf("%f",&inarea);
				outarea = inarea * 247.1054;
				gotoxy(68,17);
				printf("Value in Sq Acre = %.4f",outarea);
				gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
	            break;
			 case 'B' :
			     area();
				 break;
		     case 'E' :		 	 	 
			     exit(0);
				 break; 
			 default :
                gotoxy(68,19);
                printf("Please enter valid option !");
                gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		 }
		 break;

	    case '2' :
			
	     gotoxy(68,12);
		 printf("2. SQ METER to - ");
		 gotoxy(68,15);
		 printf("a) ----SQ KILOMETER");
		 gotoxy(68,16);
	     printf("b) ----SQ CENTI_METER");
	     gotoxy(68,17);
	     printf("c) ----HECTARE");
	     gotoxy(68,18);
	     printf("d) ----SQ MILE");
	     gotoxy(68,19);
	     printf("e) ----SQ YARD");
	     gotoxy(68,20);
	     printf("f) ----SQ FOOT");
	     gotoxy(68,21);
	     printf("g) ----SQ INCH");
         gotoxy(68,22);
	     printf("h) ----ACRE"); 
	     gotoxy(68,25);
		 printf("<--(B)-Back");
		 gotoxy(68,26);
		 printf("<--(E)-Exit");
	     
	     ch2 = getch();
		 system("cls");
		 
		 switch(ch2)
		 {
		 	case 'a' :
		 		gotoxy(68,15);
		 		printf("Enter value in Sq Meter : ");
		 		scanf("%f",&inarea);
		 		
		 		outarea = inarea / 1000000;
		 		gotoxy(68,17);
		 		printf("Value in Sq Km = %.4f",outarea);
		 		
				gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
				break;
			case 'b' :
				gotoxy(68,15);
			    printf("Enter value in Sq Meter : ");
		 		scanf("%f",&inarea);
				 
				 outarea = inarea * 10000;
				 gotoxy(68,17);
				 printf("Value in Sq Cm = %.4f",outarea);	
				  gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
			     break;
			 case 'c' :
			 	gotoxy(68,15);
			    printf("Enter value in Sq Meter : ");
		 		scanf("%f",&inarea);
				 
				 outarea = inarea * 0.00001;
				 gotoxy(68,17);
				 printf("Value in Hectare = %.4f",outarea);    
				  gotoxy(68,20);
				 printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
				break;
			case 'd' :
				gotoxy(68,15);
			   	printf("Enter value in Sq Meter : ");
		 		scanf("%f",&inarea);
				 
				 outarea = inarea / 2589988.1103;
				 gotoxy(68,17);
				 printf("Value in Sq Mile = %.5f",outarea);  
			    
				 gotoxy(68,20);
			     printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
			    break;
		 	case 'e' :	
		 	    gotoxy(68,15);
		 	    printf("Enter value in Sq Meter : ");
		 		scanf("%f",&inarea);
		 		
		 		outarea = inarea * 1.196;
		 		gotoxy(68,17);
				printf("Value in Sq Yard = %.4f",outarea);
				 gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
				break;   
			case 'f' :
				gotoxy(68,15);
			    printf("Enter value in Sq Meter : ");
		 		scanf("%f",&inarea); 
				outarea = inarea * 10.7639;
				gotoxy(68,17);
				printf("Value in Sq Foot = %.4f",outarea); 
				 gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
				break; 
			case 'g' :
			    gotoxy(68,15);	   
			    printf("Enter value in Sq Meter : ");
		 		scanf("%f",&inarea);
				 outarea = inarea * 1550.0031;
				 gotoxy(68,17);
				 printf("Value in Sq Inch = %.4f",outarea); 
				  gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
	            break;
			case 'h' :
				gotoxy(68,15);
			     printf("Enter value in Sq Meter : ");
		 		 scanf("%f",&inarea);	
				 outarea = inarea * 0.0002;
				 gotoxy(68,17);
				 printf("Value in Sq Acre = %.4f",outarea); 
				  gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
				break; 
			case 'B' :
			    area();
				break;
			case 'E' :
			   exit(0);
			   break;	
			default :
				gotoxy(68,19);
				printf("Please enter valid option !");
				gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }   			 
		 }
		  
	     break;

		case '3' :
		 	gotoxy(68,12);
		  printf("3. SQ CENTIMETER to -");
		  gotoxy(68,15);	
		  printf("a) ----SQ KILOMETER");
		  gotoxy(68,16);
	      printf("b) ----SQ METER");
	      gotoxy(68,17);
	      printf("c) ----HECTARE");
	      gotoxy(68,18);
	      printf("d) ----SQ MILE");
	      gotoxy(68,19);
	      printf("e) ----SQ YARD");
	      gotoxy(68,20);
	      printf("f) ----SQ FOOT");
	      gotoxy(68,21);
	      printf("g) ----SQ INCH");
	      gotoxy(68,22);
	      printf("h) ----ACRE");
	      gotoxy(68,25);
		  printf("<--(B)-Back");
		  gotoxy(68,26);
		  printf("<--(E)-Exit");

		  ch2 = getch();
		  system("cls");

		  switch(ch2)
		  {
			  case 'a' :
			  	gotoxy(68,15);;
			     printf("Enter value in Sq Centimeter : ");
				 scanf("%f",&inarea);
				 outarea = inarea / 10000000000;
                 gotoxy(68,17);
				 printf("Value in Sq Km = %.4f",outarea);
                  gotoxy(68,20);
			     printf("Press any key to return back.");
                 ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
	            break;
			  case 'b' :
			  	gotoxy(68,15);
			     printf("Enter value in Sq Centimeter : ");
				 scanf("%f",&inarea); 
				 outarea = inarea * 0.0001;
                 gotoxy(68,17);
                 printf("Value in Sq Meter = %.7f",outarea);
                  gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
	            break;
			  case 'c' :
			  	gotoxy(68,15);
			     printf("Enter value in Sq Centimeter : ");
				 scanf("%f",&inarea);
				 outarea = inarea / 100000000;	 
                 gotoxy(68,17);
				 printf("Value in Hectare = %.4f",outarea);
                 gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
	            break;
			  case 'd' :
			  	gotoxy(68,15);
			     printf("Enter value in Sq Centimeter : ");
				 scanf("%f",&inarea);
				 outarea = inarea / 25899881103.36;
                  gotoxy(68,17);
				 printf("Value in Sq Mile = %.4f",outarea);
                 gotoxy(68,20);
			     printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
				 break;
			  case 'e' :
			  	gotoxy(68,15);
			     printf("Enter value in Sq Centimeter : ");
				 scanf("%f",&inarea);
				 outarea = inarea * 0.0001;
                 gotoxy(68,17);
				 printf("Value in Sq Yard = %.7f",outarea);
                 gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                } 
				 break;
             case 'f' :
             	gotoxy(68,15);
			     printf("Enter value in Sq Centimeter : ");
				 scanf("%f",&inarea);
				 outarea = inarea * 0.0011;
                  gotoxy(68,17);
				 printf("Value in Sq Foot = %.7f",outarea);
                 gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
				 break;
			  case 'g' :
			  	gotoxy(68,15);
			     printf("Enter value in Sq Centimeter : ");
				 scanf("%f",&inarea);
				 outarea = inarea * 0.155;
                 gotoxy(68,17);
				 printf("Value in Sq Inch = %.7f",outarea);
                 gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
				 break;
			  case 'h' :
			  	gotoxy(68,15);
			     printf("Enter value in Sq Centimeter : ");
				 scanf("%f",&inarea);
				 outarea = inarea / 40468564.224;	 
                 gotoxy(68,17);
                 printf("Value in Acre = %.7f",outarea);
                 gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
				 break;
			  case 'B' :
			      area();
				  break;
			  case 'E' :
			     exit(0);
				 break;	 
			  default :
			  	gotoxy(68,19);
			  	printf("Please enter valid option !");
			  	gotoxy(68,20);
			     printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }	 	  	 
		  }
	      break;

		case '4' :
		 	gotoxy(68,12);
		  printf("4. HECTARE to -");
		  gotoxy(68,15);	
	      printf("a) ----SQ KILOMETER");
	      gotoxy(68,16);
	      printf("b) ----SQ METER");
	      gotoxy(68,17);
	      printf("c) ----SQ CENTI_METER");
	      gotoxy(68,18);
	      printf("d) ----SQ MILE");
	      gotoxy(68,19);
	      printf("e) ----SQ YARD");
	      gotoxy(68,20);
	      printf("f) ----SQ FOOT");
	      gotoxy(68,21);
	      printf("g) ----SQ INCH");
	      gotoxy(68,22);
	      printf("h) ----ACRE");
		  gotoxy(68,25);	 
		  printf("<--(B)-Back");
		  gotoxy(68,26);
		  printf("<--(E)-Exit");

		  ch2 = getch();
		  system("cls");

		  switch(ch2)
		  {
			  case 'a' :
			  	gotoxy(68,15);
			    printf("Enter value in Hectare : ");
				scanf("%f",&inarea);
				outarea = inarea * 0.01;
                gotoxy(68,17);
				printf("Value in Sq Km = %.4f",outarea);
				gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
				break;
			  case 'b' :
			  	gotoxy(68,15);
			    printf("Enter value in Hectare : ");
				scanf("%f",&inarea);
				outarea = inarea * 10000;
                gotoxy(68,17);
				printf("Value in Sq Meter = %.4f",outarea);
				gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
				break;	  
			  case 'c' :
			  	gotoxy(68,15);
			    printf("Enter value in Hectare : ");
				scanf("%f",&inarea);	
				outarea = inarea * 100000000;
                gotoxy(68,17);
				printf("Value in Sq Cm = %.4f",outarea);
				gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
				break;
			  case 'd' :
			  	gotoxy(68,15);
			    printf("Enter value in Hectare : ");
				scanf("%f",&inarea);	
				outarea = inarea * 0.0039;
                gotoxy(68,17);
				printf("Value in Sq Mile = %.4f",outarea);
				gotoxy(68,20);
			   area();
				break;
			  case 'e' :	
			   gotoxy(68,15);
                printf("Enter value in Hectare : ");
				scanf("%f",&inarea);
				outarea = inarea * 11959.9005;
                gotoxy(68,17); 
				printf("Value in Sq Yard = %.4f",outarea);
				gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
				break;
			  case 'f' :
			  	gotoxy(68,15);
                printf("Enter value in Hectare : ");
				scanf("%f",&inarea);
				outarea = inarea * 107639.1042;
                gotoxy(68,17);
				printf("Value in Sq Foot = %.4f",outarea);
				gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
				break;
			  case 'g' :
			  	gotoxy(68,15);
			    printf("Enter value in Hectare : ");
				scanf("%f",&inarea);
				outarea = inarea * 15500031.0001;
                gotoxy(68,17);
				printf("Value in Sq Inch = %.4f",outarea);
				gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
				break;
              case 'h' :
              	gotoxy(68,15);
			    printf("Enter value in Hectare : ");
				scanf("%f",&inarea);
				outarea = inarea * 2.4711;
                gotoxy(68,17);
				printf("Value in Acre = %.4f",outarea);
				gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  unit_converter();
                }
				break;
			  case 'E' :
			     exit(0);
				 break;
			  case 'B' :
			      area();
				  break;	 	
              default :
              	gotoxy(68,19);
              	printf("Please enter valid option !");
              	gotoxy(68,20);
				printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		  }
	      break;
		case '5' :
		 gotoxy(68,12);	
		  printf("5. SQ MILE to -");
		  gotoxy(68,15);	
	      printf("a) ----SQ KILOMETER");
	      gotoxy(68,16);
	      printf("b) ----SQ METER");
	      gotoxy(68,17);
	      printf("c) ----SQ CENTI_METER");
	      gotoxy(68,18);
	      printf("d) ----SQ HECTARE");
	      gotoxy(68,19);
	      printf("e) ----SQ YARD");
	      gotoxy(68,20);
	      printf("f) ----SQ FOOT");
	      gotoxy(68,21);
	      printf("g) ----SQ INCH");
	      gotoxy(68,22);
	      printf("h) ----ACRE");
		  gotoxy(68,25);	 
		  printf("<--(B)-Back");
		  gotoxy(68,26);
		  printf("<--(E)-Exit");  
		  
		  ch2 = getch();
		  system("cls");
		  
		  switch(ch2)
		  {
		     case 'a' :	
		         gotoxy(68,15);
                 printf("Enter value in Sq Mile : ");
				 scanf("%f",&inarea);
				 outarea = inarea * 2.59;
				 gotoxy(68,17);
				 printf("Value in Sq km = %.4f",outarea);
				 gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
				 break;
			 
			 case 'b' :
			 	gotoxy(68,15);
			 	 printf("Enter value in Sq Mile : ");
				 scanf("%f",&inarea);	 
				 outarea = inarea * 2589988.1103;
				 gotoxy(68,17);
				 printf("Value in Sq Metre = %.4f",outarea);
				 gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
				 break;
				 
			 case 'c' :
			 	gotoxy(68,15);
			     printf("Enter value in Sq Mile : ");
				 scanf("%f",&inarea); 
				 outarea = inarea * 25899881103.36;
				 gotoxy(68,17);
				 printf("Value in Sq Cm = %.4f",outarea);
				 gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
				 break; 
				 
			 case 'd' :
			 	gotoxy(68,15);
			     printf("Enter value in Sq Mile : ");
				 scanf("%f",&inarea);
				 outarea = inarea * 258.9988;
				 gotoxy(68,17);
				 printf("Value in Hectare = %.4f",outarea);
				 gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
				 break;
				 
			 case 'e' :
			 	gotoxy(68,15);
			     printf("Enter value in Sq Mile : ");
				 scanf("%f",&inarea);	 
				 outarea = inarea * 3097600;
				 gotoxy(68,17);
				 printf("Value in Sq Yard = %.4f",outarea);
				 gotoxy(68,20);
			     printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
				 break;	 
			
			 case 'f' :
			 	gotoxy(68,15);
			     printf("Enter value in Sq Mile : ");
				 scanf("%f",&inarea);
				 outarea = inarea * 27878400;
				 gotoxy(68,17);
				 printf("Value in Sq Foot = %.4f",outarea);
				gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
				 break;	
				 
		     case 'g' :
		     	gotoxy(68,15);
			     printf("Enter value in Sq Mile : ");
				 scanf("%f",&inarea); 
				 outarea = inarea * 4014489600;
				 gotoxy(68,17);
				 printf("Value in Sq Inch = %.4f",outarea);
				 gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
				 break;				
			 case 'h' :
			 	gotoxy(68,15);
			     printf("Enter value in Sq Mile : ");
				 scanf("%f",&inarea); 
				 outarea = inarea * 640;
				 gotoxy(68,17);
				 printf("Value in Acre = %.4f",outarea);
				gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
				 break;				
			 case 'E' :
			     exit(0);
				 break;			
			 case 'B' :
			     area();
				 break;	 	 				 	 
			  default :
			  	gotoxy(68,19);
			  	printf("Please enter valid option !");
			  	gotoxy(68,20);
			  	printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		  } 
		  break;
		case '6' :
		 	gotoxy(68,12);
		  printf("6. SQ YARD to- ");
		  gotoxy(68,15);	
		  printf("a) ----SQ KILOMETER");
		  gotoxy(68,16);
	      printf("b) ----SQ METER");
	      gotoxy(68,17);
	      printf("c) ----SQ CENTI_METER");
	      gotoxy(68,18);
	      printf("d) ----SQ HECTARE");
	      gotoxy(68,19);
	      printf("e) ----SQ MILE");
	      gotoxy(68,20);
	      printf("f) ----SQ FOOT");
	      gotoxy(68,21);
	      printf("g) ----SQ INCH");
	      gotoxy(68,22);
	      printf("h) ----ACRE");
	      gotoxy(68,25);
	      printf("<--(B)-Back");
	      gotoxy(68,26);
		  printf("<--(E)-Exit");

		  ch2 = getch();
		  system("cls");
		  
		  switch(ch2)
		  {
		  	 case 'a' :
		  	 	gotoxy(68,15);
		  		printf("Enter value in Sq Yard : ");
		  		scanf("%f",&inarea);	
		  		outarea = inarea / 1195990.0463;
		  		gotoxy(68,17);
		  		printf("Value in Sq Km = %.5f",outarea);
		  		gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	break;	    	
		     case 'b' :	
		     gotoxy(68,15);
		        printf("Enter value in Sq Yard : ");
		  		scanf("%f",&inarea);
		  		outarea = inarea * 0.8361;
		  		gotoxy(68,17);
		  		printf("Value in Sq Meter = %.4f",outarea);
		  			gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	break;	  		
		  	 case 'c' :
		  	 	gotoxy(68,15);
			    printf("Enter value in Sq Yard : ");
		  		scanf("%f",&inarea);	  
				outarea = inarea * 8361.2736;
				gotoxy(68,17);
				printf("Value in Sq Cm = %.4f",outarea);
		  		gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	break;		    	
		     case 'd' :
		     	gotoxy(68,15);
			    printf("Enter value in Sq Yard : ");
		  		scanf("%f",&inarea);	  
				outarea = inarea * 0.0001;
				gotoxy(68,17);
				printf("Value in Hectare = %.4f",outarea);
		  		gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	break;  				
		     case 'e' :
		     	gotoxy(68,15);
			    printf("Enter value in Sq Yard : ");
		  		scanf("%f",&inarea); 
				outarea = inarea / 3097600;
				gotoxy(68,17);
				printf("Value in Sq Mile = %.4f",outarea);
		  		gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	break;   					
			 case 'f' :
			 	gotoxy(68,15);
			    printf("Enter value in Sq Yard : ");
		  		scanf("%f",&inarea); 
				outarea = inarea * 9;
				gotoxy(68,17);  			
				printf("Value in Sq Foot = %.4f",outarea);
		  		gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	break;		    	
		     case 'g' :
		     	gotoxy(68,15);
			    printf("Enter value in Sq Yard : ");
		  		scanf("%f",&inarea);	  
				outarea = inarea * 1296;
				gotoxy(68,17);
				printf("Value in Sq Inch = %.4f",outarea);
		  		gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	break;  			
			 case 'h' :
			 	gotoxy(68,15);
			   	printf("Enter value in Sq Yard : ");
		  		scanf("%f",&inarea);	  
				outarea = inarea * 0.0002;
				gotoxy(68,17);
				printf("Value in Acre = %.4f",outarea);
		  		gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	break;			
			 case 'B' :
			    area();
				break;			
			 case 'E' :
			     exit(0);
				 break;	
			  default :
			  	gotoxy(68,19);
			  	printf("Please enter valid option !");
			  	gotoxy(68,20);
			     printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }	 	  			  	
		  }
		  break;
		case '7' :
	     	gotoxy(68,12);
		    printf("7. SQ FOOT to- ");
		    gotoxy(68,15);		
		    printf("a) ----SQ KILOMETER");
		    gotoxy(68,16);
	        printf("b) ----SQ METER");
	        gotoxy(68,17);
	        printf("c) ----SQ CENTI_METER");
	        gotoxy(68,18);
	        printf("d) ----SQ HECTARE");
	        gotoxy(68,19);
	        printf("e) ----SQ MILE");
	        gotoxy(68,20);
	        printf("f) ----SQ YARD");
	        gotoxy(68,21);
	        printf("g) ----SQ INCH");
	        gotoxy(68,22);
	        printf("h) ----ACRE");
	        gotoxy(68,25);
	        printf("<--(B)-Back");
	        gotoxy(68,26);
            printf("<--(E)-Exit");
		    ch2 = getch();
		    system("cls");
		  switch(ch2)
		  {
		  	case 'a' :
		  		gotoxy(68,15);
		  		printf("Enter value in Sq Foot : ");
		  		scanf("%f",&inarea);
		  		outarea = inarea / 10763910.4167;
		  		gotoxy(68,17);
		  		printf("Value in Sq Km = %.9f",outarea);
		  		gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	break;		    	
		    case 'b' :
		    	gotoxy(68,15);
			    printf("Enter value in Sq Foot : ");
		  		scanf("%f",&inarea);	  
				outarea = inarea * 0.0929;
				gotoxy(68,17);
				printf("Value in Sq Meter = %.4f",outarea);
		  		gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	break;  		  		
		  	case 'c' :
		  		gotoxy(68,15);
			    printf("Enter value in Sq Foot : ");
		  		scanf("%f",&inarea);  
				outarea = inarea * 929.0304; 
				gotoxy(68,17);
				printf("Value in Sq Cm = %.4f",outarea);
		  		gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	break;			
			case 'd' :
				gotoxy(68,15);
			   	printf("Enter value in Sq Foot : ");
		  		scanf("%f",&inarea);	  
				outarea = inarea / 107639.1042;
				gotoxy(68,17);
				printf("Value in Hectare = %.9f",outarea);
		  		gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	break;    			    	
		    case 'e' :
		    	gotoxy(68,15);
			    printf("Enter value in Sq Foot : ");
		  		scanf("%f",&inarea);	  
				outarea = inarea / 27878400;
				gotoxy(68,17);
				printf("Value in Sq Mile = %.9f",outarea);
		  	    gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	break;  		
			case 'f' :
				gotoxy(68,15);
				printf("Enter value in Sq Foot : ");
		  		scanf("%f",&inarea);		  
				outarea = inarea * 0.1111;
				gotoxy(68,17);
				printf("Value in Sq Yard = %.4f",outarea);
				gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	break;  	    	
		    case 'g' :
		    	gotoxy(68,15);
			   	printf("Enter value in Sq Foot : ");
		  		scanf("%f",&inarea);
		  		outarea = inarea * 144;
		  		gotoxy(68,17);
		  		printf("Value in Sq Inch = %.4f",outarea);
		  		gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	break;		    	
		    case 'h' :
		    	gotoxy(68,15);
			    printf("Enter value in Sq Foot : ");
		  		scanf("%f",&inarea);	  
				outarea = inarea / 43560;
				gotoxy(68,17);
				printf("Value in Acre = %.7f",outarea);
		  		gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	break;  		    	
		    case 'E' :
			    exit(0);
				break;		
			case 'B' :
			   area();
			   break;
			default :
				gotoxy(68,19);
				printf("Please enter valid option !");
				gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }  		
		  }
		  break;
		case '8' :
		  gotoxy(68,12);
		  printf("8. SQ INCH to-");
		  gotoxy(68,15);	
		  printf("a) ----SQ KILOMETER");
		  gotoxy(68,16);
	      printf("b) ----SQ METER");
	      gotoxy(68,17);
	      printf("c) ----SQ CENTI_METER");
	      gotoxy(68,18);
	      printf("d) ----SQ HECTARE");
	      gotoxy(68,19);
	      printf("e) ----SQ MILE");
	      gotoxy(68,20);
	      printf("f) ----SQ YARD");
	      gotoxy(68,21);
	      printf("g) ----SQ FOOT");
	      gotoxy(68,22);
	      printf("h) ----ACRE");
	      gotoxy(68,25);
		  printf("<--(B)-Back");
		  gotoxy(68,26);
          printf("<--(E)-Exit");

		  ch2 = getch();
		  system("cls");
		  
		  switch(ch2)
		  {
		      case 'a' :
		      	  gotoxy(68,15);
			      printf("Enter value in Sq Inch : ");
				  scanf("%f",&inarea); 
				  outarea = inarea / 15550003100.0062;
				  gotoxy(68,17);
				  printf("Value in Sq Km = %.9f",outarea);
		  		  gotoxy(68,20);
			      printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	  break;		  
			  case 'b' :
			  	gotoxy(68,15);
			      printf("Enter value in Sq Inch : ");
				  scanf("%f",&inarea);	  
				  outarea = inarea * 0.0006;
				  gotoxy(68,17);
				  printf("Value in Sq Meter = %.4f",outarea);
		  		  gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	  break;			  
			  case 'c' :
			  	gotoxy(68,15);
			      printf("Enter value in Sq Inch : ");
				  scanf("%f",&inarea);	  
				  outarea = inarea * 6.4516;
				  gotoxy(68,17);
				  printf("Value in Sq Cm = %.4f",outarea);
				  gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	  break;			  
			  case 'd' :
			  	  gotoxy(68,15);
			  	  printf("Enter value in Sq Inch : ");
				  scanf("%f",&inarea);	  
				  outarea = inarea / 15500031.0001;
				  gotoxy(68,17);
				  printf("Value in Hectare = %.9f",outarea);
		  		  gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	  break;	 			  
			  case 'e' :
			  	  gotoxy(68,15);
			      printf("Enter value in Sq Inch : ");
				  scanf("%f",&inarea);
				  outarea = inarea / 4014489600;
				  gotoxy(68,17);
				  printf("Value in Sq Mile = %.9f",outarea);
		  		  gotoxy(68,20);
			   printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	  break;		
			  case 'f' :
			  	  gotoxy(68,15);
			      printf("Enter value in Sq Inch : ");
				  scanf("%f",&inarea);	  
				  outarea = inarea * 0.0008;
				  gotoxy(68,17);
				  printf("Value in Sq Yard = %.4f",outarea);
		  		  gotoxy(68,20);
			      printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	  break;			  
			  case 'g' :
			  	  gotoxy(68,15);
			      printf("Enter value in Sq Inch : ");
				  scanf("%f",&inarea);	 				  
				  outarea = inarea * 0.0069;
				  gotoxy(68,17);
				  printf("Value in Sq Foot = %.4f",outarea);
		  		  gotoxy(68,20);
			      printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	  break; 
				  
			  case 'h' :
			  	  gotoxy(68,15);
			      printf("Enter value in Sq Inch : ");
				  scanf("%f",&inarea);				  
				  outarea = inarea / 6272640;
				  gotoxy(68,17);
				  printf("Value in Acre = %.9f",outarea);
		  		  gotoxy(68,20);
			      printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	  break;			  
		      case 'E' :
			     exit(0);
				 break;			
		      case 'B' :
			     area();
				 break;	
			  default :
			  	gotoxy(68,19);
			  	printf("Please enter valid optionn !");
			  	gotoxy(68,20);
			      printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }	 	 		  	  	  	   	  	
		  }     
		  break;
	     	gotoxy(68,12);
		  printf("9. ACRE to- ");
		  gotoxy(68,15);		
		  printf("a) ----SQ KILOMETER");
		  gotoxy(68,16);
	      printf("b) ----SQ METER");
	      gotoxy(68,17);
	      printf("c) ----SQ CENTI_METER");
	      gotoxy(68,18);
	      printf("d) ----SQ HECTARE");
	      gotoxy(68,19);
	      printf("e) ----SQ MILE");
	      gotoxy(68,20);
	      printf("f) ----SQ YARD");
	      gotoxy(68,21);
	      printf("g) ----SQ FOOT");
	      gotoxy(68,22);
	      printf("h) ----SQ INCH\n"); 
	      gotoxy(68,25);
	      printf("<--(B)-Back");
	      gotoxy(68,26);
          printf("<--(E)-Exit");
          
          ch2 = getch();
          system("cls");
          
          switch(ch2)
          {
          	case 'a' :
          		gotoxy(68,15);
          		printf("Enter value in Acre : ");
          		scanf("%f",&inarea);
          		outarea = inarea * 0.004;
          		gotoxy(68,17);
          		printf("Value in Sq Km = %.9f",outarea);
		  		gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	break;	    	  
		    case 'b' :
		    	gotoxy(68,15);
			    printf("Enter value in Acre : ");
          		scanf("%f",&inarea); 		  
				outarea = inarea * 4046.8564;
				gotoxy(68,17);
				printf("Value in Sq Meter = %.4f",outarea);
		  		gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	break;  	  	    	
		    case 'c' :
		    	gotoxy(68,15);
			    printf("Enter value in Acre : ");
          		scanf("%f",&inarea);
			    outarea = inarea * 40468564.224;
			    gotoxy(68,17);
				printf("Value in Sq Cm = %.4f",outarea);
		  		gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	break;	   	     	
			case 'd' :
				gotoxy(68,15);
			    printf("Enter value in Acre : ");
          		scanf("%f",&inarea);			  
				outarea = inarea * 0.4047;
				gotoxy(68,17);
				printf("Value in Hectare = %.4f",outarea);
				gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	break;   			
			case 'e' :
				gotoxy(68,15);
			    printf("Enter value in Acre : ");
          		scanf("%f",&inarea);			  
				outarea = inarea * 0.0016;
				gotoxy(68,17);
				printf("Value in Sq Mile = %.4f",outarea);
		  		gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	break; 				
			case 'f' :
				gotoxy(68,15);
			    printf("Enter value in Acre : ");
          		scanf("%f",&inarea);				  
				outarea = inarea * 4840;
				gotoxy(68,17);
				printf("Value in Sq Yard = %.4f",outarea);
		  		gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	break;  
				
		    case 'g' :
		    	gotoxy(68,15);
			    printf("Enter value in Acre : ");
          		scanf("%f",&inarea);				  
				outarea = inarea * 43560;
				gotoxy(68,17);
				printf("Value in Sq Foot = %.4f",outarea);
		  		gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	break;  			
			case 'h' :
				gotoxy(68,15);
			    printf("Enter value in Acre : ");
          		scanf("%f",&inarea);			  
				outarea = inarea * 6272640;
				gotoxy(68,17);
				printf("Value in Sq Inch = %.4f",outarea);
		  		gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
		    	break; 
			 case 'E' :
			     exit(0);
				 break;				
		      case 'B' :
			     area();
				 break;	
			  default :
			  	gotoxy(68,19);
			  	printf("Please enter valid option !");
			  	gotoxy(68,20);
			     printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }	   				  	
		  }
          break;     
          case 'B' :
          	unit_converter();
          	break;  	
          case 'b' :
		    unit_converter();
			break;
		 case 'E' :
		   exit(0);
		   break;   
		 case 'e' :
		   exit(0);
		   break;  	
		default :
			gotoxy(68,19);
			printf("Please enter valid option !");
			gotoxy(68,20);
		        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  area();
                }
	      	   	
	}
}

void energy()
{
	float inenergy , outenergy;
	char ch1 , ch2 , ch;
	int a;
    gotoxy(68,15);
	printf("1. JOULE to - ");
	gotoxy(68,16);
	printf("2. KILO JOULE to - ");
	gotoxy(68,17);
	printf("3. CALORIE to - ");
	gotoxy(68,18);
	printf("4. KILOCALORIE to -");
	gotoxy(68,19);
	printf("5. KILOWATT - HOUR to -");
	gotoxy(68,22);
	printf("<--(B/b)- Back");
	gotoxy(68,23);
	printf("<--(E/e)- Exit");
    
    fflush(stdin);
	ch1 = getch();
	system("cls");
	
	switch(ch1)
	{
		case 'B' :
			unit_converter();
			break;
		
		case 'b' :
		    unit_converter();
			break;
		
		case 'E' :
		    exit(0);
			break;
		case 'e' :
		    exit(0);
			break;
		
		case '1' :
		 	gotoxy(68,12);
		 	 printf("1. JOULE to- ");
		 	 gotoxy(68,15);
		 	 printf("a) ----KiloJoule");
		 	 gotoxy(68,16);
		 	 printf("b) ----Calorie");
		 	 gotoxy(68,17);
		 	 printf("c) ----KiloCalorie");
		 	 gotoxy(68,18);
		 	 printf("d) ----KiloWatt-Hour");
		 	 gotoxy(68,21);
		 	 printf("<--(B)-Back");
		 	 gotoxy(68,22);
             printf("<--(E)-Exit");
             
             ch2 = getch();
             system("cls");
             
             switch(ch2)
             {
             	case 'a' :
             		gotoxy(68,15);
             		printf("Enter value in Joule : ");
             		scanf("%f",&inenergy);
             		
             		outenergy = inenergy * 0.001;
             		gotoxy(68,17);
             		printf("Value in KiloJoule = %.4f",outenergy);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  energy();
                }
		    	    break;	    
		    	case 'b' :
		    		gotoxy(68,15);
				    printf("Enter value in Joule : ");
             		scanf("%f",&inenergy);
					outenergy = inenergy * 0.239;
					gotoxy(68,17);
					printf("Value in Calorie = %.4f",outenergy);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  energy();
                }
		    	    break;     		    	    
		    	case 'c' :
		    		gotoxy(68,15);
				    printf("Enter value in Joule : ");
             		scanf("%f",&inenergy);				 
					outenergy = inenergy * 0.0002;
					gotoxy(68,17);
					printf("Value in KiloCalorie = %.4f",outenergy);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  energy();
                }
		    	    break;   					
				case 'd' :
					gotoxy(68,15);
				    printf("Enter value in Joule : ");
             		scanf("%f",&inenergy);		 
					outenergy = inenergy / 3600000;
					gotoxy(68,17);
					printf("Value in KiloWatt-Hour = %.4f",outenergy);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  energy();
                }
		    	    break; 	 					
				case 'B' :
				    energy();
					break;					
			    case 'E' :
				    exit(0);
					break;	
				default :
					gotoxy(68,19);
					printf("Please enter valid option !");
					gotoxy(68,20);
				     	printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  energy();
                }		  
			 }
		     break;		
		case '2' :
		 	 gotoxy(68,12);
		     printf("1. KILO JOULE to-");
		     gotoxy(68,15);
		 	 printf("a) ----Joule");
		 	 gotoxy(68,16);
		 	 printf("b) ----Calorie");
		 	 gotoxy(68,17);
		 	 printf("c) ----KiloCalorie");
		 	 gotoxy(68,18);
		 	 printf("d) ----KiloWatt-Hour");
		 	 gotoxy(68,21);
		 	 printf("<--(B)-Back");
		 	 gotoxy(68,22);
             printf("<--(E)-Exit");            
             ch2 = getch();
             system("cls");            
             switch(ch2)
             {
             	case 'a' :
             		gotoxy(68,15);
             		printf("Enter value in KiloJoule : ");
             		scanf("%f",&inenergy);      		
             		outenergy = inenergy * 1000;
             		gotoxy(68,17);
             		printf("Value in Joule = %.4f",outenergy);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  energy();
                }
		    	    break;	    	    
		    	case 'b' :
		    		gotoxy(68,15);
				    printf("Enter value in KiloJoule : ");
             		scanf("%f",&inenergy);					 
					outenergy = inenergy * 239.0057;
					gotoxy(68,17);
					printf("Value in Calorie = %.4f",outenergy);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  energy();
                }
		    	    break; 				
				case 'c' :
					gotoxy(68,15);
				    printf("Enter value in KiloJoule : ");
             		scanf("%f",&inenergy);					 
					outenergy = inenergy * 0.239;
					gotoxy(68,17);
					printf("Value in KiloCalorie = %.4f",outenergy);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  energy();
                }
		    	    break; 	   	    	    
		    	case 'd' :
		    		gotoxy(68,15);
				    printf("Enter value in KiloJoule : ");
             		scanf("%f",&inenergy);					 
					outenergy = inenergy * 0.0003;
					gotoxy(68,17);
					printf("Value in KiloWatt-Hour = %.4f",outenergy);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  energy();
                }
		    	    break;    	    	    
		    	case 'E' :
				    exit(0);
					break;			
				case 'B' :
				    energy();
					break;
				default :
					gotoxy(68,19);
					printf("Please enter valid option !");
					gotoxy(68,20);
				     printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  energy();
                }		    
			 }
		     break;	 		     
		case '3' :
		 	gotoxy(68,12);
		     printf("1. CALORIE to- ");
		     gotoxy(68,15);
		 	 printf("a) ----Joule");
		 	 gotoxy(68,16);
		 	 printf("b) ----KiloJoule");
		 	 gotoxy(68,17);
		 	 printf("c) ----KiloCalorie");
		 	 gotoxy(68,18);
		 	 printf("d) ----KiloWatt-Hour");
		 	 gotoxy(68,21);
		 	 printf("<--(B)-Back");
		 	 gotoxy(68,22);
             printf(" <--(E)-Exit");         
             ch2 = getch();
             system("cls");
             
             switch(ch2)
             {
             	case 'a' :
             		gotoxy(68,15);
             		printf("Enter value in Calorie : ");
             		scanf("%f",&inenergy);           		
             		outenergy = inenergy * 4.184;
             		gotoxy(68,17);
             		printf("Value in Joule = %.4f",outenergy);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  energy();
                }
		    	    break;	    	    
		    	case 'b' :
		    		gotoxy(68,15);
				    printf("Enter value in Calorie : ");
             		scanf("%f",&inenergy);					 
					outenergy = inenergy * 0.0042;
					gotoxy(68,17);
					printf("Value in KiloJoule = %.4f",outenergy);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  energy();
                }
		    	    break;   					
			    case 'c' :
			    	gotoxy(68,15);
				    printf("Enter value in Calorie : ");
             		scanf("%f",&inenergy);				 
					outenergy = inenergy * 0.001;
					gotoxy(68,17);
					printf("Value in KiloCalorie = %.4f",outenergy);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  energy();
                }
		    	    break; 		         	
				 case 'd' :
				 	gotoxy(68,15);
				    printf("Enter value in Calorie : ");
             		scanf("%f",&inenergy);					 
					outenergy = inenergy / 860420.6501;
					gotoxy(68,17);
					printf("Value in KiloWatt-Hour = %.4f",outenergy);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  energy();
                }
		    	    break; 	    	  
				 case 'B' :
				    energy();
					break;
				 case 'E' :
				     exit(0);
					 break;	
				  default :
				  	gotoxy(68,19);
				  	printf("Please enter valid option !");
				  	gotoxy(68,20);
				     printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  energy();
                }	    
			 }
		     break;     	     
		case '4' :
			 gotoxy(68,12);
		     printf("1. KILOCALORIE to-");
		     gotoxy(68,15);
		 	 printf("a) ----Joule");
		 	 gotoxy(68,16);
		 	 printf("b) ----KiloJoule");
		 	 gotoxy(68,17);
		 	 printf("c) ----Calorie");
		 	 gotoxy(68,18);
		 	 printf("d) ----kiloWatt-Hour");
		 	 gotoxy(68,21);
		 	 printf(" <--(B)-Back");
		 	 gotoxy(68,22);
             printf(" <--(E)-Exit");
             
             ch2 = getch();
             system("cls");
             
             switch(ch2)
             {
             	case 'a' :
             		gotoxy(68,15);
             	    printf("Enter value in KiloCalorie : ");
             		scanf("%f",&inenergy);	            		
             		outenergy = inenergy * 4184;
             		gotoxy(68,17);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  energy();
                }
		    	    break; 	    	    
		    	case 'b' :
		    		gotoxy(68,15);
				    printf("Enter value in KiloCalorie : ");
             		scanf("%f",&inenergy);					 
					outenergy = inenergy * 4.184;
					gotoxy(68,17);
					printf("Value in KiloJoule = %.4f",outenergy);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  energy();
                }
		    	    break;              	
                case 'c' :
                	gotoxy(68,15);
				    printf("Enter value in KiloCalorie : ");
             		scanf("%f",&inenergy);					 
					outenergy = inenergy * 1000;
					gotoxy(68,17);
					printf("Value in Calorie = %.4f",outenergy);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  energy();
                }
		    	    break;					
				case 'd' :
					gotoxy(68,15);
				    printf("Enter value in KiloCalorie : ");
             		scanf("%f",&inenergy);					 
					outenergy = inenergy * 0.0012; 	
					gotoxy(68,17);
					printf("Value in KiloWatt-Hour = %.4f",outenergy);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  energy();
                }
		    	    break;			 			
				case 'B' :
				    energy();
					break;				
				case 'E' :
				   exit(0);
				   break;
				default :
					gotoxy(68,19);
					printf("Please enter valid option !");
					gotoxy(68,20);
				    printf("Press any key to return back.");
                    ch=getch();
                    a = ch;
                    if(a < 255)
  	                {
                      system("cls");
                      energy();
                    }   			
			 }
		     break;  		 
		case '5' :
		 	gotoxy(68,12);
		     printf("1. KILOWATT-HOUR to- ");
		     gotoxy(68,15);
		 	 printf("a) ----Joule");
		 	 gotoxy(68,16);
		 	 printf("b) ----KiloJoule");
		 	 gotoxy(68,17);
		 	 printf("c) ----Calorie");
		 	 gotoxy(68,18);
		 	 printf("d) ----KiloCalorie");
		 	 gotoxy(68,21);
		 	 printf(" <--(B)-Back");
		 	 gotoxy(68,22);
             printf(" <--(E)-Exit");
             
             ch2 = getch();
             system("cls");
             
             switch(ch2)
             {
             	case 'a' :
             		gotoxy(68,15);
             		printf("Enter value in KiloWatt-Hour : ");
             		scanf("%f",&inenergy);         		
             		outenergy = inenergy * 3600000;
             		gotoxy(68,17);
             		printf("Value in Joule = %.4f",outenergy);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                    ch=getch();
                    a = ch;
                    if(a < 255)
  	                {
                     system("cls");
                     energy();
                    }
		    	    break;        		
             	case 'b' :
             		gotoxy(68,15);
				    printf("Enter value in KiloWatt-Hour : ");
             		scanf("%f",&inenergy);				 
					outenergy = inenergy * 3600;
					gotoxy(68,17);
					printf("Value in KiloJoule = %.4f",outenergy);
             	    gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  energy();
                }
		    	    break; 			    	    
		    	case 'c' :
		    		gotoxy(68,15);
				    printf("Enter value in KiloWatt-Hour : ");
             		scanf("%f",&inenergy);				 
					outenergy = inenergy * 860420.6501;
					gotoxy(68,17);
					printf("Value in Calorie = %.4f",outenergy);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  energy();
                }
		    	    break; 				
				case 'd' :
					gotoxy(68,15);
				    printf("Enter value in KiloWatt-Hour : ");
             		scanf("%f",&inenergy); 	 				 
					outenergy = inenergy * 860.4207;
					gotoxy(68,17);
					printf("Value in KiloCalorie = %.4f",outenergy);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  energy();
                }
		    	    break;  
				case 'E' :
				    exit(0);
					break;
				case 'B' :
				    energy();
					break;
				default :
					gotoxy(68,19);
					printf("Please enter valid option !");
					gotoxy(68,20);
				    printf("Press any key to return back.");
                    ch=getch();
                    a = ch;
                    if(a < 255)
  	                {
                       system("cls");
                       energy();
                    }			   
			 }
		     break;	   	
		default :
			gotoxy(68,19);
			printf("Please enter valid option !");
			gotoxy(68,20);
		    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  energy();
                }				
	}
}

void distance()
{
	float indis , outdis;
	char ch1 , ch2 , ch;
	int a;
    gotoxy(68,15);
	printf("1.  KILOMETER to - ");
	gotoxy(68,16);
	printf("2.  MILES to - ");
	gotoxy(68,17);
	printf("3.  METRE to - ");
	gotoxy(68,18);
	printf("4.  CENTIMETER to - ");
	gotoxy(68,19);
	printf("5.  MILIMETER to - ");
	gotoxy(68,20);
	printf("6.  MICROMETER to - ");
	gotoxy(68,23);
	printf("<--(B/b)- Back");
	gotoxy(68,24);
	printf("<--(E/e)- Exit");
    
    fflush(stdin);
	ch1 = getch();
	system("cls");
	
	switch(ch1)
	{
		case 'E' :
			exit(0);
			break;
		case 'e' :
		    exit(0);
			break;
		case 'B' :
		    unit_converter();
			break;
		case 'b' :
		    unit_converter();
			break;
			
		case '1' :
		 	gotoxy(68,12);
		    printf("1. KILOMETER to - ");
		    gotoxy(68,15);
		    printf("a) ----Miles");
		    gotoxy(68,16);
	        printf("b) ----Meter");
	        gotoxy(68,17);
	        printf("c) ----Centimeter");
	        gotoxy(68,18);
	        printf("d) ----Milimeter");
	        gotoxy(68,19);
	        printf("e) ----Micrometer");
	        gotoxy(68,22);
            printf("<-- (B)-Back");
            gotoxy(68,23);
	        printf("<-- (E)-exit");
		    ch2 = getch();
		    system("cls");
		    switch(ch2)
		    {
		    	case 'a' :
		    		gotoxy(68,15);
		    		printf("Enter value in Km : ");
		    		scanf("%f",&indis);		    		
		    		outdis = indis * 0.6214;
		    		gotoxy(68,17);
		    		printf("Value in Miles = %.4f",outdis);
		    		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
		    	    break; 
		    	case 'b' :
		    		gotoxy(68,15);
				    printf("Enter value in Km : ");
		    		scanf("%f",&indis);		    		
		    		outdis = indis * 1000;
		    		gotoxy(68,17);
		    		printf("Value in Metre = %.4f",outdis);
		    		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
		    	    break;					
				case 'c' :
					gotoxy(68,15);
				    printf("Enter value in Km : ");
		    		scanf("%f",&indis); 		
		    		outdis = indis * 100000;
		    		gotoxy(68,17);
		    		printf("Value in Cm = %.4f",outdis);
		    		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
		    	    break;				
			   case 'd' :	
			        gotoxy(68,15);
			        printf("Enter value in Km : ");
		    		scanf("%f",&indis); 		
		    		outdis = indis * 1000000;
		    		gotoxy(68,17);
		    		printf("Value in Milimeter = %.4f",outdis);
		    		gotoxy(68,20);
			        printf("Press any key to return back.");
                    ch=getch();
                    a = ch;
                    if(a < 255)
  	                {
                      system("cls");
                      distance();
                    }
		    	    break;		
			   case 'e' :
			   	gotoxy(68,15);
			        printf("Enter value in Km : ");
		    		scanf("%f",&indis);		
		    		outdis = indis * 1000000000;
		    		gotoxy(68,17);
		    		printf("Value in Micrometer = %.4f",outdis);
		    		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
		    	    break;	
				case 'B' :
				    distance();
					break;
				case 'E' :
				    exit(0);
					break;
				default :
					gotoxy(68,19);
					printf("Please enter valid option !");
					gotoxy(68,20);
				    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }								    
			}    
	    break;	    
		case '2' :
		 	gotoxy(68,12);
		    printf("2. MILES to - ");
		    gotoxy(68,15);
		    printf("a) ----Kilometer");
		    gotoxy(68,16);
	        printf("b) ----Meter");
	        gotoxy(68,17);
	        printf("c) ----Centimeter");
	        gotoxy(68,18);
	        printf("d) ----Milimeter");
	        gotoxy(68,19);
	        printf("e) ----Micrometer");
	        gotoxy(68,22);
            printf("<-- (B)-Back");
            gotoxy(68,23);
	        printf("<-- (E)-exit");     
		    ch2 = getch();
		    system("cls");	    
		    switch(ch2)
		    {
		    	case 'a' :
		    		gotoxy(68,15);
		    		printf("Enter value in Miles : ");
		    		scanf("%f",&indis);		
		    		outdis = indis * 1.6093;
		    		gotoxy(68,17);
		    		printf("Value in Km = %.4f",outdis);
		    			gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
		    	    break;	    	    
		    	case 'b' :
		    		gotoxy(68,15);
				    printf("Enter value in Miles : ");
		    		scanf("%f",&indis);    		
		    		outdis = indis * 1609.344;
		    		gotoxy(68,17);
		    		printf("Value in Meter = %.4f",outdis);
		    		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
		    	    break;			
				case 'c' :
					gotoxy(68,15);
				    printf("Enter value in Miles : ");
		    		scanf("%f",&indis);	    		
		    		outdis = indis * 160934.4;
		    		gotoxy(68,17);
		    		printf("Value in Cm = %.4f",outdis);
		    		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
		    	    break;				
				case 'd' :
					gotoxy(68,15);
				    printf("Enter value in Miles : ");
		    		scanf("%f",&indis);	    		
		    		outdis = indis * 1609344;
		    		gotoxy(68,17);
		    		printf("Value in Milimeter = %.4f",outdis);
		    		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
		    	    break;						
				case 'e' :
					gotoxy(68,15);
				    printf("Enter value in Miles : ");
		    		scanf("%f",&indis);		
		    		outdis = indis * 1609344000;
		    		gotoxy(68,17);
		    		printf("Value in Micrometer = %.4f",outdis);
		    		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
		    	    break;	
				case 'B' :
				    distance();
					break;
				case 'E' :
				    exit(0);
					break;
				default :
				    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }						    
			}		    
		break;		    
		case '3' :
		    gotoxy(68,12);
			printf("3. METER to -");
			gotoxy(68,15);
		    printf("a) ----Kilometer");
		    gotoxy(68,16);
	        printf("b) ----Miles");
	        gotoxy(68,17);
	        printf("c) ----Centimeter");
	        gotoxy(68,18);
	        printf("d) ----Milimeter");
	        gotoxy(68,19);
	        printf("e) ----Micrometer");
	        gotoxy(68,22);
            printf("<-- (B)-Back");
            gotoxy(68,23);
	        printf("<-- (E)-exit");
	        
		    ch2 = getch();
		    system("cls"); 
			
			switch(ch2)
			{
			    case 'a' :
			    	gotoxy(68,15);
			    	printf("Enter value in Metre : ");
		    		scanf("%f",&indis);	    		
		    		outdis = indis * 0.001;
		    		gotoxy(68,17);
		    		printf("Value in Km = %.4f",outdis);
		    		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
		    	    break;				
				case 'b' :
					gotoxy(68,15);
				    printf("Enter value in Metre : ");
		    		scanf("%f",&indis);  		
		    		outdis = indis * 0.0006;
		    		gotoxy(68,17);
		    		printf("Value in Miles = %.4f",outdis);
		    		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
		    	    break;					
				case 'c' :
					gotoxy(68,15);
				    printf("Enter value in Metre : ");
		    		scanf("%f",&indis);    		
		    		outdis = indis * 100;
		    		gotoxy(68,17);
		    		printf("Value in Cm = %.4f",outdis);
		    	    	gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
		    	    break;						   	
				case 'd' :
					gotoxy(68,15);
				    printf("Enter value in Metre : ");
		    		scanf("%f",&indis);		    		
		    		outdis = indis * 1000;
		    		gotoxy(68,17);
		    		printf("Value in Milimeter = %.4f",outdis);
		    		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
		    	    break; 				
				case 'e' :
					gotoxy(68,15);
				   	printf("Enter value in Metre : ");
		    		scanf("%f",&indis);		    		
		    		outdis = indis * 1000000;
		    		gotoxy(68,17);
		    		printf("Value in Micrometer = %.4f",outdis);
		    		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
		    	    break; 
				case 'B' :
				    distance();
					break;
				case 'E' :
				    exit(0);
					break;
				default :
					gotoxy(68,19);
					printf("Please enetr valid option !");
					gotoxy(68,20);
				    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }				 	 	
			}   	    
		case '4' :
		     gotoxy(68,12);
			 printf("4. CENTIMETER to - ");
			 gotoxy(68,15);
		     printf("a) ----Kilometer");
		     gotoxy(68,16);
	         printf("b) ----Miles");
	         gotoxy(68,17);
	         printf("c) ----Meter");
	         gotoxy(68,18);
	         printf("d) ----Milimeter");
	         gotoxy(68,19);
	         printf("e) ----Micrometer");
	         gotoxy(68,22);
             printf("<-- (B)-Back");
             gotoxy(68,23);
	         printf("<-- (E)-exit");
	        
		     ch2 = getch();
		     system("cls"); 
		     
		     switch(ch2)
		     {
		     	case 'a' :
		     		gotoxy(68,15);
		     		printf("Enter value in CentiMetre : ");
		    		scanf("%f",&indis);		    		
		    		outdis = indis / 100000;
		    		gotoxy(68,17);
		    		printf("Value in Km = %.4f",outdis);
		    		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
		    	    break;	    	    
		    	case 'b' :
		    		gotoxy(68,15);
				    printf("Enter value in CentiMetre : ");
		    		scanf("%f",&indis);	    		
		    		outdis = indis / 160934.4;
		    		gotoxy(68,17);
		    		printf("Value in Miles = %.4f",outdis);
		    		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
		    	    break;  				
			    case 'c' :
			    	gotoxy(68,15);
				    printf("Enter value in CentiMetre : ");
		    		scanf("%f",&indis);		
		    		outdis = indis * 0.01;
		    		gotoxy(68,17);
		    		printf("Value in Meter = %.4f",outdis);
		    		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
		    	    break; 				
				case 'd' :
					gotoxy(68,15);
				    printf("Enter value in CentiMetre : ");
		    		scanf("%f",&indis);	    		
		    		outdis = indis * 10;
		    		gotoxy(68,17);
		    		printf("Value in Milimeter = %.4f",outdis);
		    		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
		    	    break; 				
				case 'e' :
					gotoxy(68,15);
				    printf("Enter value in CentiMetre : ");
		    		scanf("%f",&indis);		    		
		    		outdis = indis * 10000;
		    		gotoxy(68,17);
		    		printf("Value in Micrometer = %.4f",outdis);
		    		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
		    	    break; 
				case 'E' :
				    exit(0);
					break;
				case 'B' :
				    distance();
					break;
				default :
					gotoxy(68,19);
					printf("Please enter valid option !");
					gotoxy(68,20);
				     printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }			 				 		 
			 }	
		case '5' :
		     gotoxy(68,12);
		     printf("5. MILIMETER to - ");
		     gotoxy(68,15);
		     printf("a) ----Kilometer");
		     gotoxy(68,16);
	         printf("b) ----Miles");
	         gotoxy(68,17);
	         printf("c) ----Meter");
	         gotoxy(68,18);
	         printf("d) ----Centimeter");
	         gotoxy(68,19);
	         printf("e) ----Micrometer");
	         gotoxy(68,22);
             printf("<-- (B)-Back");
             gotoxy(68,23);
	         printf("<-- (E/e)-exit");
	        
		     ch2 = getch();
		     system("cls");
		     
		     switch(ch2)
		     {
		     	case 'a' :
		     		gotoxy(68,15);
		     		printf("Enter value in MiliMetre : ");
		    		scanf("%f",&indis);	    		
		    		outdis = indis / 1000000;
		    		gotoxy(68,17);
		    		printf("Value in Km = %.4f",outdis);
		    		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
		    	    break;				
				case 'b' :
					gotoxy(68,15);
				    printf("Enter value in MiliMetre : ");
		    		scanf("%f",&indis);		    		
		    		outdis = indis / 1609344;
		    		gotoxy(68,17);
		    		printf("Value in Miles = %.4f",outdis);
		    		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
		    	    break;					
				case 'c' :
					gotoxy(68,15);
				    printf("Enter value in MiliMetre : ");
		    		scanf("%f",&indis);	    		
		    		outdis = indis * 0.001;
		    		gotoxy(68,17);
		    		printf("Value in  Metre= %.4f",outdis);
		    		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
		    	    break;				
				case 'd' :
					gotoxy(68,15);
				    printf("Enter value in MiliMetre : ");
		    		scanf("%f",&indis);		    		
		    		outdis = indis * 0.1;
		    		gotoxy(68,17);
		    		printf("Value in Centimetre = %.4f",outdis);
		    		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
		    	    break;					
				case 'e' :
					gotoxy(68,15);
				    printf("Enter value in MiliMetre : ");
		    		scanf("%f",&indis);	    		
		    		outdis = indis * 1000;
		    		gotoxy(68,17);
		    		printf("Value in Micrometer = %.4f",outdis);
		    		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
		    	    break;			 
				case 'E' :
				    exit(0);
					break;
				case 'B' :
				    distance();
					break;
				default :
					gotoxy(68,19);
					printf("Please enter valid option !");
					gotoxy(68,20);
				    printf("Press any key to return back.");
                    ch=getch();
                    a = ch;
                    if(a < 255)
  	                {
                      system("cls");
                      unit_converter();
                    }			   
			 }	     
		case '6' :
		     gotoxy(68,12); 
			 printf("6. MICROMETER to -");
			 gotoxy(68,15);
		     printf("a) ----Kilometer");
		     gotoxy(68,16);
	         printf("b) ----Miles");
	         gotoxy(68,17);
	         printf("c) ----Meter");
	         gotoxy(68,18);
	         printf("d) ----Centimeter");
	         gotoxy(68,19);
	         printf("e) ----Milimeter");
	         gotoxy(68,22);
             printf("<-- (B)-Back");
             gotoxy(68,23);
	         printf("<-- (E/e)-exit");
	        
		     ch2 = getch();
		     system("cls");   
		     
		     switch(ch2)
		     {
		     	case 'a':
		     		gotoxy(68,15);
		     		printf("Enter value in Micrometer : ");
		     		scanf("%f",&indis);
		     		outdis = indis / 1000000000;
		     		gotoxy(68,17);
		     		printf("Value in Km = %.10f",outdis);
		     		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
					break;
				case 'b' :
				    gotoxy(68,15);
				    printf("Enter value in micrometer : ");
				    scanf("%f",&indis);
				    outdis = indis * (1 / 1609344000);
				    gotoxy(68,17);
				    printf("Value in miles : %.10f",outdis);
				    gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
					break;	
				case 'c' :
				    gotoxy(68,15);
				    printf("Enter value in micrometer : ");
				    scanf("%f",&indis);
				    outdis = indis / 1000000;
				    gotoxy(68,17);
				    printf("Value in meter : %.10f",outdis);
				    gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
					break;
				case 'd' :
				    gotoxy(68,15);
				    printf("Enter value in micrometer : ");
				    scanf("%f",&indis);
				    outdis = indis / 10000;
				    gotoxy(68,17);
				    printf("Value in miles : %.7f",outdis);
				    gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
					break;	
				case 'e' :
				    gotoxy(68,15);
				    printf("Enter value in micrometer : ");
				    scanf("%f",&indis);
				    outdis = indis / 1000;
				    gotoxy(68,17);
				    printf("Value in milimeter : %.7f",outdis);
				    gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
					break;		     		
			 }	     
		default :
			gotoxy(68,19);
			printf("Please enter valid option !");
			gotoxy(68,20);
			printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  distance();
                }
		   				
	}
}

void memory()
{
	float inmem , outmem;
	char ch1 , ch2 , ch;
	int a;
    gotoxy(68,15);
	printf("1. KILO BYTE to - ");
	gotoxy(68,16);
	printf("2. MEGA BYTE to - ");
	gotoxy(68,17);
	printf("3. GIGA BYTE to - ");
	gotoxy(68,18);
	printf("4. TERA BYTE to -");
	gotoxy(68,19);
	printf("5. PETA BYTE to -");
	gotoxy(68,22);
	printf("<--(B/b)- Back");
	gotoxy(68,23);
	printf("<--(E/e)- Exit");
    
    fflush(stdin);
	ch1 = getch();
	system("cls");
	
	switch(ch1)
	{
		case 'B' :
			unit_converter();
			break;
		
		case 'b' :
		    unit_converter();
			break;
		
		case 'E' :
		    exit(0);
			break;
		case 'e' :
		    exit(0);
			break;
		
		case '1' :
		 	gotoxy(68,12);
		 	 printf("1. KILO BYTE to- ");
		 	 gotoxy(68,15);
		 	 printf("a) ----MEGA BYTE");
		 	 gotoxy(68,16);
		 	 printf("b) ----GIGA BYTE");
		 	 gotoxy(68,17);
		 	 printf("c) ----TERA BYTE");
		 	 gotoxy(68,18);
		 	 printf("d) ----PETA BYTE");
		 	 gotoxy(68,21);
		 	 printf("<--(B)-Back");
		 	 gotoxy(68,22);
             printf("<--(E)-Exit");
             
             ch2 = getch();
             system("cls");
             
             switch(ch2)
             {
             	case 'a' :
             		gotoxy(68,15);
             		printf("Enter value in Kilo Byte : ");
             		scanf("%f",&inmem);
             		
             		outmem = inmem / (float)1024;
             		gotoxy(68,17);
             		printf("Value in Mega Byte = %.4f",outmem);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  memory();
                }
		    	    break;	    
		    	case 'b' :
		    		gotoxy(68,15);
				    printf("Enter value in Kilo Byte : ");
             		scanf("%f",&inmem);
					gotoxy(68,17);
					printf("Value in Giga Byte = 0");
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  memory();
                }
		    	    break;     		    	    
		    	case 'c' :
		    		gotoxy(68,15);
				    printf("Enter value in Kilo Byte : ");
             		scanf("%f",&inmem);				 
					outmem = inmem / 1000000;
					gotoxy(68,17);
					printf("Value in Tera Byte = 0");
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  energy();
                }
		    	    break;   					
				case 'd' :
					gotoxy(68,15);
				    printf("Enter value in Kilo Byte : ");
             		scanf("%f",&inmem);		 
					outmem = inmem / 1000000000;
					gotoxy(68,17);
					printf("Value in Peta Byte = 0");
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  memory();
                }
		    	    break; 	 					
				case 'B' :
				    memory();
					break;					
			    case 'E' :
				    exit(0);
					break;	
				default :
					gotoxy(68,19);
					printf("Please enter valid option !");
					gotoxy(68,20);
				     	printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  memory();
                }		  
			 }
		     break;		
		case '2' :
		 	 gotoxy(68,12);
		     printf("1. MEGA BYTE to-");
		     gotoxy(68,15);
		 	 printf("a) ----KILO BYTE");
		 	 gotoxy(68,16);
		 	 printf("b) ----GIGA BYTE");
		 	 gotoxy(68,17);
		 	 printf("c) ----TERA BYTE");
		 	 gotoxy(68,18);
		 	 printf("d) ----PETA BYTE");
		 	 gotoxy(68,21);
		 	 printf("<--(B)-Back");
		 	 gotoxy(68,22);
             printf("<--(E)-Exit");            
             ch2 = getch();
             system("cls");            
             switch(ch2)
             {
             	case 'a' :
             		gotoxy(68,15);
             		printf("Enter value in Mega Byte : ");
             		scanf("%f",&inmem);      		
             		outmem = inmem * (float)1024;
             		gotoxy(68,17);
             		printf("Value in Kilo Byte = %.4f",outmem);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  memory();
                }
		    	    break;	    	    
		    	case 'b' :
		    		gotoxy(68,15);
				    printf("Enter value in Mega Byte : ");
             		scanf("%f",&inmem);					 
					outmem = inmem / (float)1024;
					gotoxy(68,17);
					printf("Value in Giga Byte = %.5f",outmem);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  memory();
                }
		    	    break; 				
				case 'c' :
					gotoxy(68,15);
				    printf("Enter value in Mega Byte : ");
             		scanf("%f",&inmem);					 
					gotoxy(68,17);
					printf("Value in Tera Byte = %0");
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  memory();
                }
		    	    break; 	   	    	    
		    	case 'd' :
		    		gotoxy(68,15);
				    printf("Enter value in Mega Byte : ");
             		scanf("%f",&inmem);					 
					gotoxy(68,17);
					printf("Value in Peta Byte = 0");
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  memory();
                }
		    	    break;    	    	    
		    	case 'E' :
				    exit(0);
					break;			
				case 'B' :
				    energy();
					break;
				default :
					gotoxy(68,19);
					printf("Please enter valid option !");
					gotoxy(68,20);
				     printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  memory();
                }		    
			 }
		     break;	 		     
		case '3' :
		 	gotoxy(68,12);
		     printf("1. GIGA BYTE to- ");
		     gotoxy(68,15);
		 	 printf("a) ----KILO BYTE");
		 	 gotoxy(68,16);
		 	 printf("b) ----MEGA BYTE");
		 	 gotoxy(68,17);
		 	 printf("c) ----TERA BYTE");
		 	 gotoxy(68,18);
		 	 printf("d) ----PETA BYTE");
		 	 gotoxy(68,21);
		 	 printf("<--(B)-Back");
		 	 gotoxy(68,22);
             printf("<--(E)-Exit");         
             ch2 = getch();
             system("cls");
             
             switch(ch2)
             {
             	case 'a' :
             		gotoxy(68,15);
             		printf("Enter value in Giga Byte : ");
             		scanf("%f",&inmem);           		
             		outmem = inmem * 1024 * 1024;
             		gotoxy(68,17);
             		printf("Value in Kilo Byte = %.4f",outmem);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  memory();
                }
		    	    break;	    	    
		    	case 'b' :
		    		gotoxy(68,15);
				    printf("Enter value in Giga Byte : ");
             		scanf("%f",&outmem);					 
					outmem = inmem * 1024;
					gotoxy(68,17);
					printf("Value in Mega Byte = %.4f",outmem);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  memory();
                }
		    	    break;   					
			    case 'c' :
			    	gotoxy(68,15);
				    printf("Enter value in Giga Byte : ");
             		scanf("%f",&inmem);				 
					outmem = inmem / 1024;
					gotoxy(68,17);
					printf("Value in Tera Byte = %.4f",outmem);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  memory();
                }
		    	    break; 		         	
				 case 'd' :
				 	gotoxy(68,15);
				    printf("Enter value in Giga Byte : ");
             		scanf("%f",&inmem);					 
					gotoxy(68,17);
					printf("Value in Peta Byte = 0");
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  memory();
                }
		    	    break; 	    	  
				 case 'B' :
				    memory();
					break;
				 case 'E' :
				     exit(0);
					 break;	
				  default :
				  	gotoxy(68,19);
				  	printf("Please enter valid option !");
				  	gotoxy(68,20);
				     printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  memory();
                }	    
			 }
		     break;     	     
		case '4' :
			 gotoxy(68,12);
		     printf("1. TERA BYTE to-");
		     gotoxy(68,15);
		 	 printf("a) ----KILO BYTE");
		 	 gotoxy(68,16);
		 	 printf("b) ----MEGA BYTE");
		 	 gotoxy(68,17);
		 	 printf("c) ----GIGA BYTE");
		 	 gotoxy(68,18);
		 	 printf("d) ----PETA BYTE");
		 	 gotoxy(68,21);
		 	 printf(" <--(B)-Back");
		 	 gotoxy(68,22);
             printf(" <--(E)-Exit");
             
             ch2 = getch();
             system("cls");
             
             switch(ch2)
             {
             	case 'a' :
             		gotoxy(68,15);
             	    printf("Enter value in Tera Byte : ");
             		scanf("%f",&inmem);	            		
             		outmem = inmem * 1024 * 1024 * 1024;
             		gotoxy(68,17);
             		printf("Value in Kilo Byte = %.4f",outmem);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                    ch=getch();
                    a = ch;
                    if(a < 255)
  	                {
                      system("cls");
                      memory();
                }
		    	    break; 	    	    
		    	case 'b' :
		    		gotoxy(68,15);
				    printf("Enter value in Tera Byte : ");
             		scanf("%f",&inmem);					 
					outmem = inmem * 1024 * 1024;
					gotoxy(68,17);
					printf("Value in Mega Byte = %.4f",outmem);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                    ch=getch();
                    a = ch;
                    if(a < 255)
  	                {
                       system("cls");
                       memory();
                    }
		    	    break;              	
                case 'c' :
                	gotoxy(68,15);
				    printf("Enter value in Tera Byte : ");
             		scanf("%f",&inmem);					 
					outmem = inmem * 1024;
					gotoxy(68,17);
					printf("Value in Giga Byte = %.4f",outmem);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  memory();
                }
		    	    break;					
				case 'd' :
					gotoxy(68,15);
				    printf("Enter value in Tera Byte : ");
             		scanf("%f",&inmem);					 
					outmem = inmem / (float)1024; 	
					gotoxy(68,17);
					printf("Value in Peta Byte = %.4f",outmem);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  memory();
                }
		    	    break;			 			
				case 'B' :
					system("cls");
				    memory();
					break;				
				case 'E' :
				   exit(0);
				   break;
				default :
					gotoxy(68,19);
					printf("Please enter valid option !");
					gotoxy(68,20);
				    printf("Press any key to return back.");
                    ch=getch();
                    a = ch;
                    if(a < 255)
  	                {
                      system("cls");
                      memory();
                    }   			
			 }
		     break;  		 
		case '5' :
		 	gotoxy(68,12);
		     printf("1. PETA BYTE to- ");
		     gotoxy(68,15);
		 	 printf("a) ----KILO BYTE");
		 	 gotoxy(68,16);
		 	 printf("b) ----MEGA BYTE");
		 	 gotoxy(68,17);
		 	 printf("c) ----GIGA BYTE");
		 	 gotoxy(68,18);
		 	 printf("d) ----TERA BYTE");
		 	 gotoxy(68,21);
		 	 printf(" <--(B)-Back");
		 	 gotoxy(68,22);
             printf(" <--(E)-Exit");
             
             ch2 = getch();
             system("cls");
             
             switch(ch2)
             {
             	case 'a' :
             		gotoxy(68,15);
             		printf("Enter value in Peta Byte : ");
             		scanf("%f",&inmem);         		
             		outmem = inmem * 1024 * 1024 * 1024 * 1024;
             		gotoxy(68,17);
             		printf("Value in Kilo Byte = %.4f",outmem);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                    ch=getch();
                    a = ch;
                    if(a < 255)
  	                {
                     system("cls");
                     memory();
                    }
		    	    break;        		
             	case 'b' :
             		gotoxy(68,15);
				    printf("Enter value in Peta Byte : ");
             		scanf("%f",&inmem);				 
					outmem = inmem * 1024 * 1024 * 1024;
					gotoxy(68,17);
					printf("Value in Mega Byte = %.4f",outmem);
             	    gotoxy(68,20);
			        printf("Press any key to return back.");
                    ch=getch();
                    a = ch;
                    if(a < 255)
  	                {
                      system("cls");
                      memory();
                    }
		    	    break; 			    	    
		    	case 'c' :
		    		gotoxy(68,15);
				    printf("Enter value in Peta Byte : ");
             		scanf("%f",&inmem);				 
					outmem = inmem * 1024 * 1024;
					gotoxy(68,17);
					printf("Value in Giga Byte = %.4f",outmem);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                    ch=getch();
                    a = ch;
                    if(a < 255)
  	                {
                      system("cls");
                      memory();
                    }
		    	    break; 				
				case 'd' :
					gotoxy(68,15);
				    printf("Enter value in Peta Byte : ");
             		scanf("%f",&inmem); 	 				 
					outmem = inmem * 1024;
					gotoxy(68,17);
					printf("Value in Tera Byte = %.4f",outmem);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                    ch=getch();
                    a = ch;
                    if(a < 255)
  	                {
                       system("cls");
                       memory();
                    }
		    	    break;  
				case 'E' :
				    exit(0);
					break;
				case 'B' :
					system("cls");
				    memory();
					break;
				default :
					gotoxy(68,19);
					printf("Please enter valid option !");
					gotoxy(68,20);
				    printf("Press any key to return back.");
                    ch=getch();
                    a = ch;
                    if(a < 255)
  	                {
                       system("cls");
                       memory();
                    }			   
			 }
		     break;	   	
		default :
			gotoxy(68,19);
			printf("Please enter valid option !");
			gotoxy(68,20);
		    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  memory();
                }				
	}
}

void volume()
{
	float invol , outvol;
	char ch1 , ch2 , ch;
	int a;
    gotoxy(68,15);
	printf("1. LITRE to - ");
	gotoxy(68,16);
	printf("2. MILI LITRE to - ");
	gotoxy(68,17);
	printf("3. METER CUBE to - ");
	gotoxy(68,18);
	printf("4. CENTI METER CUBE to -");
	gotoxy(68,21);
	printf("<--(B/b)- Back");
	gotoxy(68,22);
	printf("<--(E/e)- Exit");
    
    fflush(stdin);
	ch1 = getch();
	system("cls");
	
	switch(ch1)
	{
		case 'B' :
			unit_converter();
			break;
		
		case 'b' :
		    unit_converter();
			break;
		
		case 'E' :
		    exit(0);
			break;
		case 'e' :
		    exit(0);
			break;
		
		case '1' :
		 	gotoxy(68,12);
		 	 printf("1. LITRE to- ");
		 	 gotoxy(68,15);
		 	 printf("a) ----MILI LITRE");
		 	 gotoxy(68,16);
		 	 printf("b) ----METER CUBE");
		 	 gotoxy(68,17);
		 	 printf("c) ----CENTI METER CUBE");
		 	 gotoxy(68,20);
		 	 printf("<--(B)-Back");
		 	 gotoxy(68,21);
             printf("<--(E)-Exit");
             
             ch2 = getch();
             system("cls");
             
             switch(ch2)
             {
             	case 'a' :
             		gotoxy(68,15);
             		printf("Enter value in Litre : ");
             		scanf("%f",&invol);
             		
             		outvol = invol * 1000;
             		gotoxy(68,17);
             		printf("Value in Mili Litre = %.4f",outvol);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                    ch=getch();
                    a = ch;
                    if(a < 255)
  	                {
                      system("cls");
                      volume();
                    }
		    	    break;	    
		    	case 'b' :
		    		gotoxy(68,15);
				    printf("Enter value in Litre : ");
             		scanf("%f",&invol);
             		outvol = invol / 1000;
					gotoxy(68,17);
					printf("Value in Meter cube = %.4f",outvol);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                    ch=getch();
	                a = ch;
	                if(a < 255)
	  	            {
	                  system("cls");
	                  volume();
	                }
		    	    break;     		    	    
		    	case 'c' :
		    		gotoxy(68,15);
				    printf("Enter value in Litre : ");
             		scanf("%f",&invol);				 
					outvol = invol * 1000;
					gotoxy(68,17);
					printf("Value in Centi Meter Cube = %.4f",outvol);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
	                ch=getch();
	                a = ch;
	                if(a < 255)
	  	            {
	                  system("cls");
	                  volume();
	                }
		    	    break;   					 	 					
				case 'B' :
				    volume();
					break;					
			    case 'E' :
				    exit(0);
					break;	
				default :
					gotoxy(68,19);
					printf("Please enter valid option !");
					gotoxy(68,20);
				     	printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  volume();
                }		  
			 }
		     break;		
		case '2' :
		 	 gotoxy(68,12);
		     printf("2. MILI LITRE to-");
		     gotoxy(68,15);
		 	 printf("a) ----LITRE");
		 	 gotoxy(68,16);
		 	 printf("b) ----METER CUBE");
		 	 gotoxy(68,17);
		 	 printf("c) ----CENTI METER CUBE");
		 	 gotoxy(68,21);
		 	 printf("<--(B)-Back");
		 	 gotoxy(68,22);
             printf("<--(E)-Exit");            
             ch2 = getch();
             system("cls");            
             switch(ch2)
             {
             	case 'a' :
             		gotoxy(68,15);
             		printf("Enter value in Mili Litre : ");
             		scanf("%f",&invol);      		
             		outvol = invol / 1000;
             		gotoxy(68,17);
             		printf("Value in Litre = %.4f",outvol);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
	                ch=getch();
	                a = ch;
	                if(a < 255)
	  	            {
	                  system("cls");
	                  volume();
	                }
		    	    break;	    	    
		    	case 'b' :
		    		gotoxy(68,15);
				    printf("Enter value in Mili Litre : ");
             		scanf("%f",&invol);					 
					outvol = (invol * 0.001) / (float)1000;
					gotoxy(68,17);
					printf("Value in Meter Cube = %.5f",outvol);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
	                ch=getch();
	                a = ch;
	                if(a < 255)
	  	            {
	                  system("cls");
	                  volume();
	                }
		    	    break; 				
				case 'c' :
					gotoxy(68,15);
				    printf("Enter value in Mili Litre : ");
             		scanf("%f",&invol);	
					 outvol = invol * 1;				 
					gotoxy(68,17);
					printf("Value in Centi Meter Cube = %.4f",outvol);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
	                ch=getch();
	                a = ch;
	                if(a < 255)
	  	            {
	                  system("cls");
	                  volume();
	                }
		    	    break; 	   	    	        	    	    
		    	case 'E' :
				    exit(0);
					break;			
				case 'B' :
				    volume();
					break;
				default :
					gotoxy(68,19);
					printf("Please enter valid option !");
					gotoxy(68,20);
				     printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  volume();
                }		    
			 }
		     break;	 		     
		case '3' :
		 	gotoxy(68,12);
		     printf("3. METER CUBE to- ");
		     gotoxy(68,15);
		 	 printf("a) ----LITRE");
		 	 gotoxy(68,16);
		 	 printf("b) ----MILI LITRE");
		 	 gotoxy(68,17);
		 	 printf("c) ----CENTI METER CUBE");
		 	 gotoxy(68,21);
		 	 printf("<--(B)-Back");
		 	 gotoxy(68,22);
             printf("<--(E)-Exit");         
             ch2 = getch();
             system("cls");
             
             switch(ch2)
             {
             	case 'a' :
             		gotoxy(68,15);
             		printf("Enter value in Meter Cube : ");
             		scanf("%f",&invol);           		
             		outvol = invol * 1000;
             		gotoxy(68,17);
             		printf("Value in Litre = %.4f",outvol);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
	                ch=getch();
	                a = ch;
	                if(a < 255)
	  	            {
	                  system("cls");
	                  volume();
	                }
		    	    break;	    	    
		    	case 'b' :
		    		gotoxy(68,15);
				    printf("Enter value in Meter Cube : ");
             		scanf("%f",&outvol);					 
					outvol = invol * 1000000;
					gotoxy(68,17);
					printf("Value in Mili Litre = %.4f",outvol);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
	                ch=getch();
	                a = ch;
	                if(a < 255)
	  	            {
	                  system("cls");
	                  volume();
	                }
		    	    break;   					
			    case 'c' :
			    	gotoxy(68,15);
				    printf("Enter value in Meter Cube : ");
             		scanf("%f",&invol);				 
					outvol = invol * 1000000;
					gotoxy(68,17);
					printf("Value in Centi Meter Cube = %.4f",outvol);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
	                ch=getch();
	                a = ch;
	                if(a < 255)
	  	            {
	                  system("cls");
	                  volume();
	                }
		    	    break; 		         		    	  
				 case 'B' :
				    volume();
					break;
				 case 'E' :
				     exit(0);
					 break;	
				  default :
				  	gotoxy(68,19);
				  	printf("Please enter valid option !");
				  	gotoxy(68,20);
				    printf("Press any key to return back.");
	                ch=getch();
	                a = ch;
	                if(a < 255)
	  	            {
	                  system("cls");
	                  volume();
	                }	    
			 }
		     break;     	     
		case '4' :
			 gotoxy(68,12);
		     printf("1. Centi Meter Cube to-");
		     gotoxy(68,15);
		 	 printf("a) ----LITRE");
		 	 gotoxy(68,16);
		 	 printf("b) ----MILI LITRE");
		 	 gotoxy(68,17);
		 	 printf("c) ----METER CUBE");
		 	 gotoxy(68,21);
		 	 printf(" <--(B)-Back");
		 	 gotoxy(68,22);
             printf(" <--(E)-Exit");
             
             ch2 = getch();
             system("cls");
             
             switch(ch2)
             {
             	case 'a' :
             		gotoxy(68,15);
             	    printf("Enter value in Centi Meter Cube : ");
             		scanf("%f",&invol);	            		
             		outvol = invol * 0.001;
             		gotoxy(68,17);
             		printf("Value in Litre = %.4f",outvol);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                    ch=getch();
                    a = ch;
                    if(a < 255)
  	                {
                      system("cls");
                      volume();
                    }
		    	    break; 	    	    
		    	case 'b' :
		    		gotoxy(68,15);
				    printf("Enter value in Centi Meter Cube : ");
             		scanf("%f",&invol);					 
					outvol = invol * 1;
					gotoxy(68,17);
					printf("Value in Mili Litre = %.4f",outvol);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
                    ch=getch();
                    a = ch;
                    if(a < 255)
  	                {
                       system("cls");
                       volume();
                    }
		    	    break;              	
                case 'c' :
                	gotoxy(68,15);
				    printf("Enter value in Centi Meter Cube : ");
             		scanf("%f",&invol);					 
					outvol = (invol * 0.001) / (float)1000;
					gotoxy(68,17);
					printf("Value in Meter Cube = %.4f",outvol);
             		gotoxy(68,20);
			        printf("Press any key to return back.");
	                ch=getch();
	                a = ch;
	                if(a < 255)
	  	            {
	                  system("cls");
	                  volume();
	                }
		    	    break;								 			
				case 'B' :
					system("cls");
				    volume();
					break;				
				case 'E' :
				   exit(0);
				   break;
				default :
					gotoxy(68,19);
					printf("Please enter valid option !");
					gotoxy(68,20);
				    printf("Press any key to return back.");
                    ch=getch();
                    a = ch;
                    if(a < 255)
  	                {
                      system("cls");
                      volume();
                    }   			
			 }
		     break;  		 	   	
		default :
				gotoxy(68,19);
				printf("Please enter valid option !");
				gotoxy(68,20);
			    printf("Press any key to return back.");
                ch=getch();
                a = ch;
                if(a < 255)
  	            {
                  system("cls");
                  volume();
                }				
	}
}

void gotoxy(int x, int y)           //definition of gotoxy function//                                               
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

