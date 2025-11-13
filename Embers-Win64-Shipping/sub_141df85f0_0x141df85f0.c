// 函数: sub_141df85f0
// 地址: 0x141df85f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg3 + 0x10)
float zmm3[0x4] = 0x3f800000
int64_t rcx = sx.q((arg4 << 2).d)
int64_t rax_1 = *(r10 + 0x10)
int128_t* r9_1 = sx.q(*(rax_1 + (rcx << 2) + 8)) + *(r10 + 0x38)
int32_t rdx = *(rax_1 + (rcx << 2) + 0xc)
uint32_t zmm0[0x4]
float zmm1[0x4]
float zmm2[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (rdx == 1)
    zmm2 = *r9_1
    zmm4 = *(r9_1 + 4)
    zmm0 = zmm2
    zmm5 = *(r9_1 + 8)
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
    return zmm0

zmm4 = zx.o(0)

if (rdx s>= 2)
    zmm0 = *(arg3 + 0x1c)

uint64_t rcx_1
uint32_t zmm6[0x4]

if (rdx s< 2 || zmm0[0] f<= 0f)
    rcx_1 = 0
else
    uint64_t rdx_1 = zx.q(rdx - 1)
    
    if (zmm0[0] f< 1f)
        zmm5 = _mm_cvtepi32_ps(zx.o(rdx_1.d))
        zmm5[0] = zmm5[0] f* zmm0[0]
        zmm2 = zmm5
        int32_t rcx_2 = int.d(zmm2[0])
        
        if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2))[0] f== zmm2[0]))
            zmm2 = _mm_cvtepi32_ps(zx.o(rcx_2
                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))
        
        rcx_1 = zx.q(rdx_1.d)
        int32_t rax_4 = int.d(zmm2[0])
        
        if (rax_4 s<= rdx_1.d)
            rcx_1 = zx.q(rax_4)
        
        if (*(arg3 + 4) != 1)
            zmm5[0] = zmm5[0] - zmm2[0]
        else
            zmm5 = zx.o(0)
        
        int32_t rax_5 = (rcx_1 + 1).d
        
        if (rax_5 s<= rdx_1.d)
            rdx_1 = zx.q(rax_5)
        
        if (rcx_1.d != rdx_1.d)
            zmm2 = 0x3f800000
            int128_t* rcx_4 = sx.q((rcx_1 * 3).d << 2)
            uint32_t zmm9[0x4] = *(rcx_4 + r9_1)
            float zmm10[0x4] = *(rcx_4 + r9_1 + 4)
            uint32_t zmm11[0x4] = *(rcx_4 + r9_1 + 8)
            zmm9[0] = zmm9[0] f* zmm9[0]
            int128_t* rdx_2 = sx.q((rdx_1 * 3).d << 2)
            zmm10[0] = zmm10[0] * zmm10[0]
            zmm2[0] = 1f f- zmm9[0]
            zmm11[0] = zmm11[0] f* zmm11[0]
            float zmm13[0x4] = zx.o(0)
            zmm2[0] = zmm2[0] - zmm10[0]
            zmm2[0] = zmm2[0] f- zmm11[0]
            
            if (not(zmm2[0] <= 0f))
                zmm13 = _mm_sqrt_ss(0, zmm2[0])
            
            zmm6 = *(rdx_2 + r9_1)
            zmm2 = 0x3f800000
            float zmm7[0x4] = *(rdx_2 + r9_1 + 4)
            uint32_t zmm8[0x4] = *(rdx_2 + r9_1 + 8)
            zmm6[0] = zmm6[0] f* zmm6[0]
            float zmm12[0x4] = zx.o(0)
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm2[0] = 1f f- zmm6[0]
            zmm8[0] = zmm8[0] f* zmm8[0]
            zmm2[0] = zmm2[0] - zmm7[0]
            zmm2[0] = zmm2[0] f- zmm8[0]
            
            if (not(zmm2[0] <= 0f))
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
            zmm13[0] = zmm13[0] * zmm3[0]
            zmm6[0] = zmm7[0]
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xc6)
            zmm12[0] = zmm12[0] + zmm13[0]
            zmm6[0] = zmm8[0]
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x27)
            zmm6[0] = zmm12[0]
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x39)
            float temp0_17[0x4] = _mm_mul_ps(zmm6, zmm6)
            float temp0_19[0x4] = _mm_add_ps(temp0_17, _mm_shuffle_ps(temp0_17, temp0_17, 0x4e))
            float temp0_21[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0x39), temp0_19)
            float temp0_22[0x4] = _mm_rsqrt_ps(temp0_21)
            float temp0_23[0x4] = _mm_mul_ps(temp0_21, zmm5)
            float temp0_28[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_22, temp0_22), temp0_23)), 
                    temp0_22), 
                temp0_22)
            float temp0_31[0x4] =
                _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_28, temp0_28), temp0_23))
            zmm0 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_21, 2)
            *arg2 = _mm_and_ps(
                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_31, temp0_28), temp0_28), zmm6)
                    ^ data_143f39350, 
                zmm0) ^ data_143f39350
            return zmm0
    else
        rcx_1 = zx.q(rdx_1.d)

int64_t rcx_5 = sx.q((rcx_1 * 3).d << 2)
zmm2 = *(rcx_5 + r9_1)
zmm5 = *(rcx_5 + r9_1 + 4)
zmm0 = zmm2
zmm6 = *(rcx_5 + r9_1 + 8)
zmm0[0] = zmm0[0] f* zmm2[0]
zmm5[0] = zmm5[0] * zmm5[0]
zmm3[0] = 1f f- zmm0[0]
zmm6[0] = zmm6[0] f* zmm6[0]
zmm3[0] = zmm3[0] - zmm5[0]
zmm3[0] = zmm3[0] f- zmm6[0]

if (not(zmm3[0] <= 0f))
    zmm4 = _mm_sqrt_ss(zx.o(0)[0], zmm3[0])

float temp0_39[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
temp0_39[0] = zmm5[0]
float temp0_40[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xc6)
temp0_40[0] = zmm6[0]
float temp0_41[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0x27)
temp0_41[0] = zmm4[0]
*arg2 = _mm_shuffle_ps(temp0_41, temp0_41, 0x39)
return zmm6
