// 函数: sub_141dfb690
// 地址: 0x141dfb690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg3 + 0x10)
int64_t rcx = sx.q((arg4 << 2).d)
int64_t rax_1 = *(r10 + 0x10)
int64_t rbx = sx.q(*(rax_1 + (rcx << 2) + 0xc))
int64_t r9 = sx.q(*(rax_1 + (rcx << 2) + 8))
int64_t rax_2 = *(r10 + 0x38)
uint128_t zmm0
float zmm1[0x4]
uint32_t zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]
uint32_t zmm5[0x4]

if (rbx.d == 1)
    zmm2 = *(r9 + rax_2)
    zmm4 = *(r9 + rax_2 + 4)
    zmm5 = *(r9 + rax_2 + 8)
    zmm3 = 0x3f800000
    zmm0.d = zmm2.d f* zmm2[0]
    zmm4[0] = zmm4[0] * zmm4[0]
    zmm3[0] = 1f f- zmm0.d
    zmm0.d = zmm5.d f* zmm5[0]
    zmm3[0] = zmm3[0] - zmm4[0]
    zmm1 = zx.o(0)
    zmm3[0] = zmm3[0] f- zmm0.d
    
    if (not(zmm3[0] <= 0f))
        zmm1 = _mm_sqrt_ss(0, zmm3[0])
    
    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
    zmm2[0] = zmm4[0]
    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
    zmm2[0] = zmm5[0]
    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0x27)
    zmm2[0] = zmm1[0]
    *arg2 = _mm_shuffle_ps(zmm2, zmm2, 0x39)
    return rax_2

char rbp = *(arg3 + 4)
int32_t i_9 = (rbx - 1).d
int32_t rdi = *(r10 + 8)
int64_t rcx_3 = (rax_2 + 3 + r9) & 0xfffffffffffffffc
float zmm6[0x4]
float var_18[0x4] = zmm6
int128_t zmm9
int128_t var_28 = zmm9
int64_t i_10 = zx.q(rdi - 1)

if (rbx.d s< 2)
label_141dfba51:
    zmm0 = data_14399f720
    uint128_t var_38_1 = zmm0
    *arg2 = zmm0
