import serial
import time
import pyautogui

arduino_port = 'COM5'  
baud_rate = 9600
ser = serial.Serial(arduino_port, baud_rate)
time.sleep(2)  

SENSITIVITY_X = 40
SENSITIVITY_Y = 40

while True:
   
    line = ser.readline().decode().strip()  
    ay, az, left_click, right_click, up, down = map(int, line.split(','))  
    move_x = ay // SENSITIVITY_X
    move_y = az // SENSITIVITY_Y
    pyautogui.moveRel(move_x, move_y)  
    if left_click == 0:
        pyautogui.click(button='left')    
    if right_click == 0:
        pyautogui.click(button='right')
    if up==0:
        pyautogui.scroll(250)
    if down==0:
        pyautogui.scroll(-250)

ser.close()
