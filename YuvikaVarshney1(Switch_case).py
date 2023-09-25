import math
from typing import *

def areaSwitchCase(ch: int, a: List[float]):
    # Write your code here
    area=0.0
    if ch == 1:  # Circle
        area = math.pi * a[0] * a[0]
    elif ch == 2:  # Rectangle
        area = a[0] * a[1]

    return "{:.5f}".format(area)
