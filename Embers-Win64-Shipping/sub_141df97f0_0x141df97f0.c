// 函数: sub_141df97f0
// 地址: 0x141df97f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg3 + 0x10)
int64_t r9 = sx.q((arg4 << 2).d)
int64_t rax_1 = *(r10 + 0x10)
int32_t rcx = *(rax_1 + (r9 << 2) + 0xc)
float zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm5[0x4]

if (rcx == 1)
    int128_t* rax_3 = sx.q(*(rax_1 + (r9 << 2) + 8)) + *(r10 + 0x38)
    zmm3 = 0x3f800000
    zmm2 = *rax_3
    float zmm4[0x4] = *(rax_3 + 4)
    zmm5 = *(rax_3 + 8)
    zmm2[0] = zmm2[0] * zmm2[0]
    zmm4[0] = zmm4[0] * zmm4[0]
    zmm3[0] = 1f - zmm2[0]
    zmm5[0] = zmm5[0] * zmm5[0]
    zmm3[0] = zmm3[0] - zmm4[0]
    zmm1 = zx.o(0)
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

if (rcx s>= 2)
    zmm0 = *(arg3 + 0x1c)
    
    if (not(zmm0[0] <= 0f))
        zmm5 = 0x3f800000
        int32_t rcx_1 = rcx - 1
        
        if (not(zmm0[0] >= 1f))
            zmm3 = _mm_cvtepi32_ps(zx.o(rcx_1))
            zmm3[0] = zmm3[0] * zmm0[0]
            zmm2 = zmm3
            int32_t rdx = int.d(zmm2[0])
            
            if (rdx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rdx))[0] == zmm2[0]))
                zmm2 = _mm_cvtepi32_ps(zx.o(rdx
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))
            
            int32_t rdx_2 = rcx_1
            int32_t rax_6 = int.d(zmm2[0])
            
            if (rax_6 s<= rcx_1)
                rdx_2 = rax_6
            
            if (*(arg3 + 4) != 1)
                zmm3[0] = zmm3[0] - zmm2[0]
            else
                zmm3 = zx.o(0)
            
            if (rdx_2 + 1 s<= rcx_1)
                rcx_1 = rdx_2 + 1
            
            if (rdx_2 != rcx_1)
                zmm0 = data_14399f720:4.d
                zmm2 = data_14399f720.d
                zmm1 = data_14399f720:8.d
                zmm2[0] = zmm2[0] * zmm2[0]
                zmm0[0] = zmm0[0] * zmm0[0]
                zmm1[0] = zmm1[0] * zmm1[0]
                zmm2[0] = zmm2[0] + zmm0[0]
                zmm0 = data_14399f720:0xc.d
                zmm0[0] = zmm0[0] * zmm0[0]
                zmm2[0] = zmm2[0] + zmm1[0]
                zmm2[0] = zmm2[0] + zmm0[0]
                
                if (zmm2[0] < 0f)
                    zmm0 = 0xbf800000
                else
                    zmm0 = 0x3f800000
                
                zmm5[0] = 1f - zmm3[0]
                zmm5[0] = zmm5[0] * zmm0[0]
                zmm5[0] = zmm5[0] + zmm3[0]
                zmm5[0] = zmm5[0] + zmm3[0]
                zmm5[0] = zmm5[0] + zmm3[0]
                zmm5[0] = zmm5[0] + zmm3[0]
                zmm5[0] = zmm5[0] f* data_14399f720.d
                zmm5[0] = zmm5[0] f* data_14399f720:0xc.d
                zmm5[0] = zmm5[0] f* data_14399f720:4.d
                zmm5[0] = zmm5[0] f* data_14399f720:8.d
                float temp0_11[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xe1)
                temp0_11[0] = zmm5[0]
                float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc6)
                temp0_12[0] = zmm5[0]
                float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0x27)
                temp0_13[0] = zmm5[0]
                zmm5 = data_143f39360
                float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x39)
                float temp0_15[0x4] = _mm_mul_ps(temp0_14, temp0_14)
                float temp0_17[0x4] = _mm_add_ps(temp0_15, _mm_shuffle_ps(temp0_15, temp0_15, 0x4e))
                float temp0_19[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0x39), temp0_17)
                float temp0_20[0x4] = _mm_rsqrt_ps(temp0_19)
                float temp0_21[0x4] = _mm_mul_ps(temp0_19, zmm5)
                float temp0_26[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_20, temp0_20), temp0_21)), 
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

zmm0 = data_14399f720
float var_28[0x4] = zmm0
*arg2 = zmm0
return zmm0
