// 函数: sub_1418d97d0
// 地址: 0x1418d97d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x10))
int32_t rax = (rdi + 1).d
*(arg1 + 0x10) = rax

if (rax s> *(arg1 + 0x14))
    sub_140775520(arg1 + 8)

int64_t rdx_1 = rdi * 0x48
__builtin_memset(rdx_1 + *(arg1 + 8), 0, 0x48)
int32_t* rdx_2 = rdx_1 + *(arg1 + 8)
rdx_2[0xc] = arg3
rdx_2[0xe] = arg4
*rdx_2 = 0x2d
*(rdx_2 + 0x28) = arg2
rdx_2[0x10] = arg5
*(rdx_2 + 0x20) = -1
return zx.q(rdi.d)
