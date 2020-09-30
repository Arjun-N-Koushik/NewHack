# d1 = {
#     "45*3" : "555",
#     "56+9" : "77",
#     "56/6" : "4"
# }
print("Welcome to the Calculator")
print("Please Enter which of the following function you want to perform..")
print(" + , - , * , / ")
func = input()
print("Enter the First Number")
a = int(input())
print("Enter the Second Number")
b = int(input())
dict1 = 45*3
dict2 = 56+9
dict3 = 56/6
if dict1 == a*b:
    print("Answer :",555)
elif dict2 == a+b:
    print("Answer :",77)
elif dict3 == a/b:
    print("Answer",4)
elif func == "+":
    print("Answer : ",a+b)
elif func == "-":
    print("Answer : ",a-b)
elif func == "*":
    print("Answer : ",a*b)
elif b == 0:
    print("Can't divide by zero!!")
else:
    print("Answer : ",a/b)