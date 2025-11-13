// 函数: sub_141df9dc0
// 地址: 0x141df9dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg3 + 0x10)
float zmm3[0x4] = 0x3f800000
int64_t rcx = sx.q((arg4 << 2).d)
uint64_t result = *(r10 + 0x10)
int128_t* rbx_1 = sx.q(*(result + (rcx << 2) + 8)) + *(r10 + 0x38)
int64_t rdi = sx.q(*(result + (rcx << 2) + 0xc))
uint32_t zmm0[0x4]
float zmm1[0x4]
float zmm2[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (rdi.d != 1)
    int32_t r9 = *(r10 + 8)
    uint64_t r10_1 = zx.q((rdi - 1).d)
    zmm4 = zx.o(0)
    char rbp_1 = *(arg3 + 4)
    void* rcx_4 = (sx.q((rdi * 3).d << 2) + 3 + rbx_1) & 0xfffffffffffffffc
    
    if (rdi.d s>= 2)
        zmm0 = *(arg3 + 0x1c)
    
    uint64_t i_8
    uint32_t zmm6[0x4]
    
    if (rdi.d s< 2 || zmm0[0] f<= 0f)
        i_8 = 0
    label_141dfa299:
        result = zx.q((i_8 * 3).d << 2)
        int64_t rcx_6 = sx.q(result.d)
        zmm2 = *(rcx_6 + rbx_1)
        zmm5 = *(rcx_6 + rbx_1 + 4)
        zmm0 = zmm2
        zmm6 = *(rcx_6 + rbx_1 + 8)
        zmm0[0] = zmm0[0] f* zmm2[0]
        zmm5[0] = zmm5[0] * zmm5[0]
        zmm3[0] = 1f f- zmm0[0]
        zmm6[0] = zmm6[0] f* zmm6[0]
        zmm3[0] = zmm3[0] - zmm5[0]
        zmm3[0] = zmm3[0] f- zmm6[0]
        
        if (not(zmm3[0] <= 0f))
            zmm4 = _mm_sqrt_ss(zx.o(0)[0], zmm3[0])
        
        float temp0_38[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
        temp0_38[0] = zmm5[0]
        float temp0_39[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0xc6)
        temp0_39[0] = zmm6[0]
        float temp0_40[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0x27)
        temp0_40[0] = zmm4[0]
        *arg2 = _mm_shuffle_ps(temp0_40, temp0_40, 0x39)
    else
        if (not(zmm0[0] f< 1f))
            i_8 = zx.q(r10_1.d)
            goto label_141dfa299
        
        int32_t rdx = r9 - 2
        zmm5 = _mm_cvtepi32_ps(zx.o(r9 - 1))
        float temp0_7[0x4] = _mm_cvtepi32_ps(zx.o(r10_1.d))
        zmm5[0] = zmm5[0] f* zmm0[0]
        temp0_7[0] = temp0_7[0] f* zmm0[0]
        int32_t rax_4 = int.d(zmm5[0])
        
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
                
                for (; i_1 s<= rdi - 1; i_1 += 1)
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
            zmm0 = _mm_cvtepi32_ps(zx.o(r9_1))
            
            if (rdx_2 s>= 1)
                rax_19 = rdx_2
            
            zmm5[0] = zmm5[0] f- zmm0[0]
            zmm0 = _mm_cvtepi32_ps(zx.o(rax_19))
            zmm5[0] = zmm5[0] f/ zmm0[0]
        else
            zmm5 = zx.o(0)
        
        if (i_8.d == r10_1.d)
            goto label_141dfa299
        
        zmm2 = 0x3f800000
        int128_t* rcx_5 = sx.q((i_8 * 3).d << 2)
        result = zx.q((r10_1 * 3).d << 2)
        uint32_t zmm9[0x4] = *(rcx_5 + rbx_1)
        float zmm10[0x4] = *(rcx_5 + rbx_1 + 4)
        uint32_t zmm11[0x4] = *(rcx_5 + rbx_1 + 8)
        zmm9[0] = zmm9[0] f* zmm9[0]
        int128_t* rdx_3 = sx.q(result.d)
        zmm10[0] = zmm10[0] * zmm10[0]
        zmm2[0] = 1f f- zmm9[0]
        zmm11[0] = zmm11[0] f* zmm11[0]
        zmm2[0] = zmm2[0] - zmm10[0]
        zmm2[0] = zmm2[0] f- zmm11[0]
        float zmm13[0x4]
        
        if (zmm2[0] <= 0f)
            zmm13 = zx.o(0)
        else
            zmm13 = _mm_sqrt_ss(0, zmm2[0])
        
        zmm6 = *(rdx_3 + rbx_1)
        zmm2 = 0x3f800000
        float zmm7[0x4] = *(rdx_3 + rbx_1 + 4)
        uint32_t zmm8[0x4] = *(rdx_3 + rbx_1 + 8)
        zmm6[0] = zmm6[0] f* zmm6[0]
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm2[0] = 1f f- zmm6[0]
        zmm8[0] = zmm8[0] f* zmm8[0]
        zmm2[0] = zmm2[0] - zmm7[0]
        zmm2[0] = zmm2[0] f- zmm8[0]
        float zmm12[0x4]
        
        if (zmm2[0] <= 0f)
            zmm12 = zx.o(0)
        else
            zmm12 = _mm_sqrt_ss(0, zmm2[0])
        
        zmm7[0] = zmm7[0] * zmm10[0]
        zmm1 = zmm8
        zmm6[0] = zmm6[0] f* zmm9[0]
        zmm1[0] = zmm1[0] f* zmm11[0]
        zmm7[0] = zmm7[0] f+ zmm6[0]
        zmm0 = zmm12
        zmm0[0] = zmm0[0] f* zmm13[0]
        zmm7[0] = zmm7[0] + zmm1[0]
        zmm7[0] = zmm7[0] f+ zmm0[0]
        
        if (zmm7[0] < 0f)
            zmm0 = 0xbf800000
        else
            zmm0 = 0x3f800000
        
        zmm6[0] = zmm6[0] f* zmm5[0]
        zmm3[0] = 1f - zmm5[0]
        zmm7[0] = zmm7[0] * zmm5[0]
        zmm8[0] = zmm8[0] f* zmm5[0]
        zmm3[0] = zmm3[0] f* zmm0[0]
        zmm12[0] = zmm12[0] * zmm5[0]
        zmm5 = data_143f39360
        zmm3[0] = zmm3[0] f* zmm9[0]
        zmm0 = zmm3
        zmm0[0] = zmm0[0] f* zmm11[0]
        zmm6[0] = zmm6[0] f+ zmm3[0]
        zmm3[0] = zmm3[0] * zmm10[0]
        zmm8[0] = zmm8[0] f+ zmm0[0]
        zmm7[0] = zmm7[0] + zmm3[0]
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm3[0] = zmm3[0] * zmm13[0]
        zmm6[0] = zmm7[0]
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xc6)
        zmm12[0] = zmm12[0] + zmm3[0]
        zmm6[0] = zmm8[0]
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x27)
        zmm6[0] = zmm12[0]
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x39)
        float temp0_16[0x4] = _mm_mul_ps(zmm6, zmm6)
        float temp0_18[0x4] = _mm_add_ps(temp0_16, _mm_shuffle_ps(temp0_16, temp0_16, 0x4e))
        float temp0_20[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0x39), temp0_18)
        float temp0_21[0x4] = _mm_rsqrt_ps(temp0_20)
        float temp0_22[0x4] = _mm_mul_ps(temp0_20, zmm5)
        float temp0_27[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_21, temp0_21), temp0_22)), 
                temp0_21), 
            temp0_21)
        float temp0_30[0x4] = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_27, temp0_27), temp0_22))
        zmm0 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_20, 2)
        *arg2 = _mm_and_ps(
            _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_30, temp0_27), temp0_27), zmm6)
                ^ data_143f39350, 
            zmm0) ^ data_143f39350
else
    zmm2 = *rbx_1
    zmm4 = *(rbx_1 + 4)
    zmm0 = zmm2
    zmm5 = *(rbx_1 + 8)
    zmm0[0] = zmm0[0] f* zmm2[0]
    zmm4[0] = zmm4[0] * zmm4[0]
    zmm3[0] = 1f f- zmm0[0]
    zmm0 = zmm5
    zmm0[0] = zmm0[0] f* zmm5[0]
    zmm3[0] = zmm3[0] - zmm4[0]
    zmm1 = zx.o(0)
    zmm3[0] = zmm3[0] f- zmm0[0]
    
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
