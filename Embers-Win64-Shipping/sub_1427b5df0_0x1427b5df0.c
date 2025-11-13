// 函数: sub_1427b5df0
// 地址: 0x1427b5df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
float zmm2[0x4] = arg2[2]
float var_60 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
void* rax_3 = *(arg1 + 0x88)
void* rcx = arg1 + 0x98
float temp0_2[0x4] = _mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)

if (rax_3 != 0)
    rcx = rax_3

int64_t var_68 = temp0_2.q
(*(arg1 + 0x78))((*(*rcx + 8))(rcx), &var_68)
float zmm1[0x4] = arg2[1]
float zmm3[0x4] = data_14399f668
float var_48[0x4] = *arg2
float var_38[0x4] = zmm1
float var_28[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, data_14399f670[0].q), 
    _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
int64_t* rcx_2

if (*(arg1 + 0x20) == 0)
    rcx_2 = nullptr
else
    rcx_2 = *(arg1 + 0x28)

(*(*rcx_2 + 0x18))(rcx_2, &var_48)
void* const rdx_2 = arg1

if (arg1 == 0x28)
    rdx_2 = nullptr

int64_t result = sub_140920c10(arg1 + 8, rdx_2)
__security_check_cookie(rax_1 ^ &var_88)
return result
