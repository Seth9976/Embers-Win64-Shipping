// 函数: sub_142095ec0
// 地址: 0x142095ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = sx.q(*(arg1 + 0x98))

if (rax_1.d == 0)
    return (zx.o(0)).d

int64_t rcx = *(arg1 + 0x90)
int64_t rdx = rax_1 * 3
return *(*(rcx + (rdx << 3) - 8) + 0xf8) f+ *(rcx + (rdx << 3) - 0x18)
