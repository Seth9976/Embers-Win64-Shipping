// 函数: sub_142b3cad0
// 地址: 0x142b3cad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0

if (arg4 - arg3 s> 0)
    if ((*(arg1 + 0x150) & 1) == 0
            && sub_142a9f280(arg1 + 0x130, zx.q(sub_142b3f240(arg2, arg3))) != 0)
        rdi = sub_142b3fb40(arg2, arg3, arg1 + 0x1f8, 0xd, arg5)
    
    if ((*(arg1 + 0x258) & 1) == 0
            && sub_142a9f280(arg1 + 0x238, zx.q(sub_142b3f2f0(arg2, arg4))) != 0)
        rdi += sub_142b3fb40(arg2, rdi + arg4, arg1 + 0x300, 0xd, arg5)

return zx.q(sub_142b3c9f0(arg1, arg2, arg3, rdi + arg4, arg5) + rdi)
