// 函数: sub_142c750f0
// 地址: 0x142c750f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 3 && arg2 u<= 0x16)
    switch (arg2)
        case 0
            return "Hello request"
        case 1
            return "Client hello"
        case 2
            return "Server hello"
        case 4
            return "Newsession Ticket"
        case 0xb
            return "Certificate"
        case 0xc
            return "Server key exchange"
        case 0xd
            return "Request CERT"
        case 0xe
            return "Server finished"
        case 0xf
            return "CERT verify"
        case 0x10
            return "Client key exchange"
        case 0x14
            return "Finished"
        case 0x16
            return "Certificate Status"

return "Unknown"
