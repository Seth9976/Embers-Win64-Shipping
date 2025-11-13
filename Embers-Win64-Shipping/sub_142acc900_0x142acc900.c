// 函数: sub_142acc900
// 地址: 0x142acc900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_1

if (arg1 - 1 s< 0)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg1)
    rbx_1 = (((temp0_1 & 3) + temp1_1) s>> 2) - 1
else
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(arg1 - 1)
    rbx_1 = ((temp2_1 & 3) + temp3_1) s>> 2

int32_t r8_2

if (arg1 - 1 s< 0)
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = muls.dp.d(0x51eb851f, arg1)
    int32_t rdx_6 = temp4_1 s>> 7
    r8_2 = (rdx_6 u>> 0x1f) - 1 + rdx_6
else
    r8_2 = (arg1 - 1) s/ 0x190

int32_t r11_2

if (arg1 - 1 s< 0)
    int32_t temp8_1
    int32_t temp9_1
    temp8_1:temp9_1 = muls.dp.d(0x51eb851f, arg1)
    int32_t rdx_9 = temp8_1 s>> 5
    r11_2 = (rdx_9 u>> 0x1f) - 1 + rdx_9
else
    r11_2 = (arg1 - 1) s/ 0x64

int32_t rdx_11
int32_t rdx_15

if ((arg1.b & 3) == 0)
    int32_t temp12_1
    int32_t temp13_1
    temp12_1:temp13_1 = muls.dp.d(0x51eb851f, arg1)
    rdx_11 = temp12_1 s>> 5
    
    if (arg1 == arg1 s/ 0x64 * 0x64)
        int32_t temp15_1
        int32_t temp16_1
        temp15_1:temp16_1 = muls.dp.d(0x51eb851f, arg1)
        rdx_15 = temp15_1 s>> 7

int32_t rax_10

if ((arg1.b & 3) != 0 || (arg1 == (rdx_11 + (rdx_11 u>> 0x1f)) * 0x64
        && arg1 != (rdx_15 + (rdx_15 u>> 0x1f)) * 0x190))
    rax_10 = 0
else
    rax_10.b = 1

char temp14 = rax_10.b
rax_10.b = neg.b(rax_10.b)
int32_t rax_19 = arg3 + 0x1a4451
    + sx.d(*(&data_1436565a0 + (sx.q((sbb.d(rax_10, rax_10, temp14 != 0) & 0xc) + arg2) << 1)))
    + (arg1 - 1) * 0x16d - r11_2 + r8_2 + rbx_1
return _mm_cvtepi32_pd(zx.q(rax_19)).q f- 2440588.0
