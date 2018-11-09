
gcc cuenta.cpp -lstdc++ -lm -o romper.x
./cuenta.x Pi_2500000.txt cuenta.txt tiempo.txt

#Para que corra con 10 partes
for((i=1;i<=10;i+=1)); do ./cuenta.x "P10/10-p$i.txt" cuenta10.txt tiempo10.txt; done

#Para que corra con 20 partes
for((i=1;i<=20;i+=1)); do ./cuenta.x "P20/20-p$i.txt" cuenta20.txt tiempo20.txt; done

#Para que corra con 50 partes
for((i=1;i<=50;i+=1)); do ./cuenta.x "P50/50-p$i.txt" cuenta50.txt tiempo50.txt; done

#Para que corra con 100 partes
for((i=1;i<=100;i+=1)); do ./cuenta.x "P100/100-p$i.txt" cuenta100.txt tiempo100.txt; done

