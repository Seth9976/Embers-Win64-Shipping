// 函数: sub_141dc7c90
// 地址: 0x141dc7c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x40))
int32_t r9 = arg2[1].d

if (rdi.d != 0)
    int32_t rdx = r9 + rdi.d
    
    if (rdx s> *(arg2 + 0xc))
        sub_140638cc0(arg2, rdx)
        r9 = arg2[1].d
    
    memcpy(*arg2 + sx.q(r9) * 0xc, *(arg1 + 0x38), (rdi * 0xc).d)
    arg2[1].d += rdi.d
    r9 = arg2[1].d

uint128_t zmm6 = zx.o(*(*arg2 + sx.q(r9) * 0xc - 0xc))
arg2[1].d = r9 - 1
int64_t result = sub_140775970(arg2)
arg2[2].d = zmm6.d
*(arg2 + 0x14) = _mm_shuffle_ps(zmm6, zmm6, 0x55).d
return result
