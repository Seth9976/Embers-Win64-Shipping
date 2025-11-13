// 函数: sub_14235b050
// 地址: 0x14235b050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x50)
int32_t zmm5 = (zx.o(0)).d
uint128_t zmm6 = zx.o(0)
uint128_t zmm10 = zx.o(0)
uint128_t var_78_1
__builtin_memset(&var_78_1, 0, 0x1c)
int32_t var_68
int32_t rdx
uint128_t zmm1

if (result == 0)
    rdx = 0
else
    zmm1 = zx.o(*(result + 0x50))
    zmm10 = *(result + 0x40)
    rdx = *(result + 0x58)
    var_68.q = zmm1.q
    zmm5 = var_68
    zmm6 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_78_1 = zmm10

zmm1 = *(arg1 + 0xe4)

if (zmm1.d f!= 0f || 0f f!= *(arg1 + 0xe8) || 0f f!= *(arg1 + 0xec) || 0f f!= *(arg1 + 0xd8)
        || 0f f!= *(arg1 + 0xdc) || not(0f f== *(arg1 + 0xe0)))
    uint128_t zmm7 = var_78_1:8.d
    uint128_t zmm8 = var_78_1.d
    float zmm4 = zmm8.d
    zmm8.d = zmm8.d f+ var_78_1:0xc.d
    uint128_t zmm9 = var_78_1:4.d
    float zmm3 = zmm9.d
    zmm9.d = zmm9.d f+ zmm5
    zmm8.d = zmm8.d f+ *(arg1 + 0xd8)
    zmm4 = zmm4 f- var_78_1:0xc.d f- zmm1.d
    zmm1 = zmm7
    zmm9.d = zmm9.d f+ *(arg1 + 0xdc)
    zmm3 = zmm3 f- zmm5 f- *(arg1 + 0xe8)
    zmm7.d = zmm7.d f+ zmm6.d
    zmm1.d = zmm1.d f- zmm6.d
    uint128_t zmm0
    zmm0.d = zmm8.d f+ zmm4
    zmm5 = zmm9.d
    zmm8.d = zmm8.d f- zmm4
    zmm9.d = zmm9.d f- zmm3
    zmm7.d = zmm7.d f+ *(arg1 + 0xe0)
    zmm1.d = zmm1.d f- *(arg1 + 0xec)
    zmm0.d = zmm0.d f* 0.5f
    zmm5 = zmm5 f+ zmm3
    zmm3 = zmm8.d
    zmm8.d = zmm8.d f* zmm8.d
    zmm6 = zmm7
    zmm7.d = zmm7.d f- zmm1.d
    zmm6.d = zmm6.d f+ zmm1.d
    zmm1 = zmm9
    _mm_shuffle_ps(zmm0, zmm0, 0xe1)
    zmm9.d = zmm9.d f* zmm9.d
    zmm10.d = zmm5 f* 0.5f
    _mm_shuffle_ps(zmm10, zmm10, 0xc6)
    zmm0.d = zmm7.d f* 0.5f
    zmm9.d = zmm9.d f+ zmm8.d
    zmm7.d = zmm7.d f* zmm7.d
    int32_t var_64_1 = zmm0.d
    zmm6.d = zmm6.d f* 0.5f
    zmm9.d = zmm9.d f+ zmm7.d
    zmm1.d = zmm1.d f* 0.5f
    zmm10.d = zmm6.d
    _mm_shuffle_ps(zmm10, zmm10, 0x27)
    zmm10.d = zmm3 * 0.5f
    var_68 = zmm1.d
    zmm9.d = zmm9.d f* 0.25f
    zmm10 = _mm_shuffle_ps(zmm10, zmm10, 0x39)
    rdx = _mm_sqrt_ss(0, zmm9.d).d

*(arg1 + 0xf0) = zmm10
*(arg1 + 0x100) = var_68.q
*(arg1 + 0x108) = rdx
return result
