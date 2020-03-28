#include<stdio.h>
#include<conio.h>
main(){
int num,a,i;
char v,o=2;
do{
v='y';
printf(" think about a letter given below\n");
printf(" A B C D E F\n");
printf(" G H I J K L\n");
printf(" M N O P Q R\n");
printf(" S T U V W X\n");
printf("     Y Z    \n");
printf("please write the line no.,in which the the letter is situated\n");
scanf("%d",&num);
switch (num)
{
case 1:{ printf("please input the column no.,in which the letter is situated\n");
	 scanf("%d",&a);
	 printf("\nLOADING\n");
	 for(i=0;i<=100;i++)
	 { printf("%c ",o);
	 }
	 printf("  100%\n\n");
	 switch (a)
	 {
	 case 1:{ printf("the letter is A\n");
		  break;
		}
	 case 2:{ printf("the letter is B\n");
		  break;
		}
	 case 3:{ printf("the letter is C\n");
		  break;
		}
	 case 4:{ printf("the letter is D\n");
		  break;
		}
	 case 5:{ printf("the letter is E\n");
		  break;
		}
	 case 6:{ printf("the letter is F\n");
		  break;
		}
	 default:{ printf("\ninvalid enter plz check it\n");
		 }
	 }
       break;
       }
case 2:{ printf("please input the column no.,in which the letter is situated\n");
	 scanf("%d",&a);
	 printf("\nLOADING\n");
	 for(i=0;i<=100;i++)
	 { printf("%c ",o);
	 }
	 printf("  100%\n\n");
	 switch (a)
	 {
	 case 1:{ printf("the letter is G\n");
		  break;
		}
	 case 2:{ printf("the letter is H\n");
		  break;
		}
	 case 3:{ printf("the letter is I\n");
		  break;
		}
	 case 4:{ printf("the letter is J\n");
		  break;
		}
	 case 5:{ printf("the letter is K\n");
		  break;
		}
	 case 6:{ printf("the letter is L\n");
		  break;
		}
	default:{ printf("\ninvalid enter plz check it\n");
		 }
	 }
       break;
       }
case 3:{ printf("please input the column no.,in which the letter is situated\n");
	 scanf("%d",&a);
	 printf("\nLOADING\n");
	 for(i=0;i<=100;i++)
	 { printf("%c ",o);
	 }
	 printf("  100%\n\n");
	 switch (a)
	 {
	 case 1:{ printf("the letter is M\n");
		  break;
		}
	 case 2:{ printf("the letter is N\n");
		  break;
		}
	 case 3:{ printf("the letter is O\n");
		  break;
		}
	 case 4:{ printf("the letter is P\n");
		  break;
		}
	 case 5:{ printf("the letter is Q\n");
		  break;
		}
	 case 6:{ printf("the letter is R\n");
		  break;
		}
	default:{ printf("\ninvalid enter plz check it\n");
		 }
	 }
       break;
       }
case 4:{ printf("please input the column no.,in which the letter is situated\n");
	 scanf("%d",&a);
	 printf("\nLOADING\n");
	 for(i=0;i<=100;i++)
	 { printf("%c ",o);
	 }
	 printf("  100%\n\n");
	 switch (a)
	 {
	 case 1:{ printf("the letter is S\n");
		  break;
		}
	 case 2:{ printf("the letter is T\n");
		  break;
		}
	 case 3:{ printf("the letter is U\n");
		  break;
		}
	 case 4:{ printf("the letter is V\n");
		  break;
		}
	 case 5:{ printf("the letter is W\n");
		  break;
		}
	 case 6:{ printf("the letter is X\n");
		  break;
		}
	default:{ printf("\ninvalid enter plz check it\n");
		 }
	 }
       break;
       }
case 5:{ printf("please input the column no.,in which the letter is situated\n");
	 scanf("%d",&a);
	 printf("\nLOADING\n");
	 for(i=0;i<=100;i++)
	 { printf("%c ",o);
	 }
	 printf("  100%\n\n");
	 switch (a)
	 {
	 case 1:{ printf("plz check the column no.\n");
		  break;
		}
	 case 2:{ printf("plz check the column no.\n");
		  break;
		}
	 case 3:{ printf("the letter is Y\n");
		  break;
		}
	 case 4:{ printf("the letter is Z\n");
		  break;
		}
	 case 5:{ printf("plz check the column no.\n");
		  break;
		}
	 case 6:{ printf("plz check the column no.\n");
		  break;
		}
	default:{ printf("\ninvalid enter plz check it\n");
		 }
	 }
       break;
       }
default:{ printf("\ninvalid enter plz check it\n");
		 }
}
printf("\nTHANK YOU FOR USING MY PROGRAM\n");
printf("\nprogrammed by ASUTOSH PATI\n");
printf("\nDo you want to continue y/n ?\n");
v=getch();
}
while(v=='y'||v=='Y');
return 0;
}


