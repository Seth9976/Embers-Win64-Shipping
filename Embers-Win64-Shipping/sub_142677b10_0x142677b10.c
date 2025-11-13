// 函数: sub_142677b10
// 地址: 0x142677b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10 = zx.q(*(arg1 + 0xd4))
int32_t rax = *(arg1 + 0xd0)
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(r10.d))
uint64_t r9 = zx.q(rax + (r10 << 1).d)
*(arg1 + 0xc8) = r9.d
*(arg1 + 0xcc) = r9.d
zmm2.d = zmm2.d f* *(arg1 + 0xd8)
float zmm1 = *(arg1 + 0xe8) f- zmm2.d
*(arg1 + 0xe0) = *(arg1 + 0xe0) f- zmm2.d
float zmm0 = zmm2.d
zmm2.d = zmm2.d f+ *(arg1 + 0xf4)
zmm0 = zmm0 f+ *(arg1 + 0xec)
*(arg1 + 0xe8) = zmm1
*(arg1 + 0xf4) = zmm2.d
*(arg1 + 0xec) = zmm0
sub_14262d160(arg2, 1, "CreateHeightField:", r9)
int32_t var_28 = *(arg1 + 0xcc)
sub_14262d160(arg2, 1, " - %d x %d cells", zx.q(*(arg1 + 0xc8)))

if (*(arg1 + 0x2f8) s> 0)
    int32_t* rax_3
    int64_t r9_2
    rax_3, r9_2 = sub_14262e8d0()
    *arg3 = rax_3
    
    if (rax_3 == 0)
        sub_14262d160(arg2, (rax_3 + 3).d, "CreateHeightField: Out of memory 'SolidHF'.", r9_2)
        return 0
    
    var_28.q = arg1 + 0xe0
    char rax_2
    int64_t r9_4
    rax_2, r9_4 = sub_142630920(arg2, rax_3, *(arg1 + 0xc8), *(arg1 + 0xcc), var_28, arg1 + 0xec, 
        *(arg1 + 0xd8), *(arg1 + 0xdc))
    
    if (rax_2 == 0)
        sub_14262d160(arg2, 3, "CreateHeightField: Could not create solid heightfield.", r9_4)
        return 0

return 1
