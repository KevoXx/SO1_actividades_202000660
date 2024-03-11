**a) ¿Cuántos procesos únicos son creados?**

Se crean 3 procesos únicos en total:

Proceso padre: Es el proceso original que ejecuta el programa.
Proceso hijo 1: Se crea mediante la llamada a fork() en el proceso padre.
Proceso hijo 2: Se crea mediante la llamada a fork() en el proceso hijo 1.

**b) ¿Cuántos hilos únicos son creados?**

Se crea 1 hilo único en el proceso hijo 1.