a = int (input("Начало: "))
while True :
    if a<9 or a==9:
        a = int (input ("Начало: "))
    elif a>9 :
        break
b = int (input("Конец: "))
while True:
    if a>b or a==b:
        b = int (input("Конец: "))
    else :
        break
print ("goda: "+ str((b-a)/10))