// 函数: sub_141dfba80
// 地址: 0x141dfba80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg3 + 0x10)
int64_t rcx = sx.q((arg4 << 2).d)
void* result = *(r10 + 0x10)
int128_t* rbx_1 = sx.q(*(result + (rcx << 2) + 8)) + *(r10 + 0x38)
int64_t rdi = sx.q(*(result + (rcx << 2) + 0xc))
float zmm3[0x4]
float zmm5[0x4]

if (rdi.d != 1)
    int32_t r10_1 = *(r10 + 8)
    int32_t i_9 = (rdi - 1).d
    char rbp_1 = *(arg3 + 4)
    void* rcx_4 = (sx.q(rdi.d << 4) + 3 + rbx_1) & 0xfffffffffffffffc
    float zmm0[0x4]
    
    if (rdi.d s>= 2)
        zmm0 = *(arg3 + 0x1c)
    
    uint64_t i_8
    
    if (rdi.d s< 2 || zmm0[0] <= 0f)
        i_8 = 0
    label_141dfbef0:
        result = sx.q(i_8.d << 4)
        zmm0 = *(result + rbx_1)
        float var_98_1[0x4] = zmm0
        *arg2 = zmm0
    else
        zmm5 = 0x3f800000
        
        if (not(zmm0[0] < 1f))
            i_8 = zx.q(i_9)
            goto label_141dfbef0
        
        int32_t rdx = r10_1 - 2
        zmm3 = _mm_cvtepi32_ps(zx.o(r10_1 - 1))
        float temp0_7[0x4] = _mm_cvtepi32_ps(zx.o(i_9))
        zmm3[0] = zmm3[0] * zmm0[0]
        temp0_7[0] = temp0_7[0] * zmm0[0]
        int32_t rax_4 = int.d(zmm3[0])
        
        if (rax_4 s< 0)
            rdx = 0
        else if (rax_4 s< rdx)
            rdx = rax_4
        
        int32_t i_13 = int.d(temp0_7[0])
        int32_t i_12
        
        if (i_13 s>= 0)
            i_12 = i_9
            
            if (i_13 s< i_9)
                i_12 = i_13
        else
            i_12 = 0
        
        int64_t i_14 = sx.q(i_12)
        uint32_t rdx_1
        uint32_t r10_2
        
        if (r10_1 s<= 0xff)
            if (zx.d(*(i_14 + rcx_4)) s> rdx)
                i_8 = 0
                int32_t i_7 = i_12 - 1
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
                int32_t i_6 = i_12 + 1
                void* i_1 = sx.q(i_6)
                i_8 = zx.q(i_9)
                
                for (; i_1 s<= rdi - 1; i_1 += 1)
                    if (zx.d(*(i_1 + rcx_4)) s> rdx)
                        i_8 = zx.q(i_6 - 1)
                        break
                    
                    i_6 += 1
            
            r10_2 = zx.d(*(sx.q(i_8.d) + rcx_4))
            int32_t i_11 = (i_8 + 1).d
            
            if (i_11 s<= i_9)
                i_9 = i_11
            
            rdx_1 = zx.d(*(sx.q(i_9) + rcx_4))
        else
            i_8 = sx.q(i_9)
            
            if (zx.d(*(rcx_4 + (i_14 << 1))) s> rdx)
                i_8 = 0
                int32_t i_5 = i_12 - 1
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
                int32_t i_4 = i_12 + 1
                
                for (int64_t i_3 = sx.q(i_4); i_3 s<= i_8; i_3 += 1)
                    if (zx.d(*(rcx_4 + (i_3 << 1))) s> rdx)
                        i_8 = zx.q(i_4 - 1)
                        break
                    
                    i_4 += 1
            
            r10_2 = zx.d(*(rcx_4 + (sx.q(i_8.d) << 1)))
            int32_t i_10 = (i_8 + 1).d
            
            if (i_10 s<= i_9)
                i_9 = i_10
            
            rdx_1 = zx.d(*(rcx_4 + (sx.q(i_9) << 1)))
        
        uint32_t rdx_2 = rdx_1 - r10_2
        
        if (rbp_1 != 1)
            uint32_t rax_15 = 1
            float temp0_8[0x4] = _mm_cvtepi32_ps(zx.o(r10_2))
            
            if (rdx_2 s>= 1)
                rax_15 = rdx_2
            
            zmm3[0] = zmm3[0] - temp0_8[0]
            float temp0_9[0x4] = _mm_cvtepi32_ps(zx.o(rax_15))
            zmm3[0] = zmm3[0] / temp0_9[0]
        else
            zmm3 = zx.o(0)
        
        if (i_8.d == i_9)
            goto label_141dfbef0
        
        result = sx.q(i_9 << 4) + rbx_1
        void* rcx_6 = sx.q(i_8.d << 4) + rbx_1
        float zmm10[0x4] = *result
        float zmm11[0x4] = *(result + 4)
        float zmm6[0x4] = *rcx_6
        int128_t zmm7 = *(rcx_6 + 4)
        float zmm12[0x4] = *(result + 8)
        int128_t zmm8 = *(rcx_6 + 8)
        float zmm13[0x4] = *(result + 0xc)
        int128_t zmm9 = *(rcx_6 + 0xc)
        zmm11[0] = zmm11[0] f* zmm7.d
        zmm10[0] = zmm10[0] * zmm6[0]
        zmm12[0] = zmm12[0] f* zmm8.d
        zmm11[0] = zmm11[0] + zmm10[0]
        zmm13[0] = zmm13[0] f* zmm9.d
        zmm11[0] = zmm11[0] + zmm12[0]
        zmm11[0] = zmm11[0] + zmm13[0]
        
        if (zmm11[0] < 0f)
            zmm0 = 0xbf800000
        else
            zmm0 = 0x3f800000
        
        zmm5[0] = 1f - zmm3[0]
        zmm10[0] = zmm10[0] * zmm3[0]
        zmm11[0] = zmm11[0] * zmm3[0]
        zmm12[0] = zmm12[0] * zmm3[0]
        zmm5[0] = zmm5[0] * zmm0[0]
        zmm6[0] = zmm6[0] * zmm5[0]
        zmm7.d = zmm7.d f* zmm5[0]
        zmm8.d = zmm8.d f* zmm5[0]
        zmm6[0] = zmm6[0] + zmm10[0]
        zmm7.d = zmm7.d f+ zmm11[0]
        zmm9.d = zmm9.d f* zmm5[0]
        zmm8.d = zmm8.d f+ zmm12[0]
        zmm5 = data_143f39360
        float temp0_10[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        temp0_10[0] = zmm7.d
        zmm13[0] = zmm13[0] * zmm3[0]
        float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc6)
        temp0_11[0] = zmm8.d
        zmm9.d = zmm9.d f+ zmm13[0]
        float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x27)
        temp0_12[0] = zmm9.d
        float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0x39)
        float temp0_14[0x4] = _mm_mul_ps(temp0_13, temp0_13)
        float temp0_16[0x4] = _mm_add_ps(temp0_14, _mm_shuffle_ps(temp0_14, temp0_14, 0x4e))
        float temp0_18[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0x39), temp0_16)
        float temp0_19[0x4] = _mm_rsqrt_ps(temp0_18)
        float temp0_20[0x4] = _mm_mul_ps(temp0_18, zmm5)
        float temp0_25[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_19, temp0_19), temp0_20)), 
                temp0_19), 
            temp0_19)
        float temp0_28[0x4] = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_25, temp0_25), temp0_20))
        float temp0_30[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_18, 2)
        *arg2 = _mm_and_ps(
            _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_28, temp0_25), temp0_25), temp0_13)
                ^ data_143f39350, 
            temp0_30) ^ data_143f39350
else
    float zmm2[0x4] = *rbx_1
    float zmm4[0x4] = *(rbx_1 + 4)
    zmm5 = *(rbx_1 + 8)
    zmm3 = 0x3f800000
    zmm2[0] = zmm2[0] * zmm2[0]
    zmm4[0] = zmm4[0] * zmm4[0]
    zmm3[0] = 1f - zmm2[0]
    zmm5[0] = zmm5[0] * zmm5[0]
    zmm3[0] = zmm3[0] - zmm4[0]
    float zmm1[0x4] = zx.o(0)
    zmm3[0] = zmm3[0] - zmm5[0]
    
    if (not(zmm3[0] <= 0f))
        zmm1 = _mm_sqrt_ss(0, zmm3[0])
    
    float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
    temp0_2[0] = zmm4[0]
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
    temp0_3[0] = zmm5[0]
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
    temp0_4[0] = zmm1[0]
    *arg2 = _mm_shuffle_ps(temp0_4, temp0_4, 0x39)
return result
