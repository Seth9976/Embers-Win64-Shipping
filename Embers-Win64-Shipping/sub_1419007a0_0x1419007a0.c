// 函数: sub_1419007a0
// 地址: 0x1419007a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = *(arg5 + 0x28)
void*** rax = j_sub_140a82f30(0xa0)
void*** rax_1 = nullptr

if (rbx == 0)
    if (rax != 0)
        rax_1 = sub_1418f4540(rax, *(arg1 + 0x58), arg3, arg4, arg5, 0)
else if (rax != 0)
    rax_1 = sub_1418f4540(rax, nullptr, 0, 0, arg5, 0)

*arg2 = rax_1

if (rax_1 != 0)
    rax_1[1].d += 1

return arg2
