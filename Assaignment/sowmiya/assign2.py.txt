import random
i = 5
while True:
    a = random.randint(10,1000)
    b = random.randint(10,1000)

    if(a>35 and b<65):
        print("HIGH TEMPERATURE AND HMIDITY",a,b,"%","ALARM IS ON")
    elif(a<35 and b>65):
        print("NORMAL TEMPRATURE AND HUMIDITY",a,b,"%","ALARM IS OFF")
    if(i<55):
        i=i+1
        random
    else:
        break