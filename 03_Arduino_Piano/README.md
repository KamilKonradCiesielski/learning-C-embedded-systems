# 🎹 Arduino Interactive Controller

An Arduino project that uses four buttons to trigger different levels of output intensity on a single pin using **PWM (Pulse Width Modulation)**.

## 🚀 Project Overview
This project demonstrates how to handle multiple inputs and generate varied analog-like outputs.
* **Input Handling**: Uses `INPUT_PULLUP` to simplify the circuit (no external resistors needed).
* **PWM Control**: Uses `analogWrite()` to control the "strength" of the signal on Pin 3.
* **Conditional Logic**: Four different buttons trigger four distinct levels of intensity.

## 🛠️ Hardware Setup (CRUMB / Physical)
* **Pin 3**: Output (Passive Buzzer)
* **Pin 7**: Button 1 (100% intensity - `255`)
* **Pin 6**: Button 2 (75% intensity - `191`)
* **Pin 5**: Button 3 (50% intensity - `127`)
* **Pin 4**: Button 4 (25% intensity - `63`)

## 📋 Logic Breakdown
The buttons are configured with internal pull-up resistors. This means:
* **HIGH (1)**: Button is NOT pressed.
* **LOW (0)**: Button IS pressed.

When a button is pressed, the program sends a PWM signal to Pin 3 for 1 second and then turns it off.
