# IEEE754-Converter

This project is a C program that converts a number entered by the user into its representation in IEEE 754 standard, either as single precision (32 bit-float) or double precision (64 bit-double). The program converts the entered number into its IEEE 754 representation in binary format.

## Usage

The program presents a simple menu for the user to choose which type (float or double) of conversion to perform. After the user enters the number, the corresponding operation is carried out, and the result is displayed.

## Compilation and Execution

To compile and run the program, follow these steps:

1. Download or clone the C file.
2. Open a terminal or command prompt.
3. Compile the program using the following command:

    ```sh
    gcc -o IEEE754-Converter IEEE754-Converter.c
    ```

4. Run the program:

    ```sh
    ./IEEE754-Converter
    ```

## Testing

You can use your own number to test the program. For example, to test for a student number like `b181210037`:
- Integer part after the first letter: 1812
- Decimal part as the last two digits: 37
- Test number: 1812.37

## Sample Output

Below is a sample output showing how the program works:

```sh
Enter the number to convert: 1812.37
Select the conversion type:
1. Single Precision (32 bit-float)
2. Double Precision (64 bit-double)
Your choice: 1

Result (IEEE 754 - 32 bit float):
0 10001000 11000101000101100111010

Enter the number to convert: 1812.37
Select the conversion type:
1. Single Precision (32 bit-float)
2. Double Precision (64 bit-double)
Your choice: 2

Result (IEEE 754 - 64 bit double):
0 10000001000 11000101000101100111010010111000010100011110101110
