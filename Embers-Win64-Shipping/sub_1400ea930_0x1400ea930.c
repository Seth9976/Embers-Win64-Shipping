// 函数: sub_1400ea930
// 地址: 0x1400ea930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s<= 0)
    return 

float temp0_1[0x4] = _mm_broadcastss_ps(arg3)
int64_t rax
int64_t r10_1

if (arg4 == 1)
    r10_1 = 0
label_1400ea9b8:
    rax = r10_1 * 0x30
    float temp0_8[0x4] = __vmulps_xmmdq_xmmdq_memdq(temp0_1, *(arg1 + rax))
    float temp0_9[0x4] = __vmulps_xmmdq_xmmdq_memdq(temp0_1, *(arg1 + rax + 0x10))
    float temp0_10[0x4] = __vmulps_xmmdq_xmmdq_memdq(temp0_1, *(arg1 + rax + 0x20))
    *(arg2 + rax) = temp0_8
    *(arg2 + rax + 0x10) = temp0_9
    *(arg2 + rax + 0x20) = temp0_10
    return 

int32_t r8_2 = arg4 & 1
rax = 0x50
r10_1 = 0

do
    float temp0_2[0x4] = __vmulps_xmmdq_xmmdq_memdq(temp0_1, *(arg1 + rax - 0x50))
    float temp0_3[0x4] = __vmulps_xmmdq_xmmdq_memdq(temp0_1, *(arg1 + rax - 0x40))
    float temp0_4[0x4] = __vmulps_xmmdq_xmmdq_memdq(temp0_1, *(arg1 + rax - 0x30))
    *(arg2 + rax - 0x50) = temp0_2
    *(arg2 + rax - 0x40) = temp0_3
    *(arg2 + rax - 0x30) = temp0_4
    float temp0_5[0x4] = __vmulps_xmmdq_xmmdq_memdq(temp0_1, *(arg1 + rax - 0x20))
    float temp0_6[0x4] = __vmulps_xmmdq_xmmdq_memdq(temp0_1, *(arg1 + rax - 0x10))
    float temp0_7[0x4] = __vmulps_xmmdq_xmmdq_memdq(temp0_1, *(arg1 + rax))
    *(arg2 + rax - 0x20) = temp0_5
    *(arg2 + rax - 0x10) = temp0_6
    *(arg2 + rax) = temp0_7
    r10_1 += 2
    rax += 0x60
while (arg4 - r8_2 != r10_1.d)

if (r8_2 != 0)
    goto label_1400ea9b8
