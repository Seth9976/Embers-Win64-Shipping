// 函数: sub_142c516a0
// 地址: 0x142c516a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HMODULE result = nullptr

if (arg1 != 0)
    result = LoadLibraryA(arg1)

if ((arg1 == 0 || result == 0) && arg2 != 0)
    return LoadLibraryA(arg2) __tailcall

return result
