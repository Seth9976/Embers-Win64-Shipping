// 函数: sub_141f25ee0
// 地址: 0x141f25ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t r10 = arg1[0x4b].b

if (arg2 == (r10 & 1) && arg3 == (r10 u>> 1 & 1))
    uint8_t result = r10 u>> 2 & 1
    
    if (arg4 == result)
        return result

arg1[0x4b].b = (((((r10 & 0xfe) | arg2) & 0xfd) | (arg3 * 2)) & 0xfb) | arg4 << 2
return sub_141ee8490(arg1) __tailcall
