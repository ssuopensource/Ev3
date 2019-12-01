from pybricks import ev3bricks as brick
from pybricks.ev3devices import Motor
from pybricks.parameters import(Port, Stop, Direction)
from pybricks.tools wait

left_motor = Motor(Port.B)
right_motor = Motor(Port.C)

def motor_move(state):
    while(1):
        if(state==False):#적외선을 감지하지 못했을 때
            left_motor.run_angle(180,-360,Stop.COAST,False)
            right_motor.run_angle(180,360, Stop.COAST,True)
            #왼쪽 모터(180의 속력으로 360도를 시계 반대방향으로 회전
            #후 관성을 이용한 멈춤)
            #오른쪽 모터(동일하게 왼쪽 모터를 움직임과 함께 작동)

            wait(1000)#1초 기다림

            left_motor.run_angle(180, 180,Stop.COAST,False)
            right_motor.run_angle(180,-180,Stop.COAST, True)

            wait(1000)

            left_motor.run_angle(180, 180,Stop.COAST,False)
            right_motor.run_angle(180, -180,Stop.COAST, True)
            
            wait(1000)

            left_motor.run_angle(180,180,Stop.COAST,False)
            right_motor.run_angle(180,-180,Stop.COAST,True)

            wait(1000)

            left_motor.run_angle(180,180,Stop.COAST,False)
            right_motor.run_angle(180,-180.Stop.COAST,True)
            
            left_motor.run_target(180,0,Stop.BRAKE,False)
            right_motor.run_target(180,0,Stop.BRAKE,True)
            #왼쪽, 오른쪽 모터의 누적된 엔코더가 0이 될때까지 속도
            #360deg/s로 회전
            wait(1000)
       elif(state==True):#적외선을 감지했을 때
            left_motor.run_angle(0,0,Stop.BRAKE, False)
            right_motor.run_angle(0,0,Stop.BRAKE,True)
            #왼쪽 모터와 오른쪽 모터를 멈춘다

