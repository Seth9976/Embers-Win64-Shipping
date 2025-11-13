// 函数: sub_141dca220
// 地址: 0x141dca220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(*(arg1 + 0xb0))

if (rcx.d == 0)
    return zx.q(*(arg1 + 0x60) - *(arg1 + 0x8c))

int64_t r9_1 = *(arg1 + 0xa8)
int32_t r10_1 = (rcx - 1).d
int32_t rdi_1 = *(r9_1 + (sx.q(r10_1) << 2))
int32_t rax_3 = *(arg1 + 0xb0)
int32_t rdx_2 = rax_3 - r10_1

if (rdx_2 != 1)
    memmove(r9_1 + (sx.q(r10_1) << 2), r9_1 + (rcx << 2), (rdx_2 - 1) << 2)
    rax_3 = *(arg1 + 0xb0)

*(arg1 + 0xb0) = rax_3 - 1
return zx.q(rdi_1)
