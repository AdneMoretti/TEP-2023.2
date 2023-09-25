S = input()
base = 99999
is_321 = True
for i in S: 
    number = int(i)
    if(number>=base): 
        is_321 = False
    base = number

if is_321: 
    print("Yes")
else:
    print("No")