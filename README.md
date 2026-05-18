# UDP Project Prototype

This project is a bridge from networking to software engineering. It explores real-life applications of the UDP protocol by building a virtual replica and prototype that can evolve over time.

## Project Goal

The goal is to create an educational prototype that starts as a simplified, "dumbed down" version of UDP and gradually becomes a closer representation of the protocol. Contributors are encouraged to engage and help the system develop into a more accurate simulation of UDP.

## What This System Is

- A prototype system inspired by UDP (User Datagram Protocol).
- Designed as a learning platform for both networking concepts and software engineering practice.
- Built as a simple, virtual replica today, with planned evolution toward a more faithful UDP-like system.
- Focused on demonstrating how packet transfer, forwarding, and site-to-site communication can work in a simplified setting.

## Why This Approach

Starting with a simpler model makes it easier to learn and contribute. The current design is intentionally less complex than the real UDP protocol, but it sets the foundation for future improvements:

- simplified packet handling
- basic site forwarding logic
- a prototype architecture that can be extended

## Project Structure

- `site 1/` — code and artifacts for the first endpoint or node.
- `site 2/` — code and artifacts for the second endpoint or node.
- `site connection/` — transport layer and forwarding logic that connects the sites.
- `UDP_packet.h` — packet definitions used across the prototype.

## Status

This project is currently a starting prototype and does not yet resemble the full UDP protocol. It is intended as a working model that will progressively improve, with new contributors and ongoing development making it more accurate.

## Contribution

Contributions are welcome. If you want to help:

1. Explore the current code and project structure.
2. Add more realistic UDP behavior over time.
3. Improve transport reliability, packet handling, and site communication.

Enjoy working on the project, and thank you for contributing!