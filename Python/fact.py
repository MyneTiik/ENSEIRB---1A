def factorial(n):
    assert n >= 0
    return 1 if n == 0 else n * factorial(n - 1)