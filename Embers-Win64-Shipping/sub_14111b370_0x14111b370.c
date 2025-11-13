// 函数: sub_14111b370
// 地址: 0x14111b370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0xffffffff
*(arg1 + 0xc) = 4
__builtin_memset(&arg1[7], 0, 0x1c)
__builtin_memset(&arg1[0xb], 0, 0x1c)
__builtin_memset(&arg1[0xf], 0, 0x1c)
__builtin_memset(&arg1[0x13], 0, 0x1c)
__builtin_memset(arg1 + 0x14, 0, 0x20)
arg1[2].b = 0
*arg1 = &data_142f1ffd8

if (sub_140a80f40() == 0)
    sub_141997e80(arg1)
    return arg1

(*arg1)[5](arg1)
return arg1
