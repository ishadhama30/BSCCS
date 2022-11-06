def fibonacci(n):
    if n == 1 or n == 2:
        return 1
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)

def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n - 1)
def fibonacciAndFactorial(n):
    
    return [fibonacci(n), factorial(n)]

n=int(input("Enter the Term"))
f = fibonacciAndFactorial(n)
print(f'Term {n} of the Fibonacci Sequence is {f[0]}')
print(f'It\'s factorial is {f[1]}')