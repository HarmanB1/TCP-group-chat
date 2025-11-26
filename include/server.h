#pragma once

#include <netinet/in.h>
#include <pthread.h>
#include <stdint.h>
#include <sys/socket.h>

#define MAX_CLIENTS 100
#define BUFFER_SIZE 2048
#define MSG_CHAT 0
#define MSG_END 1

typedef struct {
  int socketFd;
  struct sockaddr_in addr;
  int active;
} clientInfo;

int findSpot();
void *handler(void *arg);
void broadCaster(uint8_t *message, ssize_t len, struct sockaddr_in *sender);
