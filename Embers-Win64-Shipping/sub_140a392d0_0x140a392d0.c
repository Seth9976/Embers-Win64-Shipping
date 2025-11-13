// 函数: sub_140a392d0
// 地址: 0x140a392d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a38850()
int64_t r10_1 = *(arg1 + 0x10) + arg3
int64_t rax_1
int32_t rdx
rdx:rax_1 = sx.o(r10_1)
int32_t rax_3 = ((rax_1 + (zx.q(rdx) & 0x3fff)) s>> 0xe).d
int64_t rdx_2 = *((sx.q(*(arg1 + (sx.q(rax_3) << 2) + 0x24)) << 3) + 0x143cf8e68)
int64_t rcx_1 = sx.q(r10_1.d - (rax_3 << 0xe))
int64_t rax_5 = 0x4000 - rcx_1

if (arg4 s<= rax_5)
    rax_5 = arg4

*arg2 = rax_5
return rcx_1 + rdx_2
