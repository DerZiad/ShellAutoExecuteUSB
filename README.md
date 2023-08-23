# Shell Auto Execute

[![N|Solid](https://upload.wikimedia.org/wikipedia/commons/thumb/8/87/Arduino_Logo.svg/1200px-Arduino_Logo.svg.png)](https://nodesource.com/products/nsolid)

## Overview
This project involves creating a functional simulation of a Rubber Ducky bad USB device using an Arduino Leonardo. In some regions, acquiring a Rubber Ducky or having it shipped might be restricted. To overcome these limitations, this undertaking leverages an Arduino Leonardo board.

## Explanation
The Arduino Leonardo (or Arduino Micro) is powered by the ATmega32u4 processor. It operates akin to a keyboard by transmitting binary commands to the operating system, effectively emulating keyboard inputs. By capitalizing on this feature, the project aims to develop a script that emulates keyboard inputs to perform various actions, such as opening a command prompt, initiating HTTP requests, downloading payloads, and executing them automatically.

- The project employs components such as the Arduino Leonardo, a battery, three buttons, a breadboard, resistors, cables, and a USB-to-Micro USB adapter. The configuration button facilitates the selection of keyboard types (e.g., azerty, etc.). Notably, the code accommodates six languages. A reset button restores settings to the default (US keyboard), while the Start button activates the OS exploitation. The integration of a battery allows for preconfiguring the tool. For instance, if the target machine employs an azerty keyboard, preconfiguration is possible. Upon connecting the USB to the target machine, clicking the Start button is all that's required to initiate the process.

## Demonstration
>This is the main electrical assembly of my project
![](images/principal.jfif)

## Requirement
> (Bouton Poussoir 12*12*7.3MM) x 3
#
[![N|Solid](https://www.moussasoft.com/wp-content/uploads/2018/09/bouton-poussoir-12127-3mm-maroc-casablanca-agadir-marrakech.jpg)](https://nodesource.com/products/nsolid)
>Arduino Leonardo
#
[![N|Solid](https://media.elektor.com/media/catalog/product/cache/9cc822bfc6a57f9729d464b8b5e0e0df/a/r/arduino_leonardo_with_headers_-_overview.jpg)](https://nodesource.com/products/nsolid)
> (1 - Resistor 1 kilo ohme) x3
#
[![N|Solid](https://allgadgets.gr/wp-content/uploads/2018/01/65-PCS-Starter-Kit-Resistors-for-Arduino.jpg)](https://nodesource.com/products/nsolid)
> (1 - cables male to male)
#
[![N|Solid](https://cdn.shopify.com/s/files/1/1509/1638/products/40_Stk._Jumper_Wire_Male_to_Male_20_Zentimeter.jpg?v=1581095521)](https://nodesource.com/products/nsolid)
> (1 - cables male to female)
#
[![N|Solid](https://vetco.net/spree/products/53619/product_preview_4x3/VUPN6982.jpg)](https://nodesource.com/products/nsolid)
> (1 - Power resource)
![](images/1.jfif)
> (1 - 9V BATTERY WITH DC)
![](images/2.jfif)
## Installation 
#### Go to the file .ino and replace this link with your payload link to download it (http://192.168.0.108/stup.exe)
```diff
+ For the mounting check my youtube channel (Playlist security), you will find the channel on my profile
```
