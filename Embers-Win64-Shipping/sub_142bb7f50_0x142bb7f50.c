// 函数: sub_142bb7f50
// 地址: 0x142bb7f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax_2 = *(arg1 + 0x2e0)

if (rax_2 == 0)
    return 6

uint64_t r10 = 0
*arg2 = rax_2[1]
arg2[1] = *rax_2

if (rax_2[1] u> 0)
    do
        uint64_t r9_2 = zx.q(r10.d) * 2
        void* r8_1 = &rax_2[(r10 + 7) * 6]
        int64_t rcx_4 = *(rax_2 + (r10 << 3) + 8)
        r10 = zx.q(r10.d + 1)
        *(arg2 + (r9_2 << 3) + 8) = rcx_4
        arg2[r9_2 * 2 + 4] = **(r8_1 + 8)
        arg2[r9_2 * 2 + 5] = *(*(r8_1 + 8) + (sx.q(zx.d(*r8_1) - 1) << 2))
    while (r10.d u< rax_2[1])

return 0
