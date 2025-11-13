// 函数: sub_141f256b0
// 地址: 0x141f256b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8 = *(arg1 + 0x209)
char result = r8 & 1

if (result == arg2)
    return result

*(arg1 + 0x209) = (r8 & 0xfe) | arg2
return sub_141f36700(arg1) __tailcall
