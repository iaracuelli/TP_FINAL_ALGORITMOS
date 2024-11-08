@echo off
g++ -c src/meatProduct.cpp -o meatProduct.o
g++ -c src/client.cpp -o client.o
g++ -c src/employee.cpp -o employee.o
g++ -c src/order.cpp -o order.o
g++ -c src/item.cpp -o item.o
g++ -c src/beefProduct.cpp -o beefProduct.o
g++ -c src/chickenProduct.cpp -o chickenProduct.o
g++ -c src/porkProduct.cpp -o porkProduct.o
g++ -c main.cpp -o main.o
g++ meatProduct.o client.o employee.o order.o main.o item.o beefProduct.o chickenProduct.o porkProduct.o -o app.exe
echo Compilacion completa.
rem Ejecutar el programa
app.exe
rem .\app.exe

rem Eliminar archivos .o generados
DEL *.o
