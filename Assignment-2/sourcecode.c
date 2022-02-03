#include<stdio.h>
#include<math.h>

struct dim{
    int l;
    float b;
    float peri;
    float area;
};


struct dim func(int l,float b) {
    // struct str rect1=(struct str)malloc(sizeof(struct str));
    struct dim rect1;
    rect1.l=l;
    rect1.b=b;
    rect1.peri=2*(rect1.l+rect1.b);
    rect1.area=(rect1.l*rect1.b);
    return (rect1) ;
};

int main(){
    int l;
    float b;
    // struct str rect=(struct str)malloc(sizeof(struct str));
    struct dim rect;
    printf("Enter integer length: ");
    scanf("%d", &l);
    printf("Enter float breadth: ");
    scanf("%f", &b);

    rect=func(l,b);
    printf("length: %d\n", rect.l);
    printf("breadth: %f\n", rect.b);
    printf("area: %f\n", rect.area);
    printf("perimeter: %f\n", rect.peri);

    return 0;
}