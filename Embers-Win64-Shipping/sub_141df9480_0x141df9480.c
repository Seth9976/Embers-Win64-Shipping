// 函数: sub_141df9480
// 地址: 0x141df9480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg3 + 0x10)
int64_t rcx = sx.q((arg4 << 2).d)
int64_t rax_1 = *(r10 + 0x10)
int128_t* r9_1 = sx.q(*(rax_1 + (rcx << 2) + 8)) + *(r10 + 0x38)
int32_t r8 = *(rax_1 + (rcx << 2) + 0xc)
uint128_t zmm0
float zmm2[0x4]

if (r8 == 1)
    zmm2 = *r9_1
    float zmm4 = *(r9_1 + 4)
    uint128_t zmm5 = *(r9_1 + 8)
    zmm0.d = zmm2.d f* zmm2[0]
    float zmm3 = 1f f- zmm0.d
    zmm0.d = zmm5.d f* zmm5.d
    float zmm1 = (zx.o(0)).d
    zmm3 = zmm3 - zmm4 * zmm4 f- zmm0.d
    
    if (not(zmm3 <= 0f))
        zmm1 = _mm_sqrt_ss(0, zmm3)
    
    float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
    temp0_2[0] = zmm4
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
    temp0_3[0] = zmm5.d
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
    temp0_4[0] = zmm1
    *arg2 = _mm_shuffle_ps(temp0_4, temp0_4, 0x39)
    return rax_1

int128_t zmm8
int128_t var_38 = zmm8
int128_t zmm9
int128_t var_48 = zmm9

if (r8 s>= 2)
    zmm0 = *(arg3 + 0x1c)

int32_t* rax_3
int32_t var_88[0x4]

if (r8 s< 2 || zmm0.d f<= 0f)
    rax_3 = sub_141df20c0(&var_88, sx.q((0 << 2).d) + r9_1)
    *arg2 = *rax_3
else
    uint64_t r8_1 = zx.q(r8 - 1)
    
    if (zmm0.d f< 1f)
        uint128_t zmm6
        zmm6.d = _mm_cvtepi32_ps(zx.o(r8_1.d)).d f* zmm0.d
        zmm2 = zmm6
        int32_t rcx_3 = int.d(zmm2[0])
        
        if (rcx_3 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_3)).d f== zmm2[0]))
            zmm2 = _mm_cvtepi32_ps(zx.o(rcx_3
                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))
        
        uint64_t rcx_1 = zx.q(r8_1.d)
        int32_t rax_6 = int.d(zmm2.d)
        
        if (rax_6 s<= r8_1.d)
            rcx_1 = zx.q(rax_6)
        
        if (*(arg3 + 4) != 1)
            zmm6.d = zmm6.d f- zmm2[0]
        
        int32_t rax_7 = (rcx_1 + 1).d
        
        if (rax_7 s<= r8_1.d)
            r8_1 = zx.q(rax_7)
        
        if (rcx_1.d == r8_1.d)
            rax_3 = sub_141df20c0(&var_88, sx.q((rcx_1 << 2).d) + r9_1)
            *arg2 = *rax_3
        else
            float zmm7[0x4] = *sub_141df20c0(&var_88, sx.q((rcx_1 << 2).d) + r9_1)
            int32_t zmm6_1
            rax_3, zmm6_1 = sub_141df20c0(&var_88, sx.q((r8_1 << 2).d) + r9_1)
            float temp0_11[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            uint32_t zmm0_2[0x4] = temp0_11
            float zmm2_1[0x4] = *rax_3
            zmm7[0] = zmm7[0] * zmm2_1[0]
            float temp0_12[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm0_2[0] = zmm0_2[0] f* temp0_12[0]
            float temp0_13[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
            float temp0_14[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            zmm7[0] = zmm7[0] f+ zmm0_2[0]
            float temp0_15[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xff)
            zmm0_2 = temp0_13
            float temp0_16[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
            zmm0_2[0] = zmm0_2[0] f* temp0_14[0]
            zmm7[0] = zmm7[0] f+ zmm0_2[0]
            zmm0_2 = temp0_15
            zmm0_2[0] = zmm0_2[0] f* temp0_16[0]
            zmm7[0] = zmm7[0] f+ zmm0_2[0]
            
            if (zmm7[0] < 0f)
                zmm0_2 = 0xbf800000
            else
                zmm0_2 = 0x3f800000
            
            zmm2_1[0] = zmm2_1[0] f* zmm6_1
            zmm9.d = 1f f- zmm6_1
            temp0_12[0] = temp0_12[0] f* zmm6_1
            temp0_14[0] = temp0_14[0] f* zmm6_1
            zmm9.d = zmm9.d f* zmm0_2[0]
            zmm7[0] = zmm7[0] f* zmm9.d
            temp0_15[0] = temp0_15[0] f* zmm9.d
            zmm7[0] = zmm7[0] + zmm2_1[0]
            temp0_13[0] = temp0_13[0] f* zmm9.d
            temp0_11[0] = temp0_11[0] f* zmm9.d
            temp0_13[0] = temp0_13[0] + temp0_14[0]
            temp0_16[0] = temp0_16[0] f* zmm6_1
            temp0_11[0] = temp0_11[0] + temp0_12[0]
            temp0_15[0] = temp0_15[0] + temp0_16[0]
            float temp0_17[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
            temp0_17[0] = temp0_11[0]
            float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc6)
            temp0_18[0] = temp0_13[0]
            float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0x27)
            temp0_19[0] = temp0_15[0]
            float zmm5_1[0x4] = data_143f39360
            float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0x39)
            float temp0_21[0x4] = _mm_mul_ps(temp0_20, temp0_20)
            float temp0_23[0x4] = _mm_add_ps(temp0_21, _mm_shuffle_ps(temp0_21, temp0_21, 0x4e))
            float temp0_25[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0x39), temp0_23)
            float temp0_26[0x4] = _mm_rsqrt_ps(temp0_25)
            float temp0_27[0x4] = _mm_mul_ps(temp0_25, zmm5_1)
            float temp0_32[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_26, temp0_26), temp0_27)), 
                    temp0_26), 
                temp0_26)
            float temp0_35[0x4] =
                _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_32, temp0_32), temp0_27))
            zmm0_2 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_25, 2)
            *arg2 = _mm_and_ps(
                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_35, temp0_32), temp0_32), temp0_20)
                    ^ data_143f39350, 
                zmm0_2) ^ data_143f39350
    else
        rax_3 = sub_141df20c0(&var_88, sx.q(r8_1.d << 2) + r9_1)
        *arg2 = *rax_3
return rax_3
