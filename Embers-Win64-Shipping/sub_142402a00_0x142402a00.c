// 函数: sub_142402a00
// 地址: 0x142402a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x64) = 0
arg1[0x16].d = (arg1[0x16].d & 0xfffffff9) | 1
char result = sub_140b5b8a0(arg2.d, 0)

if ((arg2:4.d == 0 & result) == 0)
    return result

jump(*(*arg1 + 0x290))
