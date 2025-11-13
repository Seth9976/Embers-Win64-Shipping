// 函数: sub_142624730
// 地址: 0x142624730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t i_1 = sx.q(arg5)
uint32_t zmm13[0x4] = 0x7f7fffff

if (i_1 s> 0)
    int128_t zmm6
    int128_t var_18_1 = zmm6
    void* r9 = arg4 + 8
    int128_t zmm7
    int128_t var_28_1 = zmm7
    int128_t zmm8
    int128_t var_38_1 = zmm8
    int128_t zmm9
    int128_t var_48_1 = zmm9
    uint32_t zmm10[0x4]
    uint32_t var_58_1[0x4] = zmm10
    int128_t zmm11
    int128_t var_68_1 = zmm11
    int128_t zmm12
    int128_t var_78_1 = zmm12
    int64_t i
    
    do
        int64_t rdx = sx.q(*(r9 - 8) * 3)
        float zmm1 = *(arg2 + (rdx << 2))
        float zmm0 = *(arg2 + (rdx << 2) + 8)
        int128_t zmm4
        zmm4.d = (*arg1).d f- zmm1
        zmm11.d = (*(arg1 + 8)).d f- zmm0
        int64_t r8 = sx.q(*(r9 - 4) * 3)
        result = sx.q(*r9 * 3)
        int128_t zmm3
        zmm3.d = (*(arg2 + (r8 << 2) + 8)).d f- zmm0
        zmm7.d = (*(arg2 + (r8 << 2))).d f- zmm1
        float zmm5 = *(arg2 + (result << 2)) - zmm1
        zmm10 = *(arg2 + (result << 2) + 4)
        int128_t zmm2
        zmm2.d = (*(arg2 + (result << 2) + 8)).d f- zmm0
        zmm12 = *(arg2 + (r8 << 2) + 4)
        zmm10[0] = zmm10[0] f- *(arg2 + (rdx << 2) + 4)
        zmm12.d = zmm12.d f- *(arg2 + (rdx << 2) + 4)
        zmm6.d = zmm4.d f* zmm5
        zmm9.d = zmm2.d f* zmm2.d
        zmm8.d = zmm3.d f* zmm2.d
        zmm9.d = zmm9.d f+ zmm5 * zmm5
        zmm4.d = zmm4.d f* zmm7.d
        zmm8.d = zmm8.d f+ zmm7.d * zmm5
        zmm0 = zmm11.d f* zmm2.d
        zmm11.d = zmm11.d f* zmm3.d
        zmm6.d = zmm6.d f+ zmm0
        zmm11.d = zmm11.d f+ zmm4.d
        zmm5 = zmm7.d f* zmm7.d + zmm3.d f* zmm3.d
        zmm1 = zmm5
        zmm5 = zmm5 f* zmm6.d
        zmm6.d = zmm6.d f* zmm8.d
        zmm0 = zmm11.d
        zmm11.d = zmm11.d f* zmm9.d
        zmm2.d = 1f / (zmm1 f* zmm9.d - zmm8.d f* zmm8.d)
        zmm11.d = zmm11.d f- zmm6.d
        zmm5 = (zmm5 - zmm0 f* zmm8.d) f* zmm2.d
        zmm11.d = zmm11.d f* zmm2.d
        
        if (zmm5 < -9.99999975e-05f || zmm11.d f< -9.99999975e-05f || zmm11.d + zmm5 > 1.00010002f)
            zmm10 = 0x7f7fffff
        else
            zmm10[0] = zmm10[0] f* zmm5
            zmm12.d = zmm12.d f* zmm11.d
            zmm10[0] = zmm10[0] f+ *(arg2 + (rdx << 2) + 4)
            zmm10[0] = zmm10[0] f+ zmm12.d
            zmm10[0] = zmm10[0] f- *(arg1 + 4)
            zmm10 = __andps_xmmxud_memxud(zmm10, data_142d3f770)
        
        r9 += 0x10
        zmm13 = _mm_min_ss(zmm10[0], zmm13[0])
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (not(zmm13[0] f== 3.40282347e+38f))
        zmm13[0]

return result
