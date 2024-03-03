# Chat básico con Named Pipes en Linux (Ubuntu)

**Descripción:**

Este script crea un chat básico entre dos usuarios utilizando Named Pipes en Linux (Ubuntu).

**Funcionamiento:**

1. Se crean dos Named Pipes: `pipe1` y `pipe2`.
2. El script del servidor (`participant1.sh`) lee mensajes de `pipe1` y escribe respuestas en `pipe2`.
3. El script del cliente (`participant2.sh`) escribe mensajes en `pipe1` y lee respuestas de `pipe2`.

**Uso:**

1. Inicie el servidor en una terminal: `./participant1.sh`.
2. Inicie el cliente en otra terminal: `./participant2.sh`.
3. Escriba mensajes en la terminal del cliente y presione Enter para enviarlos al servidor.
4. El servidor le pedirá que escriba una respuesta.
5. Escriba una respuesta y presione Enter para enviarla al cliente.

**Para detener el chat:**

- Presione Ctrl+C en la terminal del participant1.
- Presione Ctrl+C en la terminal del participant2.


#!/bin/bash

# Crear los named pipes
mkfifo pipe1
mkfifo pipe2

# Función para el proceso del participante 1

participant1() {
    while true; do
        read message
        echo "Participante 1: $message" > pipe2
    done
}



# Función para el proceso del participante 2
participant2() {
    while true; do
        read message
        echo "Participante 2: $message" > pipe1
    done
}

