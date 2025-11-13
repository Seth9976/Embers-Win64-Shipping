// 函数: sub_141dfacf0
// 地址: 0x141dfacf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg3 + 0x10)
int64_t rcx = sx.q((arg4 << 2).d)
int32_t* result = *(r10 + 0x10)
int128_t* rdi_1 = sx.q(result[rcx + 2]) + *(r10 + 0x38)
int64_t rbx = sx.q(result[rcx + 3])

if (rbx.d != 1)
    int32_t r9 = *(r10 + 8)
    uint64_t r10_1 = zx.q((rbx - 1).d)
    char rbp_1 = *(arg3 + 4)
    int128_t zmm11
    int128_t var_68_1 = zmm11
    void* rcx_4 = (sx.q((rbx << 2).d) + 3 + rdi_1) & 0xfffffffffffffffc
    int128_t zmm12
    int128_t var_78_1 = zmm12
    float zmm0[0x4]
    
    if (rbx.d s>= 2)
        zmm0 = *(arg3 + 0x1c)
    
    void var_88
    
    if (rbx.d s< 2 || zmm0[0] <= 0f)
        result = sub_141df1fe0(&var_88, sx.q((0 << 2).d) + rdi_1)
        *arg2 = *result
    else if (zmm0[0] < 1f)
        int32_t rdx = r9 - 2
        uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(r9 - 1))
        float temp0_7[0x4] = _mm_cvtepi32_ps(zx.o(r10_1.d))
        zmm6.d = zmm6.d f* zmm0[0]
        temp0_7[0] = temp0_7[0] * zmm0[0]
        int32_t rax_3 = int.d(zmm6[0])
        
        if (rax_3 s< 0)
            rdx = 0
        else if (rax_3 s< rdx)
            rdx = rax_3
        
        int32_t rax_4 = int.d(temp0_7[0])
        int32_t r11_1
        
        if (rax_4 s>= 0)
            r11_1 = r10_1.d
            
            if (rax_4 s< r10_1.d)
                r11_1 = rax_4
        else
            r11_1 = 0
        
        int64_t rax_5 = sx.q(r11_1)
        uint32_t rdx_1
        uint32_t r8
        uint64_t i_8
        
        if (r9 s<= 0xff)
            if (zx.d(*(rax_5 + rcx_4)) s> rdx)
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
                void* i_1 = sx.q(i_6)
                i_8 = zx.q(r10_1.d)
                
                for (; i_1 s<= rbx - 1; i_1 += 1)
                    if (zx.d(*(i_1 + rcx_4)) s> rdx)
                        i_8 = zx.q(i_6 - 1)
                        break
                    
                    i_6 += 1
            
            r8 = zx.d(*(sx.q(i_8.d) + rcx_4))
            int32_t rax_16 = (i_8 + 1).d
            
            if (rax_16 s<= r10_1.d)
                r10_1 = zx.q(rax_16)
            
            rdx_1 = zx.d(*(sx.q(r10_1.d) + rcx_4))
        else
            i_8 = sx.q(r10_1.d)
            
            if (zx.d(*(rcx_4 + (rax_5 << 1))) s> rdx)
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
            
            r8 = zx.d(*(rcx_4 + (sx.q(i_8.d) << 1)))
            int32_t rax_10 = (i_8 + 1).d
            
            if (rax_10 s<= r10_1.d)
                r10_1 = zx.q(rax_10)
            
            rdx_1 = zx.d(*(rcx_4 + (sx.q(r10_1.d) << 1)))
        
        uint32_t rdx_2 = rdx_1 - r8
        
        if (rbp_1 != 1)
            uint32_t rax_18 = 1
            float temp0_8[0x4] = _mm_cvtepi32_ps(zx.o(r8))
            
            if (rdx_2 s>= 1)
                rax_18 = rdx_2
            
            zmm6.d = zmm6.d f- temp0_8[0]
            zmm6.d = zmm6.d f/ _mm_cvtepi32_ps(zx.o(rax_18))[0]
        
        if (i_8.d == r10_1.d)
            result = sub_141df1fe0(&var_88, sx.q((i_8 << 2).d) + rdi_1)
            *arg2 = *result
        else
            float zmm8[0x4] = *sub_141df1fe0(&var_88, sx.q((i_8 << 2).d) + rdi_1)
            int32_t zmm6_1
            result, zmm6_1 = sub_141df1fe0(&var_88, sx.q((r10_1 << 2).d) + rdi_1)
            float temp0_10[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0x55)
            uint32_t zmm0_1[0x4] = temp0_10
            float temp0_11[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
            float zmm7_1[0x4] = *result
            zmm8[0] = zmm8[0] * zmm7_1[0]
            float temp0_12[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x55)
            zmm0_1[0] = zmm0_1[0] f* temp0_12[0]
            float temp0_13[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa)
            float temp0_14[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xff)
            zmm8[0] = zmm8[0] f+ zmm0_1[0]
            float temp0_15[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xff)
            zmm0_1 = temp0_11
            zmm0_1[0] = zmm0_1[0] f* temp0_13[0]
            zmm8[0] = zmm8[0] f+ zmm0_1[0]
            zmm0_1 = temp0_14
            zmm0_1[0] = zmm0_1[0] f* temp0_15[0]
            zmm8[0] = zmm8[0] f+ zmm0_1[0]
            
            if (zmm8[0] < 0f)
                zmm0_1 = 0xbf800000
            else
                zmm0_1 = 0x3f800000
            
            zmm7_1[0] = zmm7_1[0] f* zmm6_1
            zmm12.d = 1f f- zmm6_1
            temp0_12[0] = temp0_12[0] f* zmm6_1
            temp0_15[0] = temp0_15[0] f* zmm6_1
            zmm12.d = zmm12.d f* zmm0_1[0]
            temp0_10[0] = temp0_10[0] f* zmm12.d
            temp0_13[0] = temp0_13[0] f* zmm6_1
            temp0_12[0] = temp0_12[0] + temp0_10[0]
            zmm8[0] = zmm8[0] f* zmm12.d
            float zmm5_1[0x4] = data_143f39360
            temp0_11[0] = temp0_11[0] f* zmm12.d
            zmm7_1[0] = zmm7_1[0] + zmm8[0]
            temp0_14[0] = temp0_14[0] f* zmm12.d
            temp0_13[0] = temp0_13[0] + temp0_11[0]
            temp0_15[0] = temp0_15[0] + temp0_14[0]
            float temp0_16[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xe1)
            temp0_16[0] = temp0_12[0]
            float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xc6)
            temp0_17[0] = temp0_13[0]
            float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0x27)
            temp0_18[0] = temp0_15[0]
            float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0x39)
            float temp0_20[0x4] = _mm_mul_ps(temp0_19, temp0_19)
            float temp0_22[0x4] = _mm_add_ps(temp0_20, _mm_shuffle_ps(temp0_20, temp0_20, 0x4e))
            float temp0_24[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_22, temp0_22, 0x39), temp0_22)
            float temp0_25[0x4] = _mm_rsqrt_ps(temp0_24)
            float temp0_26[0x4] = _mm_mul_ps(temp0_24, zmm5_1)
            float temp0_31[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_25, temp0_25), temp0_26)), 
                    temp0_25), 
                temp0_25)
            float temp0_34[0x4] =
                _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_31, temp0_31), temp0_26))
            zmm0_1 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_24, 2)
            *arg2 = _mm_and_ps(
                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_34, temp0_31), temp0_31), temp0_19)
                    ^ data_143f39350, 
                zmm0_1) ^ data_143f39350
    else
        result = sub_141df1fe0(&var_88, sx.q(r10_1.d << 2) + rdi_1)
        *arg2 = *result
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
