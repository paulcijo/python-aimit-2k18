# 7.py: Python lists

vals = [4, 5, 6, 1, 2, 4, 2, 44, 5]

sum = 0
for i in range(0, 9):
    sum += vals[i]

print sum
vals.insert(0, 10)
print(vals)
print( 12 in vals)
vals.sort()
print vals