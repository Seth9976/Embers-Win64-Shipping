// 函数: sub_1427c4710
// 地址: 0x1427c4710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
float zmm4[0x4] = *(arg1 + 0xb8)
*(arg1 + 0x44) = *arg2
uint128_t zmm0 = *(arg1 + 0x98)
*(arg1 + 0x54) = *arg2
uint128_t zmm1 = *(arg1 + 0xa8)
float temp0[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
uint128_t var_38 = zmm1
zmm1.d = (*(arg1 + 0x58)).d f- *(arg1 + 0x50)
uint128_t var_48 = zmm0
zmm0.d = (*(arg1 + 0x54)).d f- *(arg1 + 0x4c)
float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
zmm1.d = zmm1.d f+ zmm0.d
zmm1.d = zmm1.d f* *(arg1 + 0x40)
zmm1.d = zmm1.d f+ 1f
zmm4[0] = zmm4[0] f* zmm1.d
temp0[0] = temp0[0] f* zmm1.d
temp0_1[0] = temp0_1[0] f* zmm1.d
float temp0_2[0x4] = _mm_unpacklo_ps(temp0, 0)
float var_28[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, temp0_1[0].q), temp0_2[0].q)
int64_t* rcx

if (*(arg1 + 0x30) == 0)
    rcx = nullptr
else
    rcx = *(arg1 + 0x38)

(*(*rcx + 0x18))(rcx, &var_48)
void* const rdx_1 = arg1
uint128_t var_58 = *(arg1 + 0x4c)

if (arg1 == 0x28)
    rdx_1 = nullptr

int64_t result = sub_1427c3270(arg1 + 8, rdx_1, &var_58)
__security_check_cookie(rax_1 ^ &var_78)
return result
