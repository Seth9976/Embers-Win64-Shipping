// 函数: sub_1419edb90
// 地址: 0x1419edb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t result = __security_cookie ^ &var_78
int64_t result_1 = result

if (*(arg1 + 0x2d0) != 0)
    int128_t zmm1 = *(arg1 - 0x20)
    float zmm3[0x4] = *(arg1 + 0x234)
    float zmm5[0x4] = *(arg1 - 0x10)
    int64_t rax_1 = *arg2
    uint64_t r9_1 = zx.q(*(arg1 + 0x2c4))
    int128_t var_48 = *(arg1 - 0x30)
    float temp0_4[0x4] = _mm_mul_ps(zmm5, 
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, 0x3c000000), _mm_unpacklo_ps(zmm3, 0)[0].q))
    result = (*(rax_1 + 0x28))(arg2, zx.o(0), zx.q(*(arg1 + 0x2c0)), r9_1, &var_48, arg3, var_48, 
        zmm1, temp0_4, result_1)

__security_check_cookie(result_1 ^ &var_78)
return result
