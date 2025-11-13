// 函数: sub_140e23790
// 地址: 0x140e23790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = (*(arg1 + 0x77a) & 0xf7) | arg2 << 3
*(arg1 + 0x77a) = result

if ((result & 8) == 0)
    return result

return sub_140db2e20(arg1 + 0x390) __tailcall
