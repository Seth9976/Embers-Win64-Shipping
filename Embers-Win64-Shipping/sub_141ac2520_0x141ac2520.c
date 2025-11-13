// 函数: sub_141ac2520
// 地址: 0x141ac2520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_3 = zx.q(*(arg2 + 0x3c))
float zmm6[0x4] = zx.o(0)
uint128_t zmm0

if (arg1[1].d != i_3.d)
    zmm0 = zx.o(data_143dbb1f8.q)
    int32_t rax_1 = data_143dbb200
    arg1[1].d = 0
    int32_t var_a0_1 = rax_1
    int32_t var_9c_1 = 0
    int32_t var_90_1 = rax_1
    int32_t var_84_1 = rax_1
    uint64_t var_80_1 = zmm0.q
    int32_t var_74_1 = 0
    
    if (*(arg1 + 0xc) != i_3.d)
        sub_141750500(arg1, i_3.d)
    
    if (i_3.d s> 0)
        uint64_t i_2 = i_3
        uint64_t i
        
        do
            int64_t rdi = sx.q(arg1[1].d)
            int32_t rax_2 = (rdi + 1).d
            arg1[1].d = rax_2
            
            if (rax_2 s> *(arg1 + 0xc))
                sub_141750030(arg1)
            
            int64_t rcx_1 = rdi * 0x3c
            int128_t* rcx_2 = rcx_1 + *arg1
            
            if (rcx_1 != neg.q(*arg1))
                *rcx_2 = zmm0.q.o
                rcx_2[1] = zmm0.q.o
                rcx_2[2] = zmm0.q:4.o
                rcx_2[3].q = rax_1.q
                *(rcx_2 + 0x38) = 0
            
            i = i_2
            i_2 -= 1
        while (i != 1)

int32_t i_1 = 0
arg1[4].d = 0
int32_t rcx_3 = *(arg2 + 0x3c)
float zmm5[0x4]

if (rcx_3 - 1 s> 0)
    uint64_t* rdx_2 = nullptr
    int64_t r8 = 0
    
    do
        int64_t rax_4 = *(arg2 + 0x50)
        i_1 += 1
        int64_t rcx_4 = *arg1
        zmm5 = *(rax_4 + r8 + 0x10)
        float zmm3[0x4] = *(rax_4 + r8 + 0x40)
        float temp0_2[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        temp0_3[0] = temp0_3[0] - temp0_2[0]
        float temp0_4[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
        zmm3[0] = zmm3[0] - zmm5[0]
        zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
        r8 += 0x30
        temp0_4[0] = temp0_4[0] f- zmm0.d
        temp0_3[0] = temp0_3[0] * temp0_3[0]
        zmm3[0] = zmm3[0] * zmm3[0]
        temp0_4[0] = temp0_4[0] * temp0_4[0]
        temp0_3[0] = temp0_3[0] + zmm3[0]
        *(rdx_2 + rcx_4) = (_mm_unpacklo_ps(zmm5, temp0_2[0].q)).q
        *(rdx_2 + rcx_4 + 8) = zmm0.d
        temp0_3[0] = temp0_3[0] + temp0_4[0]
        float temp0_7[0x4] = _mm_sqrt_ss(temp0_3[0], temp0_3[0])
        *(rdx_2 + rcx_4 + 0xc) = temp0_7[0]
        rdx_2 += 0x3c
        temp0_7[0] = temp0_7[0] f+ arg1[4].d
        arg1[4].d = temp0_7[0]
        rcx_3 = *(arg2 + 0x3c)
    while (i_1 s< rcx_3 - 1)

uint64_t* rdx_5 = (sx.q(rcx_3) - 1) * 0x3c
float zmm2[0x4] = *(*(arg2 + 0x50) + (sx.q(rcx_3) - 1) * 0x30 + 0x10)
int64_t rcx_7 = *arg1
int32_t var_b0_2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
*(rdx_5 + rcx_7) = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
*(rdx_5 + rcx_7 + 8) = var_b0_2
*(rdx_5 + *arg1 + 0xc) = 0
*(arg1 + 0x24) = arg1[1].d
uint64_t result = *(arg2 + 0x30)

if (result != 0)
    char rax_11 = *(result + 0x2a)
    *(arg1 + 0x34) = rax_11
    
    if (rax_11 != 0)
        zmm0 = *(*(arg2 + 0x30) + 0x24)
        
        if (not(zmm0.d f< 0f))
            zmm6 = __minss_xmmss_memss(zmm0[0], 0x42b40000)
        
        zmm6[0] = zmm6[0] * 0.0174532924f
        arg1[2].d = zmm6[0]
    
    char rdx_6 = *(*(arg2 + 0x30) + 0x29)
    uint64_t var_b8
    float result_1
    
    if (rdx_6 == 0)
        var_b8 = data_143dbb1f8.q
        result_1 = data_143dbb200
    else
        zmm6 = *(*(arg2 + 0x50) + sx.q(*(arg2 + 0x58)) * 0x30 - 0x30)
        
        if (rdx_6 == 1)
            zmm5 = data_142d4cc00
        else if (rdx_6 != 2)
            zmm5 = data_142d4cc30
        else
            zmm5 = data_142d4cc20
        
        float temp0_12[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), temp0_12)
        float temp0_15[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
        float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_15)
        float temp0_18[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
        float temp0_19[0x4] = _mm_sub_ps(temp0_17, zmm0)
        float temp0_20[0x4] = _mm_add_ps(temp0_19, temp0_19)
        float temp0_21[0x4] = _mm_mul_ps(temp0_18, temp0_20)
        zmm0 = _mm_shuffle_ps(temp0_20, temp0_20, 0xc9)
        float temp0_23[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xd2)
        zmm0 = _mm_mul_ps(zmm0, temp0_12)
        float temp0_25[0x4] = _mm_mul_ps(temp0_23, temp0_15)
        float temp0_26[0x4] = _mm_add_ps(temp0_21, zmm5)
        float temp0_28[0x4] = _mm_add_ps(_mm_sub_ps(temp0_25, zmm0), temp0_26)
        var_b8.d = temp0_28[0]
        zmm0 = _mm_shuffle_ps(temp0_28, temp0_28, 0x55)
        result_1 = _mm_shuffle_ps(temp0_28, temp0_28, 0xaa)[0]
        var_b8:4.d = zmm0.d
    
    result = zx.q(result_1)
    arg1[5] = var_b8
    arg1[6].d = result.d

*(arg1 + 0x35) = 1
arg1[3] = arg3
return result
