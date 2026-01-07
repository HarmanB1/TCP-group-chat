# A Chat Server simulation in c. 

A C-based TCP group chat server with multiple clients simulating activity.
Clients act as fuzzers, automatically generating random messages and sending them to the server.
The server relays messages to all clients in correct order, while a two-phase commit protocol ensures graceful termination.
Built with sockets and CMake, this project demonstrates a simple real-time messaging simulation.
