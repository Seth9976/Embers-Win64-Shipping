// 函数: sub_1419ecff0
// 地址: 0x1419ecff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t var_18 = __security_cookie ^ &var_68
void* rdx = *(arg1 + 0x4a8)

if (rdx != 0)
    int64_t r9_1 = *(rdx + 0x30)
    
    if (r9_1 != 0)
        float zmm5[0x4] = *(arg1 + 0x1e0)
        int64_t rax_1 = *arg2
        int128_t var_38_1 = *(arg1 + 0x1d0)
        uint128_t var_48 = *(arg1 + 0x1c0)
        float var_28_1[0x4] = zmm5
        int64_t rdx_1
        uint128_t zmm0
        uint128_t zmm2
        uint128_t zmm3
        
        if (*(rdx + 0x38) == 0)
            zmm3 = *(arg1 + 0x424)
            rdx_1 = r9_1
            zmm0 = 0x3c000000
            zmm2 = _mm_unpacklo_ps(zmm3, 0)
            float var_28_3[0x4] =
                _mm_mul_ps(zmm5, _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, 0x3c000000), zmm2.q))
        else
            zmm0 = zx.o(*(arg1 + 0x428))
            zmm3 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x420)))
            zmm0 = _mm_cvtepi32_ps(zmm0)
            zmm3.d = zmm3.d f* *(arg1 + 0x424)
            zmm3.d = zmm3.d f/ zmm0.d
            zmm0 = 0x3c000000
            zmm2 = zmm3
            zmm3 = _mm_unpacklo_ps(zmm3, 0x3c000000)
            zmm2 = _mm_unpacklo_ps(zmm2, 0)
            zmm3 = _mm_unpacklo_ps(zmm3, zmm2.q)
            float var_28_2[0x4] = _mm_mul_ps(zmm5, zmm3)
            rdx_1 = *(rdx + 0x38)
        
        (*(rax_1 + 0x20))(zmm0, rdx_1, zmm2, zmm3)

int64_t result
result.b = 0
__security_check_cookie(var_18 ^ &var_68)
return result
