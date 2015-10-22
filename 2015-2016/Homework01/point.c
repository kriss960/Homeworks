#include <stdio.h>

typedef struct
{
	int x;
	int y;
}Point;

void cordinate(Point *point)
{
	point->x++;
	point->y++;
}

int main()
{
	Point point;
	scanf("%d",&point.x);
	scanf("%d",&point.y);
	cordinate(&point);
	printf("x-%d y-%d",point.x,point.y);
	return 0;
}
