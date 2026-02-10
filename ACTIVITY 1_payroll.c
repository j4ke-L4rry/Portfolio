#include <stdio.h>

void inputEmployeeData(int *id, char *name, int *hours, float *rate) {
    printf("Employee ID: ");
    scanf("%d", id);

    printf("Name: ");
    scanf(" %[^\n]", name);

    printf("Hours Worked: ");
    scanf("%d", hours);

    printf("Hourly rate: ");
    scanf("%f", rate);
}

void calculatePayroll(int hours, float rate, float *grosspay, float *deductions, float *netpay) {
    const float TAX_RATE = 0.10;
    *grosspay = hours * rate;
    *deductions = (*grosspay) * TAX_RATE;
    *netpay = (*grosspay) - (*deductions);
}

void showPayrollSummary(int id, char *name, int hours, float rate, float grosspay, float deductions, float netpay) {
    printf("\n--- Payroll Summary ---\n");
    printf("Employee ID: %d\n", id);
    printf("Name: %s\n", name);
    printf("Hours worked: %d\n", hours);
    printf("Hourly rate: %.2f\n", rate);
    printf("Gross pay: PHP %.2f\n", grosspay);
    printf("Deductions: PHP %.2f\n", deductions);
    printf("Net pay: PHP %.2f\n", netpay);
}

int main() {
    int id, hours;
    char name[500];
    float rate;
    float grosspay, deductions, netpay;

    inputEmployeeData(&id, name, &hours, &rate);
    calculatePayroll(hours, rate, &grosspay, &deductions, &netpay);
    showPayrollSummary(id, name, hours, rate, grosspay, deductions, netpay);

    return 0;
}