else
    zmm0 = *(arg3 + 0x1c)
    
    if (zmm0.d f<= 0f || zmm0.d f>= 1f)
        goto label_141dfba51
    
    int32_t rdx = (i_10 - 1).d
    zmm3 = _mm_cvtepi32_ps(zx.o(i_10.d))
    int32_t i_8 = 0
    zmm2 = _mm_cvtepi32_ps(zx.o(i_9))
    zmm3[0] = zmm3[0] f* zmm0.d
    zmm2[0] = zmm2[0] f* zmm0.d
    int32_t rax_3 = int.d(zmm3.d)
    
    if (rax_3 s< 0)
        rdx = 0
    else if (rax_3 s< rdx)
        rdx = rax_3
    
    int32_t i_12 = int.d(zmm2.d)
    int32_t i_11
    
    if (i_12 s>= 0)
        i_11 = i_9
        
        if (i_12 s< i_9)
            i_11 = i_12
    else
        i_11 = 0
    
    int64_t i_13 = sx.q(i_11)
    uint32_t rdx_1
    uint32_t r8
    
    if (rdi s<= 0xff)
        if (zx.d(*(i_13 + rcx_3)) s> rdx)
            int32_t i_7 = i_11 - 1
            int64_t i = sx.q(i_7)
            
            if (i_7 s> 0)
                do
                    if (zx.d(*(i + rcx_3)) s<= rdx)
                        i_8 = i_7
                        break
                    
                    i_7 -= 1
                    i -= 1
                while (i s> 0)
        else
            int32_t i_6 = i_11 + 1
            int64_t i_1 = sx.q(i_6)
            i_8 = i_9
            
            for (; i_1 s<= rbx - 1; i_1 += 1)
                if (zx.d(*(i_1 + rcx_3)) s> rdx)
                    i_8 = i_6 - 1
                    break
                
                i_6 += 1
        
        r8 = zx.d(*(sx.q(i_8) + rcx_3))
        
        if (i_8 + 1 s<= i_9)
            i_9 = i_8 + 1
        
        i_10 = sx.q(i_9)
        rdx_1 = zx.d(*(i_10 + rcx_3))
    else
        if (zx.d(*(rcx_3 + (i_13 << 1))) s> rdx)
            int32_t i_5 = i_11 - 1
            int64_t i_2 = sx.q(i_5)
            
            if (i_5 s> 0)
                do
                    if (zx.d(*(rcx_3 + (i_2 << 1))) s<= rdx)
                        i_8 = i_5
                        break
                    
                    i_5 -= 1
                    i_2 -= 1
                while (i_2 s> 0)
        else
            int32_t i_4 = i_11 + 1
            int64_t i_3 = sx.q(i_4)
            i_8 = i_9
            
            for (; i_3 s<= sx.q(i_9); i_3 += 1)
                if (zx.d(*(rcx_3 + (i_3 << 1))) s> rdx)
                    i_8 = i_4 - 1
                    break
                
                i_4 += 1
        
        r8 = zx.d(*(rcx_3 + (sx.q(i_8) << 1)))
        
        if (i_8 + 1 s<= i_9)
            i_9 = i_8 + 1
        
        i_10 = sx.q(i_9)
        rdx_1 = zx.d(*(rcx_3 + (i_10 << 1)))
    
    uint32_t i_14 = rdx_1 - r8
    
    if (rbp != 1)
        i_10 = 1
        zmm0 = _mm_cvtepi32_ps(zx.o(r8))
        
        if (i_14 s>= 1)
            i_10 = zx.q(i_14)
        
        zmm3[0] = zmm3[0] f- zmm0.d
        zmm0 = _mm_cvtepi32_ps(zx.o(i_10.d))
        zmm3[0] = zmm3[0] f/ zmm0.d
    else
        zmm3 = zx.o(0)
    
    if (i_8 == i_9)
        goto label_141dfba51
    
    zmm4 = data_14399f720.d
    zmm5 = data_14399f720:4.d
    zmm2 = zmm4
    zmm1 = data_14399f720:8.d
    zmm2[0] = zmm2[0] f* zmm4[0]
    zmm0.d = zmm5.d f* zmm5[0]
    zmm1[0] = zmm1[0] * zmm1[0]
    zmm2[0] = zmm2[0] f+ zmm0.d
    zmm0 = data_14399f720:0xc.d
    zmm0.d = zmm0.d f* zmm0.d
    zmm2[0] = zmm2[0] f+ zmm1[0]
    zmm2[0] = zmm2[0] f+ zmm0.d
    
    if (zmm2[0] f< 0f)
        zmm0 = 0xbf800000
    else
        zmm0 = 0x3f800000
    
    zmm9.d = 1f - zmm3[0]
    zmm2 = zmm3
    zmm9.d = zmm9.d f* zmm0.d
    zmm3[0] = zmm3[0] f+ zmm9.d
    zmm3[0] = zmm3[0] f+ zmm9.d
    zmm2[0] = zmm2[0] f+ zmm9.d
    zmm3[0] = zmm3[0] f+ zmm9.d
    zmm3[0] = zmm3[0] * zmm4[0]
    zmm2[0] = zmm2[0] f* data_14399f720:8.d
    zmm3[0] = zmm3[0] f* data_14399f720:0xc.d
    zmm3[0] = zmm3[0] f* zmm5[0]
    zmm5 = data_143f39360
    float temp0_10[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
    temp0_10[0] = zmm3[0]
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc6)
    temp0_11[0] = zmm2[0]
    float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x27)
    temp0_12[0] = zmm3[0]
    float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0x39)
    float temp0_14[0x4] = _mm_mul_ps(temp0_13, temp0_13)
    float temp0_16[0x4] = _mm_add_ps(temp0_14, _mm_shuffle_ps(temp0_14, temp0_14, 0x4e))
    float temp0_18[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0x39), temp0_16)
    float temp0_19[0x4] = _mm_rsqrt_ps(temp0_18)
    float temp0_20[0x4] = _mm_mul_ps(temp0_18, zmm5)
    zmm2 = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_19, temp0_19), temp0_20)), 
            temp0_19), 
        temp0_19)
    zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(zmm2, zmm2), temp0_20))
    zmm0 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_18, 2)
    *arg2 = _mm_and_ps(
        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5, zmm2), zmm2), temp0_13) ^ data_143f39350, zmm0)
        ^ data_143f39350

return i_10
