import pyautogui
import serial
import keyboard

ser = serial.Serial('COM3', 9600)

while True:
    if not keyboard.is_pressed("esc"):
        x = ser.readline()
        #print(x)

        if int(x) == 11:
            pyautogui.press("1")
        elif int(x) == 101:
            pyautogui.press("2")
        elif int(x) == 110:
            pyautogui.press("3")
        else:
            None
    else:
        quit()
