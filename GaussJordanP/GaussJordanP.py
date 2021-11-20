# Author: Joshelyn Yanori Mendoza Alfaro
# josh14mndz@gmail.com
# November 17, 2021

# Le pido al usuario que ingrese el numero de ecuaciones a resolver.
numEcuaciones = int(input("Número de ecuaciones: "))

# Defino el número de filas y columnas que tiene mi sistema de ecuaciones.
numFilas = numEcuaciones
numColumnas = numEcuaciones + 1

# Declaro mi matriz.
matriz = []
for i in range(numFilas):
    matriz.append([0] * numColumnas)

# Le pido al usuario que rellene la matriz con los valores de los elementos.
for i in range(numFilas):
    for j in range(numColumnas):
        matriz[i][j] = int(input("Valor elemento [" + str(i) + "][" + str(j) + "]: "))

# Implemento el método de Gauss-Jordan.
# Creo una matriz escalonada,es decir, todos los renglones 0 se encuentran en la parte inferior de mi matriz.
i != 0
for i in range(numFilas):
    for j in range(numFilas):
        if i != j:
            aux = float(matriz[j][i]) / float(matriz[i][i])
            for k in range(numColumnas):
                matriz[j][k] = float(matriz[j][k]) - (float(aux) * float(matriz[i][k]))
else:
    if matriz[j][k] == 0:
        print("El sistema no tiene solución")

# Pongo a los números 1 a la diagonal principal.
for i in range(numEcuaciones):
    pivote = float(matriz[i][i])
    for j in range(numColumnas):
        matriz[i][j] = float(matriz[i][j]) / pivote

# Imprimo mi soluciones al sistema de ecuaciones.
print("Solución:")
for i in range(numEcuaciones):
    print("x" + str(i), "=", int(matriz[i][numEcuaciones]), " ")

