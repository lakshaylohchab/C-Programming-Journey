// File: 04_electricity_bill_slabs.c
// Purpose: Calculate electricity bill based on unit slabs and surcharge using an else-if ladder
// Slabs: First 50 units @ Rs 3.0/u | Next 100 @ Rs 4.5/u | Next 100 @ Rs 6.0/u | Above 250 @ Rs 7.5/u
// Sample Input: 280

#include <stdio.h>

int main() {
    float units, bill_amount, surcharge = 0.0, total_bill;

    printf("Enter total electricity units consumed: ");
    scanf("%f", &units);

    if (units < 0) {
        printf("Invalid input! Units cannot be negative.\n");
        return 0;
    }

    if (units <= 50) {
        bill_amount = units * 3.0;
    } else if (units <= 150) {
        bill_amount = (50 * 3.0) + ((units - 50) * 4.5);
    } else if (units <= 250) {
        bill_amount = (50 * 3.0) + (100 * 4.5) + ((units - 150) * 6.0);
    } else {
        bill_amount = (50 * 3.0) + (100 * 4.5) + (100 * 6.0) + ((units - 250) * 7.5);
    }

    // Add 10% surcharge if base bill exceeds Rs. 1000
    if (bill_amount > 1000.0) {
        surcharge = bill_amount * 0.10;
    }

    total_bill = bill_amount + surcharge;

    printf("\n--- Electricity Bill Breakdown ---\n");
    printf("Units Consumed : %.2f\n", units);
    printf("Base Charge    : Rs. %.2f\n", bill_amount);
    printf("Surcharge      : Rs. %.2f\n", surcharge);
    printf("Total Payable  : Rs. %.2f\n", total_bill);

    return 0;
}
