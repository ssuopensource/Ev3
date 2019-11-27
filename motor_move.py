from ev3dev.ev3 import*

mB = LargeMotor
mB = LargeMotor('outB')

#sensor/cam 24번째 줄과 합친것.
while(1):
    state = GPIO.input(GPIOIN)

    if(state==False):
        mB.run_to_rel_pos(speed_sp = 300,position_sp =80,stop_action='brake')
        mB.run_to_rel_pos(speed_sp = 300, position_sp = -80,stop_action='brake')    
        print("Motion detected")
        record()
    elif(state==True):
        mB.run_to_rel_pos(speed_sp = 0,position_sp=0,stop_action = 'brake')
        print("Motion not detected")

    GPIO.output(GPIOOUT,state)
    time.sleep(0.5)


