// 函数: sub_140e30ea0
// 地址: 0x140e30ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x60) = arg2 != 1
char result = *(arg1 + 0x39)

if (result == 8)
    return sub_140e2fb20(arg1, *(arg1 + 8), 0) __tailcall

if (result == 0x10)
    return sub_140e2ff20(arg1, *(arg1 + 8), 0) __tailcall

if (result != 0x20)
    return result

return sub_140e30340(arg1, *(arg1 + 8), 0) __tailcall
