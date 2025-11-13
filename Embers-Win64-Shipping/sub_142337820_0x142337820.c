// 函数: sub_142337820
// 地址: 0x142337820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 8) += 0xc8
int64_t* rcx = *(arg1 + 0x80)
int64_t rdx = *(arg2 + 8)

if (rcx != 0)
    (*(*rcx + 8))(rcx, arg2)
    rdx = *(arg2 + 8)

int32_t i = 0
int64_t rdx_2 = rdx + sx.q(*(arg1 + 0x7c)) * 0x370
*(arg2 + 8) = rdx_2

if (*(arg1 + 0x78) s> 0)
    int64_t r9_1 = *(arg2 + 0x28)
    int64_t r10_1 = 0
    
    do
        i += 1
        void* rcx_3 = *(arg1 + 0x70) + r10_1
        r10_1 += 0x370
        r9_1 += zx.q(*(rcx_3 + 0x2dc) * *(rcx_3 + 0x2d8)
            + (*(rcx_3 + 0x298) * *(rcx_3 + 0x294) + *(rcx_3 + 0x290)) * *(rcx_3 + 0x29c))
        *(arg2 + 0x28) = r9_1
    while (i s< *(arg1 + 0x78))
    
    rdx_2 = *(arg2 + 8)

int64_t rdx_7 = rdx_2 + sx.q(*(arg1 + 0x9c)) * 0x1c
*(arg2 + 8) = rdx_7
int64_t result = sx.q(*(arg1 + 0xac))
*(arg2 + 8) = rdx_7 + (result << 2)
return result
