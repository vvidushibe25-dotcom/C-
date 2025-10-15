#include <stdio.h>
#include <math.h>


int main() {
    double num, radians;

    printf("Enter a number: ");
    scanf("%lf", &num);

    radians = num * (M_PI / 180.0);

    printf("\n Math Function Results\n");
    printf("sin(%.2lf degrees) = lf\n", num, sin(radians));
    printf("cos(%.2lf degrees) = %.4lf\n", num, cos(radians));

    if (num > 0)
        printf("log(%.2lf) = %.4lf\n", num, log(num));
    else
        printf("log(%.2lf) = Undefined (log of non-positive number)\n", num);

    if (num >= 0)
        printf("sqrt(%.2lf) = %.4lf\n", num, sqrt(num));
    else
        printf("sqrt(%.2lf) = Undefined (negative number)\n", num);

    printf("exp(%.2lf) = %.4lf\n", num, exp(num));
    printf("pow(%.2lf, 2) = %.4lf\n", num, pow(num, 2));

    return 0;
}


}
