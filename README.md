# Dijkstra-Shortest-Path-First-Algorithm
This repository is on Dijkstra Shortest Path First Algorithm using graph data structure

[A] Introduction to Dijkstra Shortest Path First Algorithm In Graph

1. Also called the Dijkstra algorithm, SPF is a routing algorithm in which a router computes the shortest path between each pair of nodes in the network. 
2. The Open Shortest Path First (OSPF) Protocol is based on the Shortest Path First (SPF) algorithm.

[B] How does it work?
When an OSPF router is initialized, it sends a Hello message to determine whether it has any neighbors. 
Neighbors respond to the initiating router by using the same Hello packets. 
In fact, these Hello packets also serve to tell other routers that the transmitting router is still alive.
If more than two OSPF routers are on the internetwork, the Hello protocol causes one of the routers to be designated as the one to send out link state advertisements (LSAs) to all other routers on the network.
Neighbors then synchronize their topological databases with each other to become “adjacent” routers. Each router periodically floods the network with cost information for its adjacent nodes in the form of LSAs, allowing them to compile complete tables of network connections and calculate the path of least cost between any two nodes.

Here is a picture of the initial graph:
https://mega.nz/file/6IVxEDza#6s_aX9yP563LJAsWsMuz6vGUwNdzfOSy2Er7o7ZVIo4

Here is a picture of the solved graph which we got after making the program:
https://mega.nz/file/bBF2gZLQ#HL-7of9t1JUdfEssH5ITvRf9Z6p90YUtAed3bLaOWug

HAPPY CODING!
