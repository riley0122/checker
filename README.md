# Checker System Readme

**W.I.P** Most of the features are NOT yet developed.

---

## Overview

Checker is a C++ program designed for efficient train ticket checking. It provides ticket verification, reservation functionalities, and a barcode scanning system linked to user accounts.

## Usage

1. **Ticket Checking:**

   - Execute the binary and authenticate as the "kiosk" user.
   - Input the ticket details as prompted.
   - Receive instant verification.

2. **Reservation:**

   - Create an account or log in if you have one.
   - Choose the "Reservation" option.
   - Follow the prompts to reserve a ticket.

3. **Barcode Check-In:**

   - A barcode will be generated when a user signs up.
   - Arrive at the station and scan your barcode for check-in.

4. **Conductor Scan:**
   - Conductors can utilize the program to scan passenger barcodes.
   - Verify if passengers are on the correct train and help them get to the correct one if they are not.

---

## How to Run

1. Download the latest binary from the [Checker GitHub Releases](https://github.com/riley0122/checker/releases) or [build it yourself](#build-instructions).
2. Extract the downloaded archive.
3. Navigate to the project directory: `cd checker`
4. Run the program: `./checker`

## How to build

### Dependencies for building

- C++ Compiler
- make

### Build instructions

1. Clone the repository `git clone https://github.com/riley0122/checker`
2. Run the makefile `make`
3. Find the binary for your platform in the `bin` folder.

---

## Future Enhancements

- Integration with train schedule information.
- Improved user interface and experience.
- Support for more platforms.

For any inquiries or more information, visit the [Checker GitHub Repository](https://github.com/riley0122/checker).

:)

**Note:** Ongoing development with updates and new features.
