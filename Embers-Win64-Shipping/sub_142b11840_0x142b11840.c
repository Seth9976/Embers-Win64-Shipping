// 函数: sub_142b11840
// 地址: 0x142b11840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi_1 = *(arg1 + 0x6c) + 1

if (sub_142b11270(arg1, rdi_1) != 0)
    int32_t rax_2 = *(arg1 + 0x68) - rdi_1
    *(arg1 + 0x6c) = rdi_1
    *(*(arg1 + 0x60) + (sx.q(rax_2) << 1)) = arg2

return zx.q(*(arg1 + 0x6c))
