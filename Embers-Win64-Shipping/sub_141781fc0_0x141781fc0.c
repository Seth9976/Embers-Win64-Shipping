// 函数: sub_141781fc0
// 地址: 0x141781fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || *(sx.q(arg2[1].d) + *(*arg2 + 0x398)) != 4)
    return 

uint64_t rax
float zmm6_1
float zmm7_1[0x4]
rax, zmm6_1, zmm7_1 = sub_14175f160(arg2, arg6, arg7)

if (arg8 == 0 || zmm7_1[0] <= 9.99999994e-09f)
    return 

float var_18_1 = zmm6_1
zmm7_1[0]
int32_t var_48
float zmm6_2 = sub_141733ba0(&var_48, arg5, arg7, zmm7_1)
int64_t rdx_2 = sx.q(arg2[1].d) * 3
int64_t rcx_3 = *(*arg2 + 0x1b8)
float zmm2_1[0x4] = *arg6
zmm2_1[0] = zmm2_1[0] f- *arg4
float zmm0_1[0x4] = *(arg6 + 8)
zmm0_1[0] = zmm0_1[0] f- arg4[2]
float zmm1_1[0x4] = *(arg6 + 4)
zmm1_1[0] = zmm1_1[0] f- arg4[1]
zmm2_1[0] = zmm2_1[0] * zmm6_2
zmm0_1[0] = zmm0_1[0] * zmm6_2
zmm2_1[0] = zmm2_1[0] f+ *(rcx_3 + (rdx_2 << 2))
zmm1_1[0] = zmm1_1[0] * zmm6_2
zmm0_1[0] = zmm0_1[0] f+ *(rcx_3 + (rdx_2 << 2) + 8)
zmm1_1[0] = zmm1_1[0] f+ *(rcx_3 + (rdx_2 << 2) + 4)
float var_30_1 = zmm0_1[0]
zmm0_1 = zmm2_1
int32_t var_44
zmm2_1 = var_44
float temp0_1[0x4] = _mm_unpacklo_ps(zmm0_1, zmm1_1[0].q)
zmm1_1 = var_48
*(rcx_3 + (rdx_2 << 2)) = temp0_1.q
int32_t var_40
zmm0_1 = var_40
*(rcx_3 + (rdx_2 << 2) + 8) = var_30_1
int64_t rdx_3 = sx.q(arg2[1].d) * 3
int64_t rcx_4 = *(*arg2 + 0x1d0)
zmm1_1[0] = zmm1_1[0] f+ *(rcx_4 + (rdx_3 << 2))
zmm2_1[0] = zmm2_1[0] f+ *(rcx_4 + (rdx_3 << 2) + 4)
zmm0_1[0] = zmm0_1[0] f+ *(rcx_4 + (rdx_3 << 2) + 8)
float temp0_2[0x4] = _mm_unpacklo_ps(zmm1_1, zmm2_1[0].q)
rax = zx.q(zmm0_1[0])
*(rcx_4 + (rdx_3 << 2)) = temp0_2.q
*(rcx_4 + (rdx_3 << 2) + 8) = rax.d
