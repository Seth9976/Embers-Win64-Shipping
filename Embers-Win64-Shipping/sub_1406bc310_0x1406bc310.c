// 函数: sub_1406bc310
// 地址: 0x1406bc310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_3 = *(arg1 + 0x708)

if (rax_3 == 1)
    if (*(arg1 + 0x228) != 0)
        return sub_1406bc060(arg1 + 0x5f8) __tailcall
    
    return sub_1406bc060(arg1 + 0x5c8) __tailcall

if (rax_3 == 0)
    if (*(arg1 + 0x220) != 0)
        return sub_1406bc060(arg1 + 0x5c8) __tailcall
    
    if (*(arg1 + 0x228) != 0)
        return sub_1406bc060(arg1 + 0x5f8) __tailcall

return sub_1406bc060(arg1 + 0x628) __tailcall
