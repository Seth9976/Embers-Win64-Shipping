// 函数: sub_141ee5c50
// 地址: 0x141ee5c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_1405be820(arg1)

if ((*(arg1 + 0x8a) & 1) == 0 || result == 0)
    result.b = 1
    return result

char rcx = *(arg1 + 0x212)

if ((rcx & 2) != 0)
    result.b = 2
    return result

if ((rcx & 4) != 0)
    result.b = 4
    return result

if (*(result + 0x52c) f- *(arg1 + 0x664) f< *(arg1 + 0x668))
    return 3

return 0
