// 函数: sub_141ea8880
// 地址: 0x141ea8880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_14221dc80(arg1, arg2)

if (arg1[0x50] != 0 && (arg1[0xb].b & 0x10) != 0 && *(arg1 + 0x5f) == 2)
    result = (*(*arg1 + 0x4a0))(arg1)
    
    if (result != 0)
        result = arg1[0x50]
        *(result + 0x71c) |= 8

return result
