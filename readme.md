# C++ Programs

This repository contains simple C++ programs for various calculations.

## Files

- **factorial.cpp**: Computes the factorial of a non-negative integer (0 to 20).
- **profitandlose.cpp**: Calculates profit/loss and percentage based on cost price and selling price.

## Build

Use a C++ compiler such as g++ or cl:

```powershell
g++ factorial.cpp -o factorial.exe
g++ profitandlose.cpp -o profitandlose.exe
```

## Run

### Factorial Calculator
```powershell
./factorial.exe
```
Enter a non-negative integer between 0 to 20 when prompted.

### Profit and Loss Calculator
```powershell
./profitandlose.exe
```
Enter the cost price and selling price when prompted.

## Notes

- **factorial.cpp**: Uses `unsigned long long` and is limited to 20 to avoid overflow.
- **profitandlose.cpp**: Calculates profit/loss and percentage based on the difference between selling price and cost price.