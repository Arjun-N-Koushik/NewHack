s = set()
a = [1,2,3,4]
s_from_list = set(a)
print(s_from_list)
print(type(s_from_list))
s.add(1)
s.add(2)
s.add(3)
print(s_from_list)
s1 = s.isdisjoint({4,5,6})
print(s1)
# a = 56
# b = 62
# print("Enter your Age..")
# age = int(input())
# # c = int(input())
#
# if age>100 or age<7 :
#     print("Enter the age between 7 and 100")
# elif age > 18 :
#     print("Congratulations \n You are eligible to drive!!")
# elif age == 18:
#     print("Opps!! \n You need to get in touch with us..")
# else:
#     print("We're Sorry!! \n You're not eligible to drive")