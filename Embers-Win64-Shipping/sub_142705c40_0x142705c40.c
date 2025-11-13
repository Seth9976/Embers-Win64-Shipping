// 函数: sub_142705c40
// 地址: 0x142705c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x15]

if (rax == 0)
    rax = sub_141ee69e0(arg1)

void* rax_1 = sub_1426fbe40(rax)

if (arg1[0x4f].b == 0 && rax_1 != 0)
    sub_1426f6a40(rax_1, arg1)

return sub_142705ca0(arg1, arg2) __tailcall
