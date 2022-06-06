#include <stdio.h>
#include "car.h"
int main()
{
	struct car mycar = { "sonata", 2015,120000 };

	printf("Name is %s.\n", mycar.name);
	printf("Year is %d.\n", mycar.year);
	printf("Mileage is %d\n\n\n", mycar.mileage);

	printf("My car adress is %p\n", &mycar);
	printf("&(mycar.year) adress is %p\n\n", &mycar.year);

	printf("Enter the mileage update : ");
	scanf_s("%d", &mycar.mileage);
	printf("The new mileage is %d\n", mycar.mileage);


	if (mycar.mileage > 150000)
		printf("It's old.\n");
	else
		printf("It's not that old.\n");

	struct car* p = &mycar;

	int k;
	printf("Enter the New_year : ");
	scanf_s("%d", &k);
	p->year = k;
	//(*p).year;
	printf("New_car year is %d.\n",mycar.year);



	return 0;
}