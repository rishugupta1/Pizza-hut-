# PIZZA HUTT PROJECT
This C program is a simple pizza ordering system where users can choose between vegetarian (veg) and non-vegetarian (non-veg) pizzas, select their desired pizza from the menu, specify the quantity, and calculate the total bill including taxes and tips. Let's break down the key components and functionalities:

1. **Display Menu Function (`displayMenu`):**
   - This function displays the menu based on the user's choice (veg or non-veg) and returns the base price of the pizzas. It uses a switch-case statement to print the menu options for both veg and non-veg pizzas.

2. **Main Function:**
   - The `main` function is the entry point of the program.
   - It initializes variables such as `choice`, `pizza_choice`, `quantity`, `size_t`, and `tip`.
   - It displays a welcome message and prompts the user to enter their choice (veg or non-veg).
   - Based on the user's choice, it sets flags (`veg` or `non_veg`) and calls the `displayMenu` function to display the respective menu and obtain the base price.
   - It calculates the total price based on the user's choice of pizza, quantity, and base price.
   - It prompts the user to enter a tip amount and calculates the total bill including taxes (GST) and tip.
   - The program runs in an infinite loop to continuously take orders until manually terminated.

3. **Menu Options and Price Calculation:**
   - The program provides a list of pizza options for both veg and non-veg categories, along with their respective prices.
   - Based on the user's choice of pizza and quantity, it calculates the total price. For non-veg pizzas, it directly calculates the total price based on the chosen pizza option and quantity. For veg pizzas, it adds the base price to the price of the selected pizza option multiplied by the quantity.

4. **Tax Calculation:**
   - The program calculates GST (Goods and Services Tax) at a rate of 18% on the total price (excluding the tip).

5. **Tip Calculation:**
   - The program prompts the user to enter a tip amount, which is then added to the total bill.

6. **Displaying Total Bill:**
   - After calculating the total bill (including the total pizza price, GST, and tip), the program displays the total bill amount.

7. **Infinite Loop:**
   - The program runs in an infinite loop to continuously take pizza orders until manually terminated. This allows users to place multiple orders without restarting the program.

Overall, this program provides a basic pizza ordering system with options for both veg and non-veg pizzas, along with functionality to calculate the total bill including taxes and tips. However, it lacks error handling and validation for user inputs, which could be added to enhance the robustness of the system.
