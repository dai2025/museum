import math

def check_zero(num):
    if num == 0 and math.copysign(1, num) == 1:
        print("+0")
    elif num == 0 and math.copysign(1, num) == -1:
        print("-0")
    else:
        print("Not zero")

num = -0.0
check_zero(num)
num = False
check_zero(num)
num = None
check_zero(num)
