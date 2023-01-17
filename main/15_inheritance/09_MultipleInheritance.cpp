/**
 * @file 09_MultipleInheritance.cpp
 * @author @balaji303 (https://github.com/balaji303)
 * @brief Inheriting from 2 class
 * @version 1
 * @date 17-01-2023
 * 
 * Copyright (c) 2023 @balaji303
 * 
 */

#include <iostream>
#include <stdint.h>
using namespace std;

/**
 * @brief Class of USB device which is also the parent of WirelessAdopter class
 * 
 */
class UsbDevice
{
private:
    uint8_t comPort;
public:
    //Constructor
    UsbDevice(uint8_t comPortID);
    uint8_t getId(void)
    {
        return comPort;
    }
};

/**
 * @brief Construct a new Usb Device:: Usb Device object
 * 
 * @param comPortID 
 */
UsbDevice::UsbDevice(uint8_t comPortID):comPort{comPortID}
{
    cout<<"From UsbDevice constructor\n";
}

/**
 * @brief Network
 * 
 */
class Network
{
private:
    uint8_t NetworkId;
public:
    //constructor
    Network(uint8_t argvNetworkId);
    uint8_t getId(void)
    {
        return NetworkId;
    }
};

/**
 * @brief Construct a new Network:: Network object
 * 
 * @param argvNetworkId 
 */
Network::Network(uint8_t argvNetworkId):NetworkId{argvNetworkId}
{
    cout<<"From Network constructor\n";
}

class NetworkAdopter: public Network, public UsbDevice
{
// private:
//     uint8_t signalStrength;
// public:
//     NetworkAdopter(uint8_t argSignalStrength, uint8_t argNetId, uint8_t argComId);
public:
    NetworkAdopter(uint8_t argNetId, uint8_t argComId);
};

// NetworkAdopter::NetworkAdopter(uint8_t argSignalStrength, uint8_t argNetId, uint8_t argComId)
//     :signalStrength{argSignalStrength},NetworkId{argNetId},comPort{argComId}
// {
//     cout<<"From Network Adopter\n";
// }

NetworkAdopter::NetworkAdopter(uint8_t argNetId, uint8_t argComId)
    :Network{argNetId},UsbDevice{argComId}
{
    cout<<"From Network Adopter\n";
}

/**
 * @brief Main Function for the code
 * 
 * @return int 
 */
int main(void)
{
    NetworkAdopter c54G { 250, 88 };
    //  std::cout << c54G.getId(); // ! Which getID() do we call, so error
    std::cout << c54G.UsbDevice::getId(); // Which getID() do we call?
    return 0;
}