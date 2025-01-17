#include <stdio.h>


struct Complex {
    float real;
    float imag;
};


struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}


struct Complex multiplyComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    result.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    return result;
}

int main() {
    struct Complex num1, num2, sum, product;

    
    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);

    
    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);

   
    sum = addComplex(num1, num2);
    product = multiplyComplex(num1, num2);

 
    printf("\nThe sum of the complex numbers is: %.2f + %.2fi\n", sum.real, sum.imag);
    printf("The product of the complex numbers is: %.2f + %.2fi\n", product.real, product.imag);

    return 0;
}
