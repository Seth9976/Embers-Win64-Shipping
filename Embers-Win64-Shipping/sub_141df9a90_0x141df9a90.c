// 函数: sub_141df9a90
// 地址: 0x141df9a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg3 + 0x10)
int64_t rcx = sx.q((arg4 << 2).d)
int64_t rax_1 = *(r10 + 0x10)
int128_t* r9_1 = sx.q(*(rax_1 + (rcx << 2) + 8)) + *(r10 + 0x38)
int32_t rdx = *(rax_1 + (rcx << 2) + 0xc)
float zmm2[0x4]
float zmm3[0x4]
float zmm5[0x4]

if (rdx == 1)
    zmm2 = *r9_1
    float zmm4[0x4] = *(r9_1 + 4)
    zmm5 = *(r9_1 + 8)
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
    return zmm5

float zmm0[0x4]

if (rdx s>= 2)
    zmm0 = *(arg3 + 0x1c)

int32_t rcx_1

if (rdx s< 2 || zmm0[0] <= 0f)
    rcx_1 = 0
else
    zmm5 = 0x3f800000
    int32_t rdx_1 = rdx - 1
    
    if (zmm0[0] < 1f)
        zmm3 = _mm_cvtepi32_ps(zx.o(rdx_1))
        zmm3[0] = zmm3[0] * zmm0[0]
        zmm2 = zmm3
        int32_t rcx_3 = int.d(zmm2[0])
        
        if (rcx_3 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_3))[0] == zmm2[0]))
            zmm2 = _mm_cvtepi32_ps(zx.o(rcx_3
                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))
        
        rcx_1 = rdx_1
        int32_t rax_5 = int.d(zmm2[0])
        
        if (rax_5 s<= rdx_1)
            rcx_1 = rax_5
        
        if (*(arg3 + 4) != 1)
            zmm3[0] = zmm3[0] - zmm2[0]
        else
            zmm3 = zx.o(0)
        
        if (rcx_1 + 1 s<= rdx_1)
            rdx_1 = rcx_1 + 1
        
        if (rcx_1 != rdx_1)
            void* rax_8 = sx.q(rdx_1 << 4) + r9_1
            void* rcx_7 = sx.q(rcx_1 << 4) + r9_1
            float zmm10[0x4] = *rax_8
            float zmm11[0x4] = *(rax_8 + 4)
            float zmm6[0x4] = *rcx_7
            int128_t zmm7 = *(rcx_7 + 4)
            float zmm12[0x4] = *(rax_8 + 8)
            int128_t zmm8 = *(rcx_7 + 8)
            float zmm13[0x4] = *(rax_8 + 0xc)
            int128_t zmm9 = *(rcx_7 + 0xc)
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
            float temp0_11[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
            temp0_11[0] = zmm7.d
            zmm13[0] = zmm13[0] * zmm3[0]
            float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc6)
            temp0_12[0] = zmm8.d
            zmm9.d = zmm9.d f+ zmm13[0]
            float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0x27)
            temp0_13[0] = zmm9.d
            float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x39)
            float temp0_15[0x4] = _mm_mul_ps(temp0_14, temp0_14)
            float temp0_17[0x4] = _mm_add_ps(temp0_15, _mm_shuffle_ps(temp0_15, temp0_15, 0x4e))
            float temp0_19[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0x39), temp0_17)
            float temp0_20[0x4] = _mm_rsqrt_ps(temp0_19)
            float temp0_21[0x4] = _mm_mul_ps(temp0_19, zmm5)
            float temp0_26[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_20, temp0_20), temp0_21)), 
                    temp0_20), 
                temp0_20)
            float temp0_29[0x4] =
                _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_26, temp0_26), temp0_21))
            float temp0_31[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_19, 2)
            *arg2 = _mm_and_ps(
                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_29, temp0_26), temp0_26), temp0_14)
                    ^ data_143f39350, 
                temp0_31) ^ data_143f39350
            return temp0_31
    else
        rcx_1 = rdx_1

zmm0 = *(sx.q(rcx_1 << 4) + r9_1)
float var_98[0x4] = zmm0
*arg2 = zmm0
return zmm0
