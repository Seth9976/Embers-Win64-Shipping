// 函数: sub_141acc640
// 地址: 0x141acc640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = *arg1
float zmm3[0x4] = data_14399f720
uint32_t zmm5[0x4] = data_143f2b9a0
float temp0[0x4] = _mm_sub_ps(zmm4, zmm3)
float temp0_1[0x4] = _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0)

if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_1, _mm_and_ps(temp0, zmm5), 1)) != 0
        && _mm_movemask_ps(_mm_cmpeq_ps(temp0_1, _mm_and_ps(_mm_add_ps(zmm3, zmm4), zmm5), 1))
        != 0)
    int64_t rcx = sx.q(*(arg2 + 0x58))
    void* rdx = *(arg2 + 0x50)
    void* rax_5 = rcx * 0x30 + rdx
    int96_t var_b8 = (*(rdx + rcx * 0x30 - 0x20))[0].12
    
    if (rdx != rax_5)
        float zmm6[0x4]
        float var_18_1[0x4] = zmm6
        int128_t zmm7
        int128_t var_28_1 = zmm7
        int128_t zmm8
        int128_t var_38_1 = zmm8
        float zmm9[0x4]
        float var_48_1[0x4] = zmm9
        float zmm10[0x4]
        float var_58_1[0x4] = zmm10
        float zmm11[0x4]
        float var_68_1[0x4] = zmm11
        float zmm12[0x4]
        float var_78_1[0x4] = zmm12
        int128_t zmm13 = var_b8:8.d
        int128_t zmm14 = var_b8:4.d
        int128_t zmm15 = var_b8.d
        
        do
            float zmm2[0x4] = *arg1
            zmm3 = *rdx
            zmm12 = *(rdx + 0x10)
            float temp0_9[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x1b)
            float temp0_10[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_9)
            float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm3)
            float temp0_15[0x4] = __mulps_xmmps_memps(temp0_12, data_143f2b850)
            float temp0_16[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
            temp0_16[0] = temp0_16[0] f- zmm14.d
            float temp0_17[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            float temp0_18[0x4] = _mm_add_ps(temp0_15, temp0_14)
            float temp0_20[0x4] = _mm_mul_ps(temp0_10, _mm_shuffle_ps(zmm3, zmm3, 0x4e))
            float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xb1), temp0_17)
            float temp0_23[0x4] = __mulps_xmmps_memps(temp0_20, data_143f2b840)
            float temp0_24[0x4] = __mulps_xmmps_memps(temp0_22, data_143f2b830)
            float temp0_26[0x4] = _mm_add_ps(_mm_add_ps(temp0_18, temp0_23), temp0_24)
            zmm12[0] = zmm12[0] f- zmm15.d
            float temp0_27[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
            temp0_27[0] = temp0_27[0] f- zmm13.d
            *rdx = temp0_26
            zmm8 = *(arg1 + 4)
            zmm4 = *(arg1 + 8)
            zmm7 = *arg1
            zmm2 = *(arg1 + 0xc)
            temp0_16[0] = temp0_16[0] * zmm4[0]
            zmm12[0] = zmm12[0] * zmm4[0]
            temp0_16[0] = temp0_16[0] f* zmm7.d
            temp0_27[0] = temp0_27[0] f* zmm8.d
            temp0_27[0] = temp0_27[0] - temp0_16[0]
            temp0_27[0] = temp0_27[0] f* zmm7.d
            zmm12[0] = zmm12[0] - temp0_27[0]
            zmm12[0] = zmm12[0] f* zmm8.d
            temp0_27[0] = temp0_27[0] + temp0_27[0]
            temp0_16[0] = temp0_16[0] - zmm12[0]
            zmm12[0] = zmm12[0] + zmm12[0]
            temp0_27[0] = temp0_27[0] * zmm2[0]
            temp0_16[0] = temp0_16[0] + temp0_16[0]
            temp0_27[0] = temp0_27[0] + zmm12[0]
            zmm12[0] = zmm12[0] * zmm4[0]
            temp0_27[0] = temp0_27[0] * zmm4[0]
            zmm5 = temp0_16
            temp0_27[0] = temp0_27[0] f* zmm8.d
            zmm5[0] = zmm5[0] f* zmm8.d
            zmm5[0] = zmm5[0] f- zmm12[0]
            temp0_16[0] = temp0_16[0] f* zmm7.d
            temp0_16[0] = temp0_16[0] * zmm2[0]
            zmm5[0] = zmm5[0] f+ temp0_27[0]
            temp0_27[0] = temp0_27[0] - temp0_16[0]
            zmm12[0] = zmm12[0] f* zmm7.d
            zmm12[0] = zmm12[0] * zmm2[0]
            temp0_16[0] = temp0_16[0] + temp0_27[0]
            zmm12[0] = zmm12[0] - temp0_27[0]
            zmm5[0] = zmm5[0] f+ zmm15.d
            zmm12[0] = zmm12[0] + temp0_16[0]
            zmm12[0] = zmm12[0] + temp0_16[0]
            temp0_27[0] = temp0_27[0] + zmm12[0]
            temp0_27[0] = temp0_27[0] f+ zmm14.d
            zmm12[0] = zmm12[0] f+ zmm13.d
            float temp0_28[0x4] = _mm_unpacklo_ps(temp0_27, 0)
            *(rdx + 0x10) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5, zmm12[0].q), temp0_28[0].q)
            rdx += 0x30
        while (rdx != rax_5)
    
    rax_5.b = 1
    return rax_5

uint32_t rax
rax.b = 0
return rax
