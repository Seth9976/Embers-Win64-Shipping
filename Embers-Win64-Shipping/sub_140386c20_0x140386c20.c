// 函数: sub_140386c20
// 地址: 0x140386c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 s< 0xfc)
    *arg2 = arg1.b
    return 1

uint32_t rcx = zx.d((arg1.b & 3) - 4)
*arg2 = rcx.b
arg2[1] = ((arg1 - rcx) s>> 2).b
return 2
