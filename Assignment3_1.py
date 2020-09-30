hrs = input("Enter Hours:")
h = float(hrs)
rate = input("Enter rate per hour")
r = float(rate)
if h <= 40:
    Total_value = h * r
else :
    h = h - 40
    Total_value = (40 * r) + (h * r * 1.5)

print(Total_value)
