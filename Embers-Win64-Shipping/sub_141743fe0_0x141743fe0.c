// 函数: sub_141743fe0
// 地址: 0x141743fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x18)
uint128_t zmm6
uint128_t var_18 = zmm6
uint128_t zmm7
uint128_t var_28 = zmm7
uint128_t zmm8
uint128_t var_38 = zmm8
uint128_t zmm9
uint128_t var_48 = zmm9
void* const* result

if (r9 s<= 3)
label_14174421c:
    result.b = 0
else
    int64_t* r8_1 = *(arg1 + 0x28)
    zmm6 = zx.o(*r8_1)
    float rax = r8_1[4].d
    zmm7.d = (*(r8_1 + 0xc)).d f- zmm6.d
    uint128_t zmm2 = zx.o(*(r8_1 + 0xc))
    float zmm4 = *(r8_1 + 0x1c)
    uint128_t zmm5
    zmm5.d = r8_1[3].d f- zmm6.d
    int32_t rax_1 = *(r8_1 + 0x14)
    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    int128_t zmm11 = r8_1[1].d
    zmm8.d = rax_1.d f- zmm11.d
    int128_t zmm10 = zmm6.q:4.d
    float zmm1 = rax f- zmm11.d
    zmm2.d = zmm2.d f- zmm10.d
    zmm4 = zmm4 f- zmm10.d
    uint128_t zmm0 = zmm8
    zmm8.d = zmm8.d f* zmm5.d
    zmm9 = zmm2
    zmm2.d = zmm2.d f* zmm5.d
    zmm0.d = zmm0.d f* zmm4
    zmm9.d = zmm9.d f* zmm1
    zmm9.d = zmm9.d f- zmm0.d
    zmm0.d = zmm7.d f* zmm1
    zmm7.d = zmm7.d f* zmm4
    zmm8.d = zmm8.d f- zmm0.d
    zmm0.d = zmm9.d f* zmm9.d
    zmm7.d = zmm7.d f- zmm2.d
    uint128_t zmm3
    zmm3.d = zmm8.d f* zmm8.d
    zmm3.d = zmm3.d f+ zmm0.d
    zmm3.d = zmm3.d f+ zmm7.d f* zmm7.d
    
    if (not(zmm3.d f== 1f))
        if (zmm3.d f>= 9.99999994e-09f)
            zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
            zmm3.d = zmm3.d f* 0.5f
            zmm0.d = zmm5.d f* zmm5.d
            zmm2.d = 0.5f - zmm3.d f* zmm0.d
            zmm0.d = zmm5.d f* zmm2.d
            zmm5.d = zmm5.d f+ zmm0.d
            zmm3.d = zmm3.d f* zmm5.d f* zmm5.d
            zmm0.d = zmm5.d f* (0.5f f- zmm3.d)
            zmm5.d = zmm5.d f+ zmm0.d
            zmm9.d = zmm9.d f* zmm5.d
            zmm8.d = zmm8.d f* zmm5.d
            zmm7.d = zmm7.d f* zmm5.d
        else
            zmm9 = data_143dbb1f8
            zmm8 = data_143dbb1fc
            zmm7 = data_143dbb200
    
    zmm6.d = zmm6.d f* zmm9.d
    int32_t rcx = 3
    zmm10.d = zmm10.d f* zmm8.d
    zmm11.d = zmm11.d f* zmm7.d
    zmm6.d = zmm6.d f+ zmm10.d
    *arg2 = (_mm_unpacklo_ps(zmm9, zmm8.q)).q
    arg2[1].d = zmm7.d
    zmm6.d = zmm6.d f+ zmm11.d
    
    if (r9 s> 3)
        result = *(arg1 + 0x28) + 0x24
        
        do
            zmm2.d = zmm8.d f* *(result + 4)
            zmm0.d = zmm9.d f* *result
            zmm2.d = zmm2.d f+ zmm0.d
            zmm2.d = zmm2.d f+ zmm7.d f* result[1].d
            zmm2.d = zmm2.d f- zmm6.d
            
            if (_mm_and_ps(zmm2, 0x7fffffff).d f> 9.99999975e-05f)
                goto label_14174421c
            
            rcx += 1
            result += 0xc
        while (rcx s< r9)
    
    result.b = 1

return result
