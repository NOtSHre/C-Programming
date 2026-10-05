/*
 * Computer Programming (C Language) - Lab Sheet 3
 * B.E. Computer Engineering, 1st Sem
 *
 * All 12 programs are in this one file. Each program is a function
 * (q1 to q12), and main() shows a menu so you can pick which one to run.
 */

#include <stdio.h>
#include <math.h>

#define pi 3.14

/* ------------------------------------------------------------------
 * Q1. Write a program to convert temperature given in degree Centigrade
 *     to Fahrenheit and Kelvin.
 *     [ Hint: F = (1.8*C) + 32 and K = C + 273 ]
 * ------------------------------------------------------------------ */
void q1(void) {
    int C, F, K;
    printf("enter the temperature in Centigrade\n");
    scanf("%d", &C);
    F = (1.8 * C) + 32;
    printf("the temperature in Fahrenheit is %d\n", F);
    K = C + 273;   /* fixed: the hint says K = C + 273 (original used F + 273) */
    printf("the temperature in Kelvin is %d\n", K);
}

/* ------------------------------------------------------------------
 * Q2. Write a program to find Volume and Surface Area of Sphere.
 *     [ Hint: A = 4*pi*r^2 and V = 4/3*pi*r^3 ]
 * ------------------------------------------------------------------ */
void q2(void) {
    float v, a, r;
    printf("enter the radius of sphere\n");
    scanf("%f", &r);
    v = (4.0 / 3.0) * pi * pow(r, 3);
    a = (4.0) * pi * pow(r, 2);
    printf("the volume of sphere is %.2f\n", v);
    printf("the surface area of sphere is %.2f\n", a);
}

/* ------------------------------------------------------------------
 * Q3. Write a program to read marks obtained in five different subjects
 *     and calculate the percentage obtained.
 * ------------------------------------------------------------------ */
void q3(void) {
    float a, b, c, d, e, f = 500.0, o, p;
    printf("enter the obtained marks in maths,english,Science,Social,Nepali\n");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    o = a + b + c + d + e;
    p = (o / f) * 100;
    printf("percentage= %.2f\n", p);
}

/* ------------------------------------------------------------------
 * Q4. Write a program in C to evaluate following mathematical expressions.
 *     a. f(x) = { x^2 + 4, x < 0
 *               { x^2 - 4, x >= 0
 * ------------------------------------------------------------------ */
void q4(void) {
    int x, y;
    printf("enter X\n");
    scanf("%d", &x);
    if (x < 0) {
        y = pow(x, 2) + 4;
        printf("%d\n", y);
    } else {
        y = pow(x, 2) - 4;
        printf("%d\n", y);
    }
}

/* ------------------------------------------------------------------
 * Q5. Write a program to enter two numbers and store them in two
 *     different variables and swap their values.
 *     For example, if a=5 and b=10 then the output should be a=10 and b=5.
 * ------------------------------------------------------------------ */
void q5(void) {
    int a, b, c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("\nBefore : a = %d, b = %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("\nAfter : a = %d, b = %d\n", a, b);
}

/* ------------------------------------------------------------------
 * Q6. Write a program to accept no. of days from the user and convert
 *     it into years, months, weeks and remaining days.
 * ------------------------------------------------------------------ */
void q6(void) {
    int y, n, m, w;
    printf("Enter the no of days: ");
    scanf("%d", &n);
    y = n / 365;
    n = n - y * 365;
    m = n / 30;
    n = n - m * 30;
    w = n / 7;
    n = n - w * 7;
    printf("no of days is %d years, %d months, %d weeks, %d days\n", y, m, w, n);
}

/* ------------------------------------------------------------------
 * Q7. Write a program to find the square root of a number.
 * ------------------------------------------------------------------ */
void q7(void) {
    float n, y;
    printf("enter the number\n");
    scanf("%f", &n);
    y = sqrt(n);
    printf("the square root of %.2f is %.2f\n", n, y);
}

/* ------------------------------------------------------------------
 * Q8. Write a program to calculate and print Simple Interest (SI) and
 *     net amount (A), given that SI = PTR/100 and A = SI + P.
 * ------------------------------------------------------------------ */
void q8(void) {
    float p, t, r, si, a;
    printf("enter the principle, time, rate\n");
    scanf("%f%f%f", &p, &t, &r);
    si = (p * t * r) / 100;
    a = si + p;
    printf("the simple interest is %f\n", si);
    printf("the amount is %f\n", a);
}

/* ------------------------------------------------------------------
 * Q9. Write a program which inputs two numbers (Dividend and Divisor)
 *     and prints remainder & quotient.
 * ------------------------------------------------------------------ */
void q9(void) {
    int a, b, r, q;
    printf("enter the divisor and dividend\n");
    scanf("%d%d", &a, &b);
    q = b / a;
    r = b % a;
    printf("the remainder is %d\n", r);
    printf("the quotient is %d\n", q);
}

/* ------------------------------------------------------------------
 * Q10. Write a program to evaluate the following expression.
 *      a. f(x) = { x^7 + 4e^x - sqrt(x),    x < 2
 *                { x^6 + 5ln(x) + 3sqrt(x), x >= 2
 * ------------------------------------------------------------------ */
void q10(void) {
    int x, y;
    printf("enter X\n");
    scanf("%d", &x);
    if (x < 2) {
        y = pow(x, 7) + 4 * exp(x) - sqrt(x);
        printf("%d\n", y);
    } else {
        y = pow(x, 6) + 5 * log(x) + 3 * sqrt(x);
        printf("%d\n", y);
    }
}

/* ------------------------------------------------------------------
 * Q11. Write a program to enter two numbers and display the largest one.
 * ------------------------------------------------------------------ */
void q11(void) {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("%d is the largest number.\n", a);
    } else {
        printf("%d is the largest number.\n", b);
    }
}

/* ------------------------------------------------------------------
 * Q12. Write a program to check whether the given number is odd or even.
 * ------------------------------------------------------------------ */
void q12(void) {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("%d is even.\n", n);
    } else {
        printf("%d is odd.\n", n);
    }
}

/* ------------------------------------------------------------------
 * main(): menu to choose which question to run
 * ------------------------------------------------------------------ */
int main(void) {
    int choice;

    do {
        printf("\n===== Lab Sheet 3 =====\n");
        printf(" 1. Temperature conversion\n");
        printf(" 2. Sphere volume and surface area\n");
        printf(" 3. Percentage of five subjects\n");
        printf(" 4. Piecewise function (x^2 +/- 4)\n");
        printf(" 5. Swap two numbers\n");
        printf(" 6. Days to years, months, weeks, days\n");
        printf(" 7. Square root\n");
        printf(" 8. Simple interest and amount\n");
        printf(" 9. Quotient and remainder\n");
        printf("10. Piecewise function (x^7 / x^6 expression)\n");
        printf("11. Largest of two numbers\n");
        printf("12. Odd or even\n");
        printf(" 0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1:  q1();  break;
            case 2:  q2();  break;
            case 3:  q3();  break;
            case 4:  q4();  break;
            case 5:  q5();  break;
            case 6:  q6();  break;
            case 7:  q7();  break;
            case 8:  q8();  break;
            case 9:  q9();  break;
            case 10: q10(); break;
            case 11: q11(); break;
            case 12: q12(); break;
            case 0:  printf("Goodbye!\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while (choice != 0);

    return 0;
}
