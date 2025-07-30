#include <stdio.h>
void length_converter();
void weight_converter();
void temperature_converter();
float meters_to_feet(float m);
float feet_to_meters(float ft);
float celsius_to_fahrenheit(float c);
float fahrenheit_to_celsius(float f);
float kg_to_pounds(float kg);
float pounds_to_kg(float lbs);
int main() {
    int choice;
    printf("=== SIMPLE UNIT CONVERTER ===\n");
    while(1) {
        printf("\nChoose conversion type:\n");
        printf("1. Length (Meters <-> Feet)\n");
        printf("2. Weight (Kg <-> Pounds)\n");
        printf("3. Temperature (Celsius <-> Fahrenheit)\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                length_converter();
                break;
            case 2:
                weight_converter();
                break;
            case 3:
                temperature_converter();
                break;
            case 4:
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
void length_converter() {
    int option;
    float value;
    printf("\nLENGTH CONVERTER\n");
    printf("1. Meters to Feet\n");
    printf("2. Feet to Meters\n");
    printf("Enter your choice: ");
    scanf("%d", &option);
    printf("Enter value to convert: ");
    scanf("%f", &value);
    if(option == 1) {
        printf("%.2f meters = %.2f feet\n", value, meters_to_feet(value));
    } else if(option == 2) {
        printf("%.2f feet = %.2f meters\n", value, feet_to_meters(value));
    } else {
        printf("Invalid choice!\n");
    }
}
void weight_converter() {
    int option;
    float value;
    printf("\nWEIGHT CONVERTER\n");
    printf("1. Kg to Pounds\n");
    printf("2. Pounds to Kg\n");
    printf("Enter your choice: ");
    scanf("%d", &option);
    printf("Enter value to convert: ");
    scanf("%f", &value);
     if(option == 1) {
        printf("%.2f kg = %.2f pounds\n", value, kg_to_pounds(value));
    } else if(option == 2) {
        printf("%.2f pounds = %.2f kg\n", value, pounds_to_kg(value));
    } else {
        printf("Invalid choice!\n");
    }
}
void temperature_converter() {
    int option;
    float value;
    printf("\nTEMPERATURE CONVERTER\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &option);
     printf("Enter value to convert: ");
    scanf("%f", &value);
    if(option == 1) {
        printf("%.2f°C = %.2f°F\n", value, celsius_to_fahrenheit(value));
    } else if(option == 2) {
        printf("%.2f°F = %.2f°C\n", value, fahrenheit_to_celsius(value));
    } else {
        printf("Invalid choice!\n");
    }
}
float meters_to_feet(float m) {
    return m * 3.28084;
}
float feet_to_meters(float ft) {
    return ft / 3.28084;
}
float celsius_to_fahrenheit(float c) {
    return (c * 9/5) + 32;
}
float fahrenheit_to_celsius(float f) {
    return (f - 32) * 5/9;
}
float kg_to_pounds(float kg) {
    return kg * 2.20462;
}
float pounds_to_kg(float lbs) {
    return lbs / 2.20462;
}
