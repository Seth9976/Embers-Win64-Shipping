// 函数: sub_140cb8d10
// 地址: 0x140cb8d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x1f0))
int32_t rax = (rdi + 1).d
*(arg1 + 0x1f0) = rax

if (rax s> *(arg1 + 0x1f4))
    sub_1405a4cf0(arg1 + 0x1e8)

*(*(arg1 + 0x1e8) + (rdi << 2)) = arg2 << 0xd | 0x500
int64_t rdi_1 = sx.q(*(arg1 + 0x1f0))
int32_t rax_2 = (rdi_1 + 1).d
*(arg1 + 0x1f0) = rax_2

if (rax_2 s> *(arg1 + 0x1f4))
    sub_1405a4cf0(arg1 + 0x1e8)

*(*(arg1 + 0x1e8) + (rdi_1 << 2)) = arg4
int64_t rdi_2 = sx.q(*(arg1 + 0x1f0))
int32_t rcx_2 = (rdi_2 + 1).d
*(arg1 + 0x1f0) = rcx_2

if (rcx_2 s> *(arg1 + 0x1f4))
    sub_1405a4cf0(arg1 + 0x1e8)

*(*(arg1 + 0x1e8) + (rdi_2 << 2)) = 0xdeadbabe
return zx.q(rdi_2.d)
