// 函数: sub_1429e78d0
// 地址: 0x1429e78d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10_1 = sx.q(*(arg1 + 0x368))
int64_t r9 = *(arg1 + 0x400)
int64_t rdx_1 = (r10_1 + 1) * 0x44 + *(arg1 + 0x3c8)
*(arg1 + 0x408) = r9 + ((r10_1 + 1) << 3)
int32_t rax_2 = *(arg1 + 0x35c)
*(arg1 + 0x3d0) = rdx_1
return memset(r9, 0, sx.q((rax_2 + 1) * r10_1.d) << 3) __tailcall
