// 函数: sub_141ef3b00
// 地址: 0x141ef3b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*arg1 + 0x5a0))() != arg3)
    *(arg1 + 0x1f2) |= 1
    return 1

float zmm7[0x4] = *(arg1[0x16] + 0x1d0)
float temp0[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
temp0_1[0] = temp0_1[0] f- arg2[2]
zmm7[0] = zmm7[0] f- *arg2
temp0[0] = temp0[0] f- arg2[1]
float var_50 = temp0_1[0]
float var_58 = zmm7[0]
float var_54 = temp0[0]
int64_t* rax_4 = sub_1424b0d70()
int64_t* rcx = rax_4[0x23]

if (rcx == 0)
    int64_t rdx_1 = *rax_4
    (*(rdx_1 + 0x390))(rax_4, rdx_1)
    rcx = rax_4[0x23]

float var_40 = var_50
int64_t rax_6 = *rcx
int64_t var_48 = var_58.q

if ((*(rax_6 + 0x648))(rcx, &var_48) == 0)
    return false

char rcx_2 = *(arg1 + 0x1f2)
int64_t zmm0 = *(arg1 + 0x2e4)
temp0[0] = temp0[0] * temp0[0]
zmm7[0] = zmm7[0] * zmm7[0]
temp0_1[0] = temp0_1[0] * temp0_1[0]
temp0[0] = temp0[0] + zmm7[0]
zmm0.d = zmm0.d f* zmm0.d
temp0[0] = temp0[0] + temp0_1[0]
*(arg1 + 0x1f2) = (((temp0[0] f> zmm0.d | rcx_2) ^ rcx_2) & 1) ^ rcx_2
return true
