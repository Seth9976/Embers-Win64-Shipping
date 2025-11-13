// 函数: sub_14209fca0
// 地址: 0x14209fca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *(arg1 + 0x28)

if (r8 == 0)
    return 

uint64_t rax = *(arg1 + 0x38)

if (rax == 0)
    return 

int64_t rdx_1 = sx.q(*(rax + 0x4c))

if (rdx_1 != neg.q(r8))
    *(rdx_1 + r8) = *(arg1 + 0x30)
