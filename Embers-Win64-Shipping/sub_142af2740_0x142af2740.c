// 函数: sub_142af2740
// 地址: 0x142af2740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 8)
char rax_1

if (rdx + 1 s< 0 || *(arg1 + 0xc) s< rdx + 1)
    rax_1 = sub_142aeb240(arg1, rdx + 1, arg3)

if ((rdx + 1 s>= 0 && *(arg1 + 0xc) s>= rdx + 1) || rax_1 != 0)
    *(*(arg1 + 0x18) + (sx.q(*(arg1 + 8)) << 3)) = arg2
    *(arg1 + 8) += 1

return arg2
