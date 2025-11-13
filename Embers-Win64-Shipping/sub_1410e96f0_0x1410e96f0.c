// 函数: sub_1410e96f0
// 地址: 0x1410e96f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0xffffffff
*(arg1 + 0xc) = 4
arg1[2].d = 0
__builtin_memset(&arg1[3], 0, 0x1c)
__builtin_memset(&arg1[7], 0, 0x1c)
__builtin_memset(&arg1[0xb], 0, 0x1c)
__builtin_memset(&arg1[0xf], 0, 0x1c)
*arg1 = &data_142f17ad0

if (sub_140a80f40() == 0)
    sub_141997e80(arg1)
    return arg1

(*arg1)[5](arg1)
return arg1
