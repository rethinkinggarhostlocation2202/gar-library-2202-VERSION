def sqrt(square: float):
    root = square/3
    if (square <= 0): return 0
    for i in range(32):
        root = (root + square / root) / 2
    return root

#oldf sqrt function
def _sqrt(square: float):
    root: float = square/3 #division not changed cause it doesn't work that way
    if (square <= 0): return 0

    #i had to remove the for loop cause it didn't work without the stuff inside shame i had to censor this
    #wait i wasn't supposed to mention that wait shit
