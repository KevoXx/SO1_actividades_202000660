## Tipos de Kernel y sus distinciones:

El núcleo, o kernel, de un sistema operativo es su corazón, y puede presentarse en distintas formas, cada una con sus características únicas:

### Kernel Monolítico:
En este tipo de kernel, todas las funciones críticas del sistema operativo, como la administración de memoria y los controladores de dispositivos, se ejecutan dentro de un solo bloque de código. Ejemplos de sistemas con kernels monolíticos son Linux (aunque puede modularizarse) y versiones anteriores de Windows.

### Kernel Microkernel:
A diferencia del monolítico, un microkernel es minimalista, proporcionando solo las funciones básicas como la gestión de memoria y la comunicación entre procesos. Las funcionalidades avanzadas, como los controladores de dispositivos y los sistemas de archivos, se ejecutan fuera del kernel como procesos independientes, lo que hace que el sistema sea más modular y menos propenso a fallos. Ejemplos incluyen GNU Hurd y QNX.

### Kernel Híbrido:
Los kernels híbridos combinan características de los monolíticos y los microkernels. Algunas funciones críticas se ejecutan en el kernel para mejorar el rendimiento, mientras que otras se ejecutan como procesos independientes para mejorar la estabilidad y la seguridad. Ejemplos incluyen Windows NT y macOS.

### Modo Usuario vs Modo Kernel:
El sistema operativo opera en dos niveles de privilegios distintos:

- **Modo Usuario:**
  - Aquí corren las aplicaciones de usuario.
  - Sus acciones están restringidas para mantener la seguridad y la estabilidad del sistema.
  - No tienen acceso directo al hardware o a funciones críticas del sistema operativo.

- **Modo Kernel:**
  - El núcleo y los controladores de dispositivos operan en este modo.
  - Tienen acceso completo al hardware y a todas las funciones del sistema operativo.
  - Pueden realizar operaciones críticas, como la gestión de memoria y la programación de hardware.

La transición entre los modos se realiza mediante llamadas al sistema, que son solicitudes de los programas de usuario al kernel para realizar tareas que requieren privilegios elevados. El kernel valida estas solicitudes y ejecuta las acciones correspondientes si son permitidas.

### Interrupciones vs Trampas (Interrupts vs Traps):
Tanto las interrupciones como las trampas son mecanismos utilizados por el sistema operativo para manejar eventos externos e internos que requieren atención inmediata.

- **Interrupciones:**
  - Son señales asincrónicas generadas por dispositivos de hardware para solicitar atención del sistema operativo.
  - Pueden ser provocadas por eventos como la llegada de datos desde un dispositivo de red o la expiración de un temporizador.
  - Cuando ocurre una interrupción, el procesador suspende temporalmente la ejecución del programa actual y pasa el control al manejador de interrupciones correspondiente en el kernel.

- **Trampas:**
  - Son eventos síncronos que ocurren durante la ejecución de un programa debido a condiciones anormales.
  - Pueden ser causadas por errores de programación, como la división por cero, o por solicitudes de servicios del sistema operativo.
  - Cuando ocurre una trampa, el procesador detiene la ejecución del programa actual y pasa el control al manejador de trampas correspondiente en el kernel.
  - El manejador de trampas puede realizar acciones como mostrar un mensaje de error, finalizar el programa o llevar a cabo alguna acción de recuperación, dependiendo del tipo de trampa.
