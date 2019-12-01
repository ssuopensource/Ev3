from pybricks import ev3bricks as brick
from pybricks.ev3devices import Motor
from pybricks.parameters import(Port, Stop, Direction)
from pybricks.tools wait

left_motor = Motor(Port.B)
right_motor = Motor(Port.C)

def motor_move(state):
    while(1):
        if(state==False):
            left_motor.run_angle(180,-360,Stop.COAST,False)
            right_motor.run_angle(180,360, Stop.COAST,True)

            wait(1000)

            left_motor.run_angle(180, 180,Stop.COAST,False)
            right_motor.run_angle(180,-180,Stop.COAST, True)

            wait(1000)

            left_motor.run_angle(180, 180,Stop.COAST,False)
            right_motor.run_angle(180, -180,Stop.COAST, True)

       elif(state==True):
            left_motor.run_angle(0,0,Stop.BRAKE, False)
            right_motor.run_angle(0,0,Stop.BRAKE,True)

