// 函数: sub_141dfa330
// 地址: 0x141dfa330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg3 + 0x10)
int64_t rcx = sx.q((arg4 << 2).d)
int64_t result = *(r10 + 0x10)
int128_t* rdi_1 = sx.q(*(result + (rcx << 2) + 8)) + *(r10 + 0x38)
int64_t rbx = sx.q(*(result + (rcx << 2) + 0xc))

if (rbx.d != 1)
    int32_t r9 = *(r10 + 8)
    uint64_t r10_1 = zx.q((rbx - 1).d)
    char rbp_1 = *(arg3 + 4)
    int128_t zmm8
    int128_t var_38_1 = zmm8
    void* rcx_4 = (sx.q((rbx * 3).d * 2) + 3 + rdi_1) & 0xfffffffffffffffc
    int128_t zmm9
    int128_t var_48_1 = zmm9
    float zmm0[0x4]
    
    if (rbx.d s>= 2)
        zmm0 = *(arg3 + 0x1c)
    
    float var_88[0x4]
    uint64_t i_8
    
    if (rbx.d s< 2 || zmm0[0] <= 0f)
        i_8 = 0
    label_141dfa79d:
        result = sub_141e0df90(sx.q((i_8 * 3).d * 2) + rdi_1, &var_88)
        *arg2 = var_88
    else
        if (not(zmm0[0] < 1f))
            i_8 = zx.q(r10_1.d)
            goto label_141dfa79d
        
        int32_t rdx = r9 - 2
        uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(r9 - 1))
        float temp0_7[0x4] = _mm_cvtepi32_ps(zx.o(r10_1.d))
        zmm6.d = zmm6.d f* zmm0[0]
        temp0_7[0] = temp0_7[0] * zmm0[0]
        int32_t rax_4 = int.d(zmm6[0])
        
        if (rax_4 s< 0)
            rdx = 0
        else if (rax_4 s< rdx)
            rdx = rax_4
        
        int32_t rax_5 = int.d(temp0_7[0])
        int32_t r11_1
        
        if (rax_5 s>= 0)
            r11_1 = r10_1.d
            
            if (rax_5 s< r10_1.d)
                r11_1 = rax_5
        else
            r11_1 = 0
        
        int64_t rax_6 = sx.q(r11_1)
        uint32_t rdx_1
        uint32_t r9_1
        
        if (r9 s<= 0xff)
            if (zx.d(*(rax_6 + rcx_4)) s> rdx)
                i_8 = 0
                int32_t i_7 = r11_1 - 1
                void* i = sx.q(i_7)
                
                if (i_7 s> 0)
                    do
                        if (zx.d(*(i + rcx_4)) s<= rdx)
                            i_8 = zx.q(i_7)
                            break
                        
                        i_7 -= 1
                        i -= 1
                    while (i s> 0)
            else
                int32_t i_6 = r11_1 + 1
                int64_t i_1 = sx.q(i_6)
                i_8 = zx.q(r10_1.d)
                
                for (; i_1 s<= rbx - 1; i_1 += 1)
                    if (zx.d(*(i_1 + rcx_4)) s> rdx)
                        i_8 = zx.q(i_6 - 1)
                        break
                    
                    i_6 += 1
            
            r9_1 = zx.d(*(sx.q(i_8.d) + rcx_4))
            int32_t rax_17 = (i_8 + 1).d
            
            if (rax_17 s<= r10_1.d)
                r10_1 = zx.q(rax_17)
            
            rdx_1 = zx.d(*(sx.q(r10_1.d) + rcx_4))
        else
            i_8 = sx.q(r10_1.d)
            
            if (zx.d(*(rcx_4 + (rax_6 << 1))) s> rdx)
                i_8 = 0
                int32_t i_5 = r11_1 - 1
                int64_t i_2 = sx.q(i_5)
                
                if (i_5 s> 0)
                    do
                        if (zx.d(*(rcx_4 + (i_2 << 1))) s<= rdx)
                            i_8 = zx.q(i_5)
                            break
                        
                        i_5 -= 1
                        i_2 -= 1
                    while (i_2 s> 0)
            else
                int32_t i_4 = r11_1 + 1
                
                for (int64_t i_3 = sx.q(i_4); i_3 s<= i_8; i_3 += 1)
                    if (zx.d(*(rcx_4 + (i_3 << 1))) s> rdx)
                        i_8 = zx.q(i_4 - 1)
                        break
                    
                    i_4 += 1
            
            r9_1 = zx.d(*(rcx_4 + (sx.q(i_8.d) << 1)))
            int32_t rax_11 = (i_8 + 1).d
            
            if (rax_11 s<= r10_1.d)
                r10_1 = zx.q(rax_11)
            
            rdx_1 = zx.d(*(rcx_4 + (sx.q(r10_1.d) << 1)))
        
        uint32_t rdx_2 = rdx_1 - r9_1
        
        if (rbp_1 != 1)
            uint32_t rax_19 = 1
            float temp0_8[0x4] = _mm_cvtepi32_ps(zx.o(r9_1))
            
            if (rdx_2 s>= 1)
                rax_19 = rdx_2
            
            zmm6.d = zmm6.d f- temp0_8[0]
            zmm6.d = zmm6.d f/ _mm_cvtepi32_ps(zx.o(rax_19))[0]
        
        if (i_8.d == r10_1.d)
            goto label_141dfa79d
        
        int32_t var_98
        sub_141e0df90(sx.q((i_8 * 3).d * 2) + rdi_1, &var_98)
        int32_t zmm6_1
        result, zmm6_1 = sub_141e0df90(sx.q((r10_1 * 3).d * 2) + rdi_1, &var_88)
        float zmm5_1[0x4] = var_98
        int32_t var_94
        uint32_t zmm10[0x4] = var_94
        float zmm7[0x4] = var_88[0]
        float zmm3_1[0x4] = var_88[1]
        int32_t var_90
        float zmm11[0x4] = var_90
        float zmm4_1[0x4] = var_88[2]
        int32_t var_8c
        uint32_t zmm12[0x4] = var_8c
        zmm5_1[0] = zmm5_1[0] * zmm7[0]
        zmm10[0] = zmm10[0] f* zmm3_1[0]
        zmm11[0] = zmm11[0] * zmm4_1[0]
        zmm5_1[0] = zmm5_1[0] f+ zmm10[0]
        zmm5_1[0] = zmm5_1[0] + zmm11[0]
        float zmm1_1[0x4] = var_88[3]
        zmm12[0] = zmm12[0] f* zmm1_1[0]
        zmm5_1[0] = zmm5_1[0] f+ zmm12[0]
        uint32_t zmm0_1[0x4]
        
        if (zmm5_1[0] < 0f)
            zmm0_1 = 0xbf800000
        else
            zmm0_1 = 0x3f800000
        
        zmm7[0] = zmm7[0] f* zmm6_1
        zmm9.d = 1f f- zmm6_1
        zmm1_1[0] = zmm1_1[0] f* zmm6_1
        zmm4_1[0] = zmm4_1[0] f* zmm6_1
        zmm9.d = zmm9.d f* zmm0_1[0]
        zmm5_1[0] = zmm5_1[0] f* zmm9.d
        zmm3_1[0] = zmm3_1[0] f* zmm6_1
        zmm7[0] = zmm7[0] + zmm5_1[0]
        zmm10[0] = zmm10[0] f* zmm9.d
        zmm5_1 = data_143f39360
        zmm11[0] = zmm11[0] f* zmm9.d
        zmm3_1[0] = zmm3_1[0] f+ zmm10[0]
        zmm12[0] = zmm12[0] f* zmm9.d
        zmm4_1[0] = zmm4_1[0] + zmm11[0]
        float temp0_10[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
        zmm1_1[0] = zmm1_1[0] f+ zmm12[0]
        temp0_10[0] = zmm3_1[0]
        float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc6)
        temp0_11[0] = zmm4_1[0]
        float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x27)
        temp0_12[0] = zmm1_1[0]
        float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0x39)
        float temp0_14[0x4] = _mm_mul_ps(temp0_13, temp0_13)
        float temp0_16[0x4] = _mm_add_ps(temp0_14, _mm_shuffle_ps(temp0_14, temp0_14, 0x4e))
        float temp0_18[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0x39), temp0_16)
        float temp0_19[0x4] = _mm_rsqrt_ps(temp0_18)
        float temp0_20[0x4] = _mm_mul_ps(temp0_18, zmm5_1)
        float temp0_25[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_19, temp0_19), temp0_20)), 
                temp0_19), 
            temp0_19)
        float temp0_28[0x4] =
            _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_25, temp0_25), temp0_20))
        zmm0_1 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_18, 2)
        *arg2 = _mm_and_ps(
            _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_28, temp0_25), temp0_25), temp0_13)
                ^ data_143f39350, 
            zmm0_1) ^ data_143f39350
else
    float zmm2[0x4] = *rdi_1
    float zmm4 = *(rdi_1 + 4)
    float zmm5[0x4] = *(rdi_1 + 8)
    zmm2[0] = zmm2[0] * zmm2[0]
    float zmm3 = 1f - zmm2[0]
    zmm5[0] = zmm5[0] * zmm5[0]
    float zmm1 = (zx.o(0)).d
    zmm3 = zmm3 - zmm4 * zmm4 - zmm5[0]
    
    if (not(zmm3 <= 0f))
        zmm1 = _mm_sqrt_ss(0, zmm3)
    
    float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
    temp0_2[0] = zmm4
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
    temp0_3[0] = zmm5[0]
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
    temp0_4[0] = zmm1
    *arg2 = _mm_shuffle_ps(temp0_4, temp0_4, 0x39)

return result
