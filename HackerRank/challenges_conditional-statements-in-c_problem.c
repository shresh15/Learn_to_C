// Given a positive integer denoting , do the following:

// If grater than equal to 1 and less than equal to 9, print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
// If greater than 9 , print Greater than 9.
int main(){
    int i;
    scanf("%d",&i);
    if(i==1)printf("one\n");
    else if(i==2)printf("two\n");
    else if(i==3)printf("three\n");
    else if(i==4)printf("four\n");
    else if(i==5)printf("five\n");
    else if(i==6)printf("six\n");
    else if(i==7)printf("seven\n");
    else if(i==8)printf("eight\n");
    else if(i==9)printf("nine\n");
    else printf("Greater than 9");
    return 0;
}