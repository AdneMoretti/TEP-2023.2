N = int(input())
cont = 0
for i in range(6, N+1):
    novo = str(i)
    print(int("9", 8))
    if(novo.find('7')!=-1 or str(int(novo, 8)).find('7')!=-1):
        print(i)
        cont+=1
print(cont)    
