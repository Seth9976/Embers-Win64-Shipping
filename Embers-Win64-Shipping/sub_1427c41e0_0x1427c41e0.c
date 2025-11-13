// 函数: sub_1427c41e0
// 地址: 0x1427c41e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
float zmm0[0x4] = *(arg1 + 0xb8)
float zmm5[0x4] = *(arg1 + 0xc8)
*(arg1 + 0x88) = arg2[0]
*(arg1 + 0x90) = arg2[0]
arg2[0] = arg2[0] f- *(arg1 + 0x8c)
void* rax_2 = *(arg1 + 0x38)
float var_48[0x4] = zmm0
zmm0 = *(arg1 + 0xd8)
arg2[0] = arg2[0] f* *(arg1 + 0x94)
arg2[0] = arg2[0] f* *(arg1 + 0x98)
arg2[0] = arg2[0] f* *(arg1 + 0x9c)
void* rcx = arg1 + 0x48
float var_28[0x4] = zmm0
float temp0[0x4] = _mm_unpacklo_ps(arg2, 0)

if (rax_2 != 0)
    rcx = rax_2

float temp0_3[0x4] = _mm_add_ps(zmm5, _mm_unpacklo_ps(_mm_unpacklo_ps(arg2, arg2[0].q), temp0[0].q))
float var_68 = temp0_3[0]
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x55)
float var_38[0x4] = temp0_3
float var_60 = _mm_shuffle_ps(temp0_3, temp0_3, 0xaa)[0]
float var_64 = temp0_4[0]
void var_58

if ((*(arg1 + 0x28))((*(*rcx + 8))(rcx, zx.o(0)), &var_68, &var_58) != 0)
    sub_1427b21d0(&var_68, &var_58, arg1 + 0xa0, arg1 + 0x94)
    float var_38_1[0x4] =
        _mm_unpacklo_ps(_mm_unpacklo_ps(var_68, var_60), _mm_unpacklo_ps(var_64, 0)[0].q)

int64_t* rcx_3

if (*(arg1 + 0x78) == 0)
    rcx_3 = nullptr
else
    rcx_3 = *(arg1 + 0x80)

(*(*rcx_3 + 0x18))(rcx_3, &var_48)
void* const rdx_3 = arg1

if (arg1 == 0x28)
    rdx_3 = nullptr

int64_t result = sub_1427c31b0(arg1 + 8, rdx_3, *(arg1 + 0x8c))
__security_check_cookie(rax_1 ^ &var_88)
return result
