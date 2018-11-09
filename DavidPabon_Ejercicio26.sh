
gcc cuenta.cpp -lstdc++ -lm -o romper.x
./cuenta.x Pi_2500000.txt cuenta.txt tiempo.txt

for((i=1;i<=10;i+=2)); do ./cuenta.x "10-p$i.txt" cuenta.txt tiempo.txt; done
