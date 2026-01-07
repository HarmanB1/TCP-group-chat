# A Chat Server simulation in c. 

A C-based TCP group chat server with multiple clients simulating activity.
Clients act as fuzzers, automatically generating random messages and sending them to the server.
The server relays messages to all clients in correct order, while a two-phase commit protocol ensures graceful termination.
Built with sockets and CMake, this project demonstrates a simple real-time messaging simulation.


To run, 

```bash

git clone https://github.com/HarmanB1/TCP-group-chat.git
cd TCP-group-chat

mkdir build
cd build
cmake ..
make

# Syntax: ./server <port_number> <#_of_clients>
./server 8000 5

# Syntax: ./client <IP_address> <port_number> <#_of_messages> <log_file_path>
./client 127.0.0.1 8000 10 client_log.txt
