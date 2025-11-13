// 函数: sub_140f0e750
// 地址: 0x140f0e750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_140e19840(arg1, arg5)

if (rax != 0)
    sub_140f13ac0(arg1, arg3, arg4)
    *arg2 = 1
else
    *arg2 = rax

*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
