## Tipos de Kernel y sus diferencias:

El kernel es la parte central de un sistema operativo que gestiona los recursos del sistema y proporciona servicios a los procesos en ejecución. Hay varios tipos de kernels, y sus diferencias radican principalmente en cómo interactúan con el hardware y los procesos del sistema. Los tres tipos principales de kernels son:

### Monolítico:
En un kernel monolítico, todas las funciones esenciales del sistema operativo, como la gestión de memoria, el sistema de archivos y los controladores de dispositivo, se ejecutan en el espacio del kernel. Esto significa que todas las funciones del kernel residen en una sola imagen de ejecución. Ejemplos de sistemas operativos con kernels monolíticos incluyen Linux (aunque puede ser modularizado) y versiones antiguas de Windows.

### Microkernel:
En contraste con un kernel monolítico, un microkernel se mantiene lo más pequeño posible. Solo proporciona las funciones básicas, como la gestión de memoria y la comunicación entre procesos. Las funciones más avanzadas, como los controladores de dispositivo y los sistemas de archivos, se ejecutan como procesos separados fuera del kernel. Esto hace que el sistema sea más modular y menos propenso a fallos. Ejemplos de sistemas operativos con microkernels incluyen GNU Hurd y QNX.

### Híbrido:
Los kernels híbridos combinan características de los kernels monolíticos y los microkernels. Algunas funciones críticas se ejecutan en el espacio del kernel para mejorar el rendimiento, mientras que otras se ejecutan como procesos separados para mejorar la estabilidad y la seguridad. Ejemplos de sistemas operativos con kernels híbridos incluyen Windows NT y macOS.

### User vs Kernel Mode:
El modo usuario (user mode) y el modo kernel (kernel mode) son dos niveles de privilegios en un sistema operativo que determinan qué acciones pueden realizar los programas y procesos en ejecución.

- **Modo Usuario (User Mode):**
  - Los programas de usuario, como las aplicaciones que ejecuta un usuario, se ejecutan en modo usuario.
  - Las acciones que pueden realizar están restringidas para garantizar la seguridad y la estabilidad del sistema.
  - Los programas en modo usuario no tienen acceso directo al hardware ni a las funciones críticas del sistema operativo.

- **Modo Kernel (Kernel Mode):**
  - El kernel y los controladores de dispositivo se ejecutan en modo kernel.
  - Tienen acceso completo al hardware y a todas las funciones del sistema operativo.
  - Pueden realizar operaciones críticas, como la gestión de memoria y la programación del hardware.

La transición entre el modo usuario y el modo kernel se produce mediante llamadas al sistema, que son solicitudes de los programas de usuario al kernel para realizar tareas que requieren privilegios elevados. El kernel verifica la validez de estas solicitudes y ejecuta las acciones correspondientes si son permitidas.

### Interrupciones vs Trampas (Interrupts vs Traps):
Tanto las interrupciones como las trampas son mecanismos utilizados por el sistema operativo para manejar eventos tanto externos como internos que requieren atención inmediata.

- **Interrupciones (Interrupts):**
  - Las interrupciones son señales asincrónicas generadas por dispositivos de hardware para indicar que requieren atención del sistema operativo.
  - Pueden ser causadas por eventos como la llegada de datos desde un dispositivo de red o un temporizador que expira.
  - Cuando se produce una interrupción, el procesador detiene temporalmente la ejecución del programa actual y pasa el control al manejador de interrupciones correspondiente en el kernel.
  - Después de manejar la interrupción, el procesador vuelve a la ejecución del programa que se interrumpió.

- **Trampas (Traps):**
  - Las trampas, también conocidas como excepciones o fallos, son eventos síncronos que ocurren durante la ejecución de un programa debido a condiciones anormales.
  - Pueden ser causadas por errores de programación, como la división por cero, o por solicitudes de servicios del sistema operativo, como una llamada al sistema.
  - Cuando se produce una trampa, el procesador detiene la ejecución del programa actual y pasa el control al manejador de trampas correspondiente en el kernel.
  - El manejador de trampas puede realizar acciones como mostrar un mensaje de error, terminar el programa o realizar alguna acción de recuperación, dependiendo del tipo de trampa.
