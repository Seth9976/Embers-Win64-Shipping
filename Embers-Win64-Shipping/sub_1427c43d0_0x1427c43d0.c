// 函数: sub_1427c43d0
// 地址: 0x1427c43d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
uint128_t zmm2 = *(arg1 + 0x88)
*(arg1 + 0x8c) = *arg2
uint128_t zmm0 = *(arg1 + 0xd8)
*(arg1 + 0x9c) = *arg2
float zmm7[0x4] = *(arg1 + 0xa0)
zmm7[0] = zmm7[0] f- *(arg1 + 0x98)
uint128_t zmm5
zmm5.d = (*(arg1 + 0x9c)).d f- *(arg1 + 0x94)
uint128_t zmm1 = *(arg1 + 0xe8)
zmm7[0] = zmm7[0] f* zmm2.d
zmm5.d = zmm5.d f* zmm2.d
uint128_t var_68 = zmm0
zmm7[0] = zmm7[0] f* *(arg1 + 0xcc)
zmm7[0] = zmm7[0] f* *(arg1 + 0xc8)
zmm0 = *(arg1 + 0xf8)
zmm2.d = zmm5.d f* *(arg1 + 0xc0)
uint128_t zmm6 = zmm0
zmm7[0] = zmm7[0] f* *(arg1 + 0xd0)
uint128_t var_58 = zmm1
zmm1.d = zmm5.d f* *(arg1 + 0xbc)
zmm5.d = zmm5.d f* *(arg1 + 0xc4)
zmm0.d = zmm0.d f+ zmm1.d
zmm7[0] = zmm7[0] f+ zmm0.d
zmm0.d = _mm_shuffle_ps(zmm6, zmm6, 0x55).d f+ zmm2.d
zmm6.d = _mm_shuffle_ps(zmm6, zmm6, 0xaa).d f+ zmm5.d
zmm7[0] = zmm7[0] f+ zmm0.d
zmm7[0] = zmm7[0] f+ zmm6.d
float var_48[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm7, zmm7[0].q), _mm_unpacklo_ps(zmm7, 0).q)
int64_t* rcx

if (*(arg1 + 0x78) == 0)
    rcx = nullptr
else
    rcx = *(arg1 + 0x80)

(*(*rcx + 0x18))(rcx, &var_68)
void* const rdx_1 = arg1
uint128_t var_78 = *(arg1 + 0x94)

if (arg1 == 0x28)
    rdx_1 = nullptr

int64_t result = sub_1427c3270(arg1 + 8, rdx_1, &var_78)
__security_check_cookie(rax_1 ^ &var_98)
return result
