import math
def triangle():
    side1 = int(input("Enter Side 1: "))
    side2 = int(input("Enter Side 2: "))
    side3 = int(input("Enter Side 3: "))
    if(side1+side2<=side3 or side1+side3<=side2 or side2+side3<=side1):
        print("invalid sides....it cannot be triangle")
    else:
        t=tuple()
        per=side1+side2+side3
        #print("perimeter of triangle is :",per)
        s=(side1+side2+side3)/2
        area=(math.sqrt(s *(s - side1) *(s-side2)*(s-side3)))
        #print("area :" ,area)
        t=(area,per)
        print (t)
triangle()
    