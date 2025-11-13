// 函数: sub_1427f9c40
// 地址: 0x1427f9c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_2 = *(arg1 + 0x68)

if (arg3 == 0)
    *(rax_2 + 0x64) &= not.w(arg2)
    jump(*(**(arg1 + 0x60) + 0x40))

*(rax_2 + 0x64) |= arg2
jump(*(**(arg1 + 0x60) + 0x40))
