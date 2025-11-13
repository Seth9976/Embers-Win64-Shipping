// 函数: sub_142095e90
// 地址: 0x142095e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = sx.q(*(arg1 + 0x78))

if (rax_1.d == 0)
    return (zx.o(0)).d

int64_t rdx = rax_1 * 3
int64_t rax = *(arg1 + 0x70)
return *(rax + (rdx << 2) - 8) f+ *(rax + (rdx << 2) - 0xc)
