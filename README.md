# I2C-Communnication-between-multiple-Arduinos
This repo contains my code and simulation results to the I2C communication between 1 master arduino and two slave arduinos.

All the codes of the arduinos are written in Arduino software.

The simulaiton was done in a free online simulator TinkerCad.

The projects demonstrates the communicaiton between them, like:

Step 1: The Slave 1 will be generating the numbers 0,1,2...continiously and will be sending it to the Master Arduino

Step 2: The Master Arduino, will be continously receiving the numbers being sent by Slave 1 and send those numbers to Slave 2

Step 3: The Slave 2 will be continioulsy receiving the numbers being sent by Master Arduino, and will blink the led's and display the nubmers on the led as descirbed below:

0: Glow Blue Led
1: Glow Red Led
2: Glow both Led's
