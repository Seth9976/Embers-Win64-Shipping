// 函数: sub_1428f4e40
// 地址: 0x1428f4e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (sub_1428e3700() == 1)
    int32_t result = socket(arg1, arg2, arg3)
    
    if (result != 0xffffffff)
        return result
    
    sub_1428a5670(2, 4, WSAGetLastError(), "crypto\bio\b_sock2.c", 0x31)
    sub_1428a5670(0x20, 0x8c, 0x76, "crypto\bio\b_sock2.c", 0x32)

return -1
