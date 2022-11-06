def report(a,b,c,d):
    totalsales=a+b+c+d
    if totalsales>50000:
        commission=0.05*totalsales
    else:
        commission=0
    if totalsales>=80000:
        remark='Excellent'
    elif totalsales>=60000 and totalsales<=80000:
        remark='good'
    elif totalsales>=40000 and totalsales<=60000:
        remark='Average'
    else :
        remark='Work hard'
    salesman=tuple()
    salesman=(totalsales,commission,remark)
    print(salesman)
sale1=0
sale2=0
sale3=0
sale4=0
sale1 = int(input("Enter the sales in 1st week "))
sale2 = int(input("Enter the sales in 2nd week "))
sale3 = int(input("Enter the sales in 3rd week "))
sale4 = int(input("Enter the sales in 4th week "))
report(sale1,sale2,sale3,sale4)