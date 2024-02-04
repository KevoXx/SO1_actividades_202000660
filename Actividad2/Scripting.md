# Script de Saludo a Usuario de GitHub

A continuación se muestra un script de bash que saluda a un usuario de GitHub utilizando la GitHub API y registra el saludo en un archivo de registro.

## Contenido del Script

```bash
#!/bin/bash

# Se establece el valor de la variable GITHUB_USER
export GITHUB_USER="KevoXx"

# Obtener la fecha actual
fecha=$(date +'%Y%m%d')

# Lea la variable GITHUB_USER
github_user=$GITHUB_USER

# Consultar la URL de GitHub API
url="https://api.github.com/users/$github_user"

# Realizar la consulta y guardar la respuesta en una variable
response=$(curl -s "$url")

# Extraer los datos del JSON
id=$(echo "$response" | jq -r '.id')
created_at=$(echo "$response" | jq -r '.created_at')

# Imprimir el mensaje
echo "Hola $github_user. User ID: $id. Cuenta fue creada el: $created_at."

# Crear el directorio del log
mkdir -p "/tmp/$fecha"

# Escribir el mensaje en el archivo de log
echo "Hola $github_user. User ID: $id. Cuenta fue creada el: $created_at." >> "/tmp/$fecha/saludos.log"

```

## Ejecución del Script

Para ejecutar el script, se debe guardar el contenido en un archivo con extensión `.sh`
```bash
nano script.sh
```
 Una vez creado darle permisos de ejecución con el comando `chmod +x script.sh`. Luego, se ejecuta el script con el comando `./script.sh`.

## Ejecucion cada 5 minutos

Para ejecutar el script cada 5 minutos, se puede utilizar el comando `crontab -e` para editar el archivo de configuración de cron y agregar la siguiente línea:

```bash
*/5 * * * * /ruta/al/script.sh
```

