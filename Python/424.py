import sys,math 
sum = 0
for line in sys.stdin:
    line = int (line)
    if line == 0:
        break
    else :
        sum += line
print (sum)