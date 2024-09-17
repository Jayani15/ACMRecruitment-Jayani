import math
class operations:
    def add(a,b):
        return a+b
    def diff(a,b):
        return a-b
    def pro(a,b):
        return a*b
    def div(a,b):
        if b==0:
            print("Divivsion by zero is not allowed")
        else:
            return a/b
    def expo(a,b):
        return a**b
    def square_root(a):
        if a<0:
            print("Square root of a negative number is not possible")
        else:
            return math.sqrt(a)
    