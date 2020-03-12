mark = 56

"""
0 - 35 - F9
36 - 44 - P8
45 - 49 - P7
50 - 54 - C6
55 - 59 - C5
60 - 65 - C4
66 - 74 - C3
75 - 79 - D2
80 - 100 - D1
Grading system that assigns grade to students based on marks

"""
if mark <= 35:
    print("F9")
elif mark <= 44:
    print("P8")
elif mark <= 49:
    print("P7")
elif mark <= 54:
    print("C6")
elif mark <= 59:
    print("C5")
elif mark <= 65:
    print("C4")
elif mark <= 74:
    print("C3")
elif mark <= 79:
    print("D2")
else:
    print("D1")