#include "GraphicalDisplay.h"
//#include "MyExceptions.h"
GraphicalDisplay::GraphicalDisplay()
{
}

GraphicalDisplay::~GraphicalDisplay()
{
}

inline void GraphicalDisplay::drawTriangle(int a1, int a2, int b1, int b2) {		//rysowanie graficzne trojkata
	/*
	printf("%*st\n", a1, "");
	printf("%*s", a1, "\n");
	printf("t\n");
	printf("%*s", abs(b2), "\n");
	printf("%*st\n", b1, "");
	*/

	int further;

	int dx = b1 - a1;
	int dy = b2 - a2;
	//printf("dy=%d  dx=%d\n", dy, dx);
	double slope = dy / dx;
	//printf("Slope= %p  \n", slope);
	double intersect = a2 - slope * a1;
	//printf("intersect = %p  \n", intersect);

	//double precision = 0.0001;



	for (int y = a2; y >= b2; y--) {
		if (a1 > b1) further = a1;
		else further = b1;
		for (int x = 0; x <= further; x++) {
			double pierwsza = a1 / a2 * x;
			double druga = (b1 / b2) * x;
			double trzecia = slope * x + intersect;
			if (y <= pierwsza && y >= druga && y >= trzecia) {
				printf("t");
			}
			else printf(" ");
			if (x == further) printf("\n");
		}
	}
	printf("\n");
}

inline void GraphicalDisplay::drawCircle(int r) {		//rysowanie graficzne ko³a
	double d;

	//try {
		for (int i = 0; i <= 2 * r; i++) {
			for (int j = 0; j <= 2 * r; j++) {
				d = sqrt((double)(i - r) * (i - r) + (j - r) * (j - r));
				if (d <= r) {
					printf("c");
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
		}
	//}
	//catch (MyExceptions::exception EXCEPTION_CODE)
	//{
	//	seeExceptions(EXCEPTION_CODE)
	//}


}

inline void GraphicalDisplay::drawParallelogram(int a1, int a2, int b1, int b2) {		//rysowanie graficzne rownolegloboku


	/*printf("%*sp\n", a1, "");
	printf("%*s", a2, "\n");
	printf("p%*s",a1+b1,"p");
	printf("%*s", b2, "\n");
	printf("%*sp\n", b1, "");*/
	int p1 = a1 + b1;
	int p2 = a2 + b2;
	double dxup = p1 - a1;
	double dyup = p2 - a2;
	//printf("dy=%f  dx=%f\n", dyup, dxup);
	double slopeup = dyup / dxup;
	//printf("Slope= %f  \n", slopeup);
	double intersectup = a2 - slopeup * a1;
	//printf("intersect = %f  \n", intersectup);

	double dxdown = p1 - b1;
	double dydown = p2 - b2;
	//printf("dy=%f  dx=%f\n", dydown, dxdown);
	double slopedown = dydown / dxdown;
	//printf("Slope= %f  \n", slopedown);
	double intersectdown = b2 - slopedown * b1;
	//printf("intersect = %f  \n", intersectdown);
	double precision = 0.0001;
	int further;
	for (int y = a2; y >= b2; y--) {
		further = a1 + b1;
		for (int x = 0; x <= further; x++) {
			double pierwsza = a1 / a2 * x;
			double druga = (b1 / b2) * x;
			double trzecia = slopeup * x + intersectup;
			double czwarta = slopedown * x + intersectdown;
			if (y <= pierwsza && y >= druga && y <= trzecia && y >= czwarta) {
				printf("p");
			}
			else printf(" ");
			if (x == further) printf("\n");
		}
	}
	printf("\n");

}
