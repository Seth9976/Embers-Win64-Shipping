// 函数: sub_142c5ba70
// 地址: 0x142c5ba70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)

if (sub_142c720e0(arg1, rdi.d, arg3) != 0)
    return 0x50

int64_t rax_2 = rdi * 5
arg1[rax_2 + 0x58].b = 0
*(&arg1[rax_2] + 0x2c4) = 0
arg1[rdi + 0x4c] = sub_142c64ac0
arg1[rdi + 0x4e] = sub_142c64b80
return 0
