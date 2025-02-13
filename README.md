
---

# Flight Booking System

## Overview
The **Flight Booking System** is a C-based console application that allows users to enter passenger details, calculate airfare, and generate e-tickets. The system applies discounts for senior citizens and charges extra for baggage over the weight limit.

## Features
- **Passenger Registration**: Collects passenger details such as name, gender, age, membership status, and baggage weight.
- **Airfare Calculation**: 
  - Base fare: ₹150 per km of travel.
  - Discount: 40% off for passengers aged 60 and above.
  - Extra baggage charge: ₹20 per kg for baggage exceeding 15 kg.
- **E-Ticket Generation**: Displays boarding details and fare information.
- **Passenger Profile Viewing**: Displays stored passenger details.

## Technical Requirements
- **Language**: C
- **Compiler**: GCC or any C compiler
- **OS Compatibility**: Windows, Linux, macOS

## Installation & Compilation
1. Install a C compiler (e.g., GCC).
2. Compile the program:
   ```sh
   gcc flight_booking.c -o flight_booking
   ```
3. Run the program:
   ```sh
   ./flight_booking
   ```

## How It Works
1. The system asks for the boarding date, source, and destination.
2. The user enters the number of passengers and their details.
3. The system calculates airfare based on distance, age, and baggage weight.
4. A menu allows users to:
   - View passenger profiles.
   - View airfare calculations.
   - Generate an e-ticket.
   - Exit the program.

## Future Enhancements
- Implement **file storage** to save passenger data.
- Add **seat selection** and **flight schedules**.
- Develop a **graphical user interface (GUI)**.

## Author
**Shakti Dheerays S**  
Developed as part of **C Programming Project**.

---

