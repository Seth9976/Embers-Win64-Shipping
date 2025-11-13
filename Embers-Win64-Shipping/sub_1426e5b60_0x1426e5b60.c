// 函数: sub_1426e5b60
// 地址: 0x1426e5b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax

if (*arg1 != 0)
    rax = *(arg1 + 0x29)
else
    rax = sub_141ffde90(zx.d(arg1[0xa].b))
    *(arg1 + 0x29) = rax

char result = sub_141ffded0(zx.d(rax))
arg1[0xa].b = result
*arg1 = 1
return result
