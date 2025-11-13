// 函数: sub_141f201b0
// 地址: 0x141f201b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x209)

if ((rax & 1) != 0)
    *(arg1 + 0x209) = rax & 0xfe
    sub_141f36700(arg1)

if (arg1[0x54].d s> 0)
    sub_141f09de0(arg1, 1, 0)

return sub_141f42e90(arg1, arg2) __tailcall
