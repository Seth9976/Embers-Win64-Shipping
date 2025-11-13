// 函数: sub_140fcb150
// 地址: 0x140fcb150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

enum WINSOCK_SHUTDOWN_HOW how = SD_RECEIVE

if (arg2 != 0)
    if (arg2 == 1)
        how = SD_SEND
    else if (arg2 == 2)
        how = arg2

int32_t result
result.b = shutdown(*(arg1 + 0x28), how) == 0
return result
