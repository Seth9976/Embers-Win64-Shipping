// 函数: sub_1427c2d00
// 地址: 0x1427c2d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
float zmm1[0x4] = *(arg1 + 0x8c)
int64_t* rdi = nullptr
uint128_t zmm2 = *(arg1 + 0x90)
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
temp0[0] = zmm2.d
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0x39)
temp0_1[0] = zmm1[0]
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xe1)
temp0_2[0] = zmm2.d
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xe1)
*(arg1 + 0x94) = temp0_3
float var_58[0x4] = temp0_3
int64_t* rcx

if (*(arg1 + 0x78) == 0)
    rcx = nullptr
else
    rcx = *(arg1 + 0x80)

void var_48
int128_t* rax_3 = (*(*rcx + 0x10))(rcx, &var_48)
*(arg1 + 0xd8) = *rax_3
*(arg1 + 0xe8) = rax_3[1]
*(arg1 + 0xf8) = rax_3[2]
int64_t* rcx_1

if (*(arg1 + 0x68) == 0)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0x70)

int64_t* rax_5 = (*(*rcx_1 + 0x10))(rcx_1, &var_58)
*(arg1 + 0xa4) = *rax_5
*(arg1 + 0xac) = rax_5[1].d

if (*(arg1 + 0x68) != 0)
    rdi = *(arg1 + 0x70)

int64_t result = sub_1427a72f0(rdi, arg1 + 0xb0, arg1 + 0xbc, arg1 + 0xc8)
__security_check_cookie(rax_1 ^ &var_78)
return result
