# project
This C program simulates a pizza ordering system where users can choose between veg and non-veg pizzas and select from a menu of different pizza options. Let's break down the program and its functionalities in detail:

Header File and Global Variables:
The program includes the standard input/output header file stdio.h.
Global variables are declared to store user choices and calculate prices.
Display Menu Function (displayMenu()):
This function displays the menu of pizza options based on whether the user chooses veg or non-veg.
It prints the available pizza options along with their prices.
Main Function:
The main() function serves as the entry point of the program.
It prompts the user to choose between veg and non-veg pizzas and stores the choice.
Based on the user's choice, it sets flags (veg and non_veg) to indicate the type of pizza chosen.
Menu Display and Price Calculation:
After the user's choice is received, the menu is displayed using the displayMenu() function.
The base price of the pizzas is calculated based on the user's choice of veg or non-veg.
The user is prompted to select a pizza option (1-12) and enter the quantity.
Price Calculation:
Depending on the pizza choice and quantity, the total price is calculated.
For non-veg pizzas, prices are directly calculated based on the choice.
For veg pizzas, the base price is added to the price of the selected pizza option multiplied by the quantity.
Total Bill Calculation:
After calculating the total pizza price, the program calculates the GST (Goods and Services Tax) at 18%.
The user is prompted to enter a tip amount.
The total bill is calculated by adding the total pizza price, GST, and tip.
Continuous Loop:
The program runs in an infinite loop, allowing the user to continuously order pizzas without exiting the program.
After displaying the total bill, the loop repeats, prompting the user for another order.
Input Validation:
The program performs basic input validation, ensuring that the user enters valid choices and quantities.
It handles invalid choices by displaying an error message.
This program provides a simple simulation of a pizza ordering system, allowing users to choose from a menu, specify quantities, calculate the total bill including taxes and tips, and place orders continuously.
