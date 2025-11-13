// 函数: sub_1427c4100
// 地址: 0x1427c4100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
float zmm0[0x4] = *(arg1 + 0x68)
*(arg1 + 0x44) = arg2[0]
float zmm4[0x4] = arg2
*(arg1 + 0x4c) = arg2[0]
zmm4[0] = zmm4[0] f- *(arg1 + 0x48)
arg2 = *(arg1 + 0x78)
float var_48[0x4] = zmm0
zmm0 = *(arg1 + 0x88)
zmm4[0] = zmm4[0] f* *(arg1 + 0x40)
float var_38[0x4] = arg2
float temp0[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
zmm4[0] = zmm4[0] f* *(arg1 + 0x50)
zmm4[0] = zmm4[0] f* *(arg1 + 0x54)
zmm4[0] = zmm4[0] + zmm0[0]
zmm4[0] = zmm4[0] f* *(arg1 + 0x58)
zmm4[0] = zmm4[0] + temp0[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
zmm4[0] = zmm4[0] + temp0_1[0]
float temp0_2[0x4] = _mm_unpacklo_ps(zmm4, 0)
float var_28[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, zmm4[0].q), temp0_2[0].q)
int64_t* rcx

if (*(arg1 + 0x30) == 0)
    rcx = nullptr
else
    rcx = *(arg1 + 0x38)

(*(*rcx + 0x18))(rcx, &var_48)
void* const rdx_1 = arg1

if (arg1 == 0x28)
    rdx_1 = nullptr

int64_t result = sub_1427c31b0(arg1 + 8, rdx_1, *(arg1 + 0x48))
__security_check_cookie(rax_1 ^ &var_68)
return result
