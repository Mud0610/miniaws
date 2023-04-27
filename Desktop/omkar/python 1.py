a=float(input('first side a='))
b=float(input('second side b='))
c=float(input('third side c='))

sp=(a+b+c)/2

area= (sp*(sp-a)*(sp-b)*(sp-c)) ** 0.5
print (" area of triangle=", area)
