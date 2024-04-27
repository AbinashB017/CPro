#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Function to convert decimal to binary
long decimalToBinary(int decimalNum) {
    long binaryNum = 0;
    int remainder, base = 1;

    while (decimalNum > 0) {
        remainder = decimalNum % 2;
        binaryNum += remainder * base;
        decimalNum /= 2;
        base *= 10;
    }

    return binaryNum;
}
// convert decimal to octal 
//     long decimalToOctal(int decimalNum){
//     int arr[40];
//     int decimalNum=25,i=0,k;
//     while(decimalNum>8){
//          k=decimalNum/8;
//         int r=decimalNum%8;
//         arr[i]=r;
// decimalNum=decimalNum/8;
// i++;
//     }
//     printf("%d",k);
//     for(int p=i-1;p>=0;p--){
//     printf("%d",arr[p]);
//     }
// return 0;
// Function to convert decimal to octal
// long decimalToOctal(int decimalNum) {
//     long octalNum = 0;
//     int i = 1;

//     while (decimalNum != 0) {
//         octalNum += (decimalNum % 8) * i;
//         decimalNum /= 8;
//         i =i*10;
//     }
//     return octalNum;
// }

// Function to convert decimal to hexadecimal
char* decimalToHexadecimal(int decimalNum) {
    char* hexNum = (char*)malloc(100 * sizeof(char));
    int temp, i = 0;
    while (decimalNum != 0) {
        temp = decimalNum % 16;
        if (temp < 10) {
            hexNum[i++] = temp + 48;
        } else {
            hexNum[i++] = temp + 55;
        }
        decimalNum /= 16;
    }
    hexNum[i] = '\0';

    strrev(hexNum); // Reverse the string to get the correct hexadecimal representation
    return hexNum;
}

// Function to convert binary to decimal
int binaryToDecimal(long binaryNum) {
    int decimalNum = 0, base = 1, remainder;

    while (binaryNum > 0) {
        remainder = binaryNum % 10;
        decimalNum += remainder * base;
        binaryNum /= 10;
        base *= 2;
    }

    return decimalNum;
}

// Function to convert octal to decimal
int octalToDecimal(long octalNum) {
    int decimalNum = 0, i = 0, remainder;

    while (octalNum != 0) {
        remainder = octalNum % 10;
        decimalNum += remainder * pow(8, i);
        ++i;
        octalNum /= 10;
    }

    return decimalNum;
}

// Function to convert hexadecimal to decimal
int hexadecimalToDecimal(char* hexNum) {
    int len = strlen(hexNum);
    int decimalNum = 0, base = 1;

    for (int i = len - 1; i >= 0; i--) {
        if (hexNum[i] >= '0' && hexNum[i] <= '9') {
            decimalNum += (hexNum[i] - 48) * base;
        } else if (hexNum[i] >= 'A' && hexNum[i] <= 'F') {
            decimalNum += (hexNum[i] - 55) * base;
        }
        base *= 16;
    }

    return decimalNum;
}

int main() {
    int n, num;
    long binaryResult, octalResult;
    char hexadecimalResult[100];

    printf("Number System Conversion Tool\n");
    printf("1. Decimal to Binary\n");
    printf("2. Decimal to Octal\n");
    printf("3. Decimal to Hexadecimal\n");
    printf("4. Binary to Decimal\n");
    printf("5. Octal to Decimal\n");
    printf("6. Hexadecimal to Decimal\n");
    printf("Enter your choice: ");
    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("Enter the decimal number: ");
            scanf("%d", &num);
            binaryResult = decimalToBinary(num);
            printf("Binary: %ld\n", binaryResult);
            break;
        case 2:
          printf("Enter the decimal number: ");
             scanf("%d", &num);
            // long decimalToOctal(int decimalNum){
    int arr[40];
   int i=0,k;
    while(num>8){
         k=num/8;
        int r=num%8;
        arr[i]=r;
num=num/8;
i++;
    }
    printf("%d",k);
    for(int p=i-1;p>=0;p--){
    printf("%d",arr[p]);
    }
return 0;
           
            // octalResult = decimalToOctal(num);
            // printf("Octal: %lo\n", octalResult);
            // break;
        case 3:
            printf("Enter the decimal number: ");
            scanf("%d", &num);
            strcpy(hexadecimalResult, decimalToHexadecimal(num));
            printf("Hexadecimal: %s\n", hexadecimalResult);
            break;
        case 4:
            printf("Enter the binary number: ");
            scanf("%ld", &binaryResult);
            printf("Decimal: %d\n", binaryToDecimal(binaryResult));
            break;
        case 5:
            printf("Enter the octal number: ");
            scanf("%lo", &octalResult);
            printf("Decimal: %d\n", octalToDecimal(octalResult));
            break;
        case 6:
            printf("Enter the hexadecimal number: ");
            scanf("%s", hexadecimalResult);
            printf("Decimal: %d\n", hexadecimalToDecimal(hexadecimalResult));
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}