def computepay(h, r):
    a = h * r
    b = 40 * r
    c = (h - 40) * r * 1.5
    if h <= 40:
        return a
    else:
        return b + c

hrs = float(input("Enter Hours: "))
rate = float(input("Enter the rate: "))
p = computepay(hrs, rate)
print("Pay", p)