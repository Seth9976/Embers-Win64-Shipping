// 函数: sub_142a6d170
// 地址: 0x142a6d170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2
int64_t* rcx = *(arg1 + 0x150)

if (rcx != 0)
    (**rcx)(rcx, 1)

*(arg1 + 0x150) = rbx
arg2.b = 1
(*(*rbx + 0xb0))(rbx, arg2)
jump(*(*rbx + 0xc8))
