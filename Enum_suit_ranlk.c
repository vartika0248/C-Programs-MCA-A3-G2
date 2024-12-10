#include<stdio.h>
enum SUIT{Heart=1,Diamond,Spade,Club};
enum RANK{one=1,two,three,four,five,six,seven,eight,nine,ten,king,queen,joker};
int main()
{
  enum SUIT s;
  enum RANK r;
  s=Heart;
  r=one;
  switch(s)
 { 
  case Heart:
  	printf("Heart\n");
  case Diamond:
  	printf("Diamond\n");
  case Spade:
    printf("Spade\n");
  case Club:
  	printf("Club\n");
    break;
  default:
  	printf("Suits completed\n");
 }
 printf("\n");
  switch(r)
  {
  	case one:
  		printf("one\n");
  	case two:
  		printf("two\n");
  	case three:
  		printf("three\n");
  	case four:
  		printf("four\n");
  	case five:
  		printf("five\n");
  	case six:
  		printf("six\n");
  	case seven:
	    printf("seven\n");
	case eight:
		printf("eight\n");
	case nine:
		printf("nine\n");
	case ten:
		printf("ten\n");
	case king:
		printf("king\n");
	case queen:
		printf("queen\n");
	case joker:
		printf("joker\n");
	    break;
	default:
		printf("Rank completed\n");
   }
return 0;
}
