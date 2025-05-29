🔐 Door Lock System Using AT89C51 Microcontroller
Overview

This project implements a password-based door lock system using the AT89C51 microcontroller. The system provides secure access through a 4x4 matrix keypad, displays status messages on a 16x2 LCD, and controls a DC motor (or buzzer) via the L293D motor driver IC. The project simulates a real-world security solution designed for homes, offices, and restricted areas.

Features

 ✅ Password-protected access control
 
 ✅ 4-digit PIN verification via keypad
 
 ✅ User feedback on 16x2 LCD display
 
 ✅ Motor control for door mechanism
 
 ✅ System lock/unlock with correct password
 
 ✅ Proteus simulation support

Components Used
Component                    	Description
AT89C51	             8051-family Microcontroller
4x4 Matrix Keypad	   For password input
16x2 LCD	            For displaying system messages
L293D               	Motor driver IC for controlling motor
DC Motor / Buzzer   	Simulates door mechanism (lock/unlock)
Proteus	             Circuit design and simulation software

Working Principle
* The user enters a 4-digit password using the keypad.
* The system compares the input with the predefined password (1234 by default).
* If the password is correct:
    * The LCD displays "Access Granted".
    * The door (motor) unlocks for a few seconds.
* If the password is incorrect:
    * The LCD displays "Access Denied".
    * The system remains locked.
Secret Key: 1234

Circuit Diagram
The complete circuit diagram is designed in Proteus and includes the following components:

<img width="961" alt="Screenshot 2024-08-24 at 2 18 33 PM" src="https://github.com/user-attachments/assets/1d4ddb3a-3ecd-403f-94ad-d710f7a5df64">


* AT89C51 Microcontroller
* 4x4 Keypad
* 16x2 LCD Display
* L293D Motor Driver
* DC Motor / Buzzer
(Refer to the schematic files in the project folder.)
￼

How to Run
1. Open the Proteus project and load the provided schematic.
2. Verify connections:
    * Keypad to microcontroller I/O ports
    * LCD data and control lines connected properly
    * L293D connected to motor and microcontroller
3. Simulate the project.
4. Use the keypad to enter the password (1234).
5. Observe the LCD for system messages and the motor/buzzer action.

Future Enhancements
* Add password change functionality.
* Introduce a lockout mechanism after multiple incorrect attempts.
* Integrate a Real-Time Clock (RTC) for time-based access.
* Use EEPROM to store user passwords for persistent memory.
* Add a buzzer for audible alerts.

Author
Dileep Chinnari

License
This project is open for educational and personal use.
