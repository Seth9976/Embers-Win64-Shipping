// 函数: sub_142acc6b0
// 地址: 0x142acc6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm10
zmm10.q = arg1.q f+ 719162.0
arg1.q = zmm10.q f/ 146097.0
uint128_t zmm0 = sub_142a4b9b0(arg1.q)
uint128_t zmm9 = zmm0
int32_t rax = int.d(zmm10.q - zmm0.q * 146097.0)
*arg6 = rax
uint128_t zmm7 = _mm_cvtepi32_pd(zx.q(rax))
zmm0.q = zmm7.q f/ 36524.0
double zmm0_1 = sub_142a4b9b0(zmm0.q)
int32_t rbx = int.d(zmm0_1)
zmm7.q = zmm7.q f- zmm0_1 * 36524.0
int32_t rax_1 = int.d(zmm7.q)
*arg6 = rax_1
zmm7 = _mm_cvtepi32_pd(zx.q(rax_1))
uint128_t zmm0_2 = sub_142a4b9b0(zmm7.q / 1461.0)
uint128_t zmm8 = zmm0_2
zmm7.q = zmm7.q f- zmm0_2.q * 1461.0
int32_t rax_2 = int.d(zmm7.q)
*arg6 = rax_2
zmm7 = _mm_cvtepi32_pd(zx.q(rax_2))
zmm0_2.q = zmm7.q f/ 365.0
double zmm0_3 = sub_142a4b9b0(zmm0_2.q)
int32_t r8 = int.d(zmm0_3)
zmm7.q = zmm7.q f- zmm0_3 * 365.0
*arg6 = int.d(zmm7.q)
int32_t rax_6 = r8 + (((rbx + (int.d(zmm9.q) << 2)) * 0x19 + int.d(zmm8.q)) << 2)
*arg2 = rax_6

if (rbx == 4 || r8 == 4)
    *arg6 = 0x16d
else
    *arg2 = rax_6 + 1

int32_t r8_1 = *arg2
int32_t rdx_3
int32_t rdx_7

if ((r8_1.b & 3) == 0)
    int32_t temp0_3
    int32_t temp1_1
    temp0_3:temp1_1 = muls.dp.d(0x51eb851f, r8_1)
    rdx_3 = temp0_3 s>> 5
    
    if (r8_1 == r8_1 s/ 0x64 * 0x64)
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = muls.dp.d(0x51eb851f, r8_1)
        rdx_7 = temp2_1 s>> 7

if ((r8_1.b & 3) != 0 ||
        (r8_1 == (rdx_3 + (rdx_3 u>> 0x1f)) * 0x64 && r8_1 != (rdx_7 + (rdx_7 u>> 0x1f)) * 0x190))
    rbx.b = 0
else
    rbx.b = 1

zmm10.q = zmm10.q f+ 1.0
int32_t rcx_3 = int.d(sub_142a4b9c0(zmm10.q, 7.0))
*arg5 = rcx_3 + 1 + (rcx_3 s>> 0x1f & 7)
int32_t rcx_6 = 0
int32_t rdx_9 = *arg6
int32_t rax_16
rax_16.b = rbx.b != 0

if (rdx_9 s>= rax_16 + 0x3b)
    rcx_6 = sbb.d(0, 0, rbx.b != 0) + 2

int32_t temp4
int32_t temp5
temp4:temp5 = muls.dp.d(0x59493e15, ((zx.q((rdx_9 + rcx_6) * 3) << 2) + 6).d)
uint32_t rax_21 = temp4 s>> 7 u>> 0x1f
int32_t rdx_12 = ((zx.q((rdx_9 + rcx_6) * 3) << 2) + 6).d s/ 0x16f
*arg3 = rdx_12
int32_t result = *arg6
    - sx.d(*(&data_1436565a0 + (sx.q((sbb.d(rax_21, rax_21, rbx.b != 0) & 0xc) + rdx_12) << 1)))
    + 1
*arg4 = result
*arg6 += 1
return result
