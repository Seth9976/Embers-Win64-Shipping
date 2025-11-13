// 函数: sub_14099ba80
// 地址: 0x14099ba80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t arg_20 = arg4
float zmm6[0x4]
float var_48[0x4] = zmm6
float var_b8[0x4]
float var_a8[0x4]
int64_t arg_18
int32_t arg_28
int32_t arg_30

if ((*(arg3 + 0x10) & 1) == 0)
    float zmm0[0x4] = *arg5
    float zmm1[0x4] = (*arg5)[1]
    float zmm2[0x4] = (*arg5)[2]
    bool cond:2_1
    
    if (zmm0[0] <= zmm1[0])
        result = &arg_28
        cond:2_1 = zmm1[0] <= zmm2[0]
    else
        result = &arg_20
        cond:2_1 = zmm0[0] <= zmm2[0]
    
    if (cond:2_1)
        result = &arg_30
    
    int32_t i = 0
    
    if (*(arg3 + 0x20) s> 0)
        int64_t r13_2 = 0
        int64_t rdx_4 = sx.q(*result) << 4
        arg_18 = rdx_4
        
        do
            int64_t r14_1 = sx.q(arg1[1].d)
            result = zx.q((r14_1 + 1).d)
            zmm6 = *(*(*(arg3 + 0x18) + r13_2) + rdx_4)
            arg1[1].d = result.d
            
            if (result.d s> *(arg1 + 0xc))
                result = sub_14090a6a0(arg1)
                rdx_4 = arg_18
            
            r13_2 += 0x10
            int64_t* rcx_10 = r14_1 * 0x60 + *arg1
            *(rcx_10 + 0x10) = 1.o
            rcx_10[1].d = i
            i += 1
            *(rcx_10 + 0x20) = zmm6
            *rcx_10 = arg2
            *(rcx_10 + 0x30) = var_b8
            *(rcx_10 + 0x40) = var_a8
            *(rcx_10 + 0x50) = 0.o
        while (i s< *(arg3 + 0x20))
else
    int32_t i_1 = 0
    
    if (*(arg3 + 0x20) s> 0)
        int128_t** r15_1 = nullptr
        float zmm7[0x4]
        float var_58_1[0x4] = zmm7
        int128_t* rax = arg5
        int64_t rdx_1 = sx.q(arg4) << 4
        int64_t r8_1 = sx.q(arg_28) << 4
        int64_t r9_1 = sx.q(arg_30) << 4
        int128_t zmm8 = *(rax + 8)
        int128_t zmm9 = *(rax + 4)
        int128_t zmm10 = *rax
        arg_18 = rdx_1
        int64_t var_f8_1 = r8_1
        int64_t var_f0_1 = r9_1
        
        do
            int64_t r13_1 = sx.q(arg1[1].d)
            int128_t* rcx = *(r15_1 + *(arg3 + 0x18))
            result = zx.q((r13_1 + 1).d)
            zmm6 = *(rcx + rdx_1)
            float zmm4[0x4] = *(rcx + r8_1)
            float zmm5[0x4] = *(rcx + r9_1)
            zmm6[0] = zmm6[0] f* zmm10.d
            arg1[1].d = result.d
            float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            zmm4[0] = zmm4[0] f* zmm9.d
            float temp0_2[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
            float temp0_3[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
            zmm6[0] = zmm6[0] + zmm4[0]
            zmm5[0] = zmm5[0] f* zmm8.d
            temp0_3[0] = temp0_3[0] f* zmm8.d
            zmm6[0] = zmm6[0] + zmm5[0]
            float temp0_4[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
            temp0_4[0] = temp0_4[0] f* zmm9.d
            float temp0_5[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
            float temp0_6[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
            temp0_1[0] = temp0_1[0] f* zmm10.d
            temp0_2[0] = temp0_2[0] f* zmm10.d
            temp0_1[0] = temp0_1[0] + temp0_4[0]
            float temp0_7[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
            temp0_5[0] = temp0_5[0] f* zmm10.d
            temp0_7[0] = temp0_7[0] f* zmm9.d
            temp0_1[0] = temp0_1[0] + temp0_3[0]
            float temp0_8[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
            temp0_2[0] = temp0_2[0] + temp0_7[0]
            float temp0_9[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
            temp0_9[0] = temp0_9[0] f* zmm9.d
            temp0_6[0] = temp0_1[0]
            temp0_8[0] = temp0_8[0] f* zmm8.d
            temp0_5[0] = temp0_5[0] + temp0_9[0]
            float temp0_10[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc6)
            float temp0_11[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
            temp0_2[0] = temp0_2[0] + temp0_8[0]
            temp0_11[0] = temp0_11[0] f* zmm8.d
            temp0_5[0] = temp0_5[0] + temp0_11[0]
            temp0_10[0] = temp0_2[0]
            float temp0_12[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x27)
            temp0_12[0] = temp0_5[0]
            float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0x39)
            
            if (result.d s> *(arg1 + 0xc))
                result = sub_14090a6a0(arg1)
                rdx_1 = arg_18
                r8_1 = var_f8_1
                r9_1 = var_f0_1
            
            r15_1 = &r15_1[2]
            int64_t* rcx_5 = r13_1 * 0x60 + *arg1
            *(rcx_5 + 0x10) = 1.o
            rcx_5[1].d = i_1
            i_1 += 1
            *(rcx_5 + 0x20) = temp0_13
            *rcx_5 = arg2
            *(rcx_5 + 0x30) = var_b8
            *(rcx_5 + 0x40) = var_a8
            *(rcx_5 + 0x50) = 0.o
        while (i_1 s< *(arg3 + 0x20))
return result
