#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *thread_function(void *arg) {
  printf("Hola desde el hilo!\n");
  return NULL;
}

int main() {
  pid_t pid;

  pid = fork();
  if (pid == 0) { /* proceso hijo */
    fork();
    pthread_t thread;
    pthread_create(&thread, NULL, thread_function, NULL);
    pthread_join(thread, NULL);
  } else { /* proceso padre */
    wait(NULL);
  }

  return 0;
}
