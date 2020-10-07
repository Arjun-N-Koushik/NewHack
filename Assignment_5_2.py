largest = None
smallest = None
while True:
    Max = None
    Min = None
    num = input("Enter a number: ")
    if num == "done":
        break
    try:
        intnum = int(num)
    except:
        print("Invalid input")
        continue
    if largest is None:
        largest = intnum
    if largest < intnum:
        largest = intnum

    if smallest is None:
        smallest = intnum
    if smallest > intnum:
        smallest = intnum
print("Maximum is", largest)
print("Minimum is", smallest)