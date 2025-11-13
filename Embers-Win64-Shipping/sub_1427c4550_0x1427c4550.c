// 函数: sub_1427c4550
// 地址: 0x1427c4550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
float zmm4[0x4] = *(arg1 + 0xe8)
*(arg1 + 0x88) = *arg2
*(arg1 + 0x98) = *arg2
uint128_t zmm1 = *(arg1 + 0x98)
float zmm5[0x4] = *(arg1 + 0x9c)
zmm5[0] = zmm5[0] f- *(arg1 + 0x94)
zmm1.d = zmm1.d f- *(arg1 + 0x90)
void* rax_2 = *(arg1 + 0x38)
zmm5[0] = zmm5[0] f* *(arg1 + 0xc4)
uint128_t zmm0
zmm0.d = zmm1.d f* *(arg1 + 0xb8)
zmm5[0] = zmm5[0] f* *(arg1 + 0xc8)
zmm5[0] = zmm5[0] f* *(arg1 + 0xcc)
zmm5[0] = zmm5[0] f+ zmm0.d
zmm0 = zmm1
zmm1.d = zmm1.d f* *(arg1 + 0xc0)
zmm0.d = zmm0.d f* *(arg1 + 0xbc)
zmm5[0] = zmm5[0] f+ zmm1.d
zmm5[0] = zmm5[0] f+ zmm0.d
zmm0 = *(arg1 + 0xd8)
float temp0[0x4] = _mm_unpacklo_ps(zmm5, zmm5[0].q)
uint128_t var_48 = zmm0
void* rcx = arg1 + 0x48
uint128_t var_28 = *(arg1 + 0xf8)
float temp0_2[0x4] = _mm_unpacklo_ps(temp0, _mm_unpacklo_ps(zmm5, 0)[0].q)

if (rax_2 != 0)
    rcx = rax_2

float temp0_3[0x4] = _mm_add_ps(zmm4, temp0_2)
float var_68 = temp0_3[0]
zmm0 = _mm_shuffle_ps(temp0_3, temp0_3, 0x55)
float var_38[0x4] = temp0_3
float var_60 = _mm_shuffle_ps(temp0_3, temp0_3, 0xaa)[0]
int32_t var_64 = zmm0.d
void var_58

if ((*(arg1 + 0x28))((*(*rcx + 8))(rcx, zx.o(0)), &var_68, &var_58) != 0)
    sub_1427b2260(&var_68, &var_58, arg1 + 0xa0, arg1 + 0xac)
    float var_38_1[0x4] =
        _mm_unpacklo_ps(_mm_unpacklo_ps(var_68, var_60.q), _mm_unpacklo_ps(var_64, 0)[0].q)

int64_t* rcx_3

if (*(arg1 + 0x78) == 0)
    rcx_3 = nullptr
else
    rcx_3 = *(arg1 + 0x80)

(*(*rcx_3 + 0x18))(rcx_3, &var_48)
void* const rdx_3 = arg1
var_68.o = *(arg1 + 0x90)

if (arg1 == 0x28)
    rdx_3 = nullptr

int64_t result = sub_1427c3270(arg1 + 8, rdx_3, &var_68)
__security_check_cookie(rax_1 ^ &var_88)
return result
