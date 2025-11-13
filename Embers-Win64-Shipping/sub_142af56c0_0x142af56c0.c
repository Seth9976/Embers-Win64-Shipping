// 函数: sub_142af56c0
// 地址: 0x142af56c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *(arg1 + 0x10)

if (rbx == 0)
    return *(arg1 + 8)

int32_t rax_1 = sub_142af58b0(arg2, &rbx[2], *rbx)

if (rax_1 s< 0)
    return 0

*arg3 = 0xffffffff
return sub_142a95e50(*(rbx + (sx.q(rax_1) + 1) * 0x10)) __tailcall
