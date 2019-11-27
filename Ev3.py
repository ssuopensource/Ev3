#터치센서 변수와 터치센서, 터치센서 포트 번호를 선언
TouchSensor('int3')

#터치 센서를 사용하기 위하여 검사하는 명령어를 사용한다.
assert(센서이름).connected

#센서가 연결 되었는지 검사. 연결되지 않았다면 프로그램 실행 시 오류메세지

#센서이름.value() : 선언해준 센서의 값을 불러올 때 사용하는 명령어

from ev3dev.ev3 import*
from time import sleep

mB = LargeMotor('outB')
mC = LargeMotor('outC')

ts  = TouchSensor()
assert ts.connected

while not ts.value():
	mB.run_forever(speed_sp = 180)
	mC.run_forever(speed_sp = 180)

mB.stop()
mC.stop()

sleep(0.2)

mB.run_timed(time_sp = 1000, speed_sp = -180)
mC.run_timed(time_sp = 1000, speed_sp = -180)

sleep(1)

mB.run_timed(time_sp = 800, speed_sp =-300)
mC.run_timed(time_sp = 800, speed_sp = 300)

sleep(1)
mB.stop(stop_action='brake')
mC.stop(stop_action='brake')

