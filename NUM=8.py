NUM=8
nums=[0]*NUM
total=0
for i in range(NUM):
     nums[i]=int(input("por favor introduzca un numero: "))
     total +=nums[i]
     print("el total de numeros es: ",total)