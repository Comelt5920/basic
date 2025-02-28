#include <stdio.h>

int main() {
    double D, X, Y, M;
    double time_minutes, total_fuel;

    printf("Please enter the initial distance (D) in kilometers: ");
    scanf("%lf", &D);

    printf("Please enter the speed of Mr. A (X) in kilometers per hour: ");
    scanf("%lf", &X);

    printf("Please enter the speed of Mr. B (Y) in kilometers per hour: ");
    scanf("%lf", &Y);

    printf("Please enter the distance the car can travel per liter of fuel (M) in kilometers: ");
    scanf("%lf", &M);

    if (X <= Y) {
        printf("Since Mr. A's speed is less than or equal to Mr. B's speed, Mr. A will not be able to catch up with Mr. B.\n");
    } else {
        time_minutes = (D / (X - Y)) * 60.0;
        total_fuel = (D * (X + Y)) / (M * (X - Y));

        printf("Mr. A will take %.2f minutes to catch up with Mr. B.\n", time_minutes);
        printf("Mr. A and Mr. B will use a total of %.2f liters of fuel from the present until Mr. A catches up with Mr. B.\n", total_fuel);
    }

    return 0;
}