// 函数: sub_142b39360
// 地址: 0x142b39360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10_3 = *arg1

if (arg2 s>= r10_3)
    *(arg1 + 9) = 0
    *arg1 = 1
    return arg1

uint32_t rcx_1 = r10_3 - arg2
uint32_t r8

if (rcx_1 s> 0x31)
    r8 = rcx_1
else
    r8 = zx.d(*(sx.q(rcx_1) + &data_14366c490))

void* r8_2 = &arg1[2] + sx.q(r8)

if (rcx_1 s<= 0x31)
    rcx_1 = zx.d(*(sx.q(rcx_1) + &data_14366c490))

if (r10_3 - rcx_1 - arg2 != 0)
    *r8_2 =
        (modu.dp.d(0:(zx.d(*r8_2)), *((sx.q(r10_3 - rcx_1 - arg2 + 1) << 2) + &data_14366c468))).b

int32_t r8_4 = r8_2.d - arg1.d - 8
void* rcx_4 = sx.q(r8_4 - 1) + arg1 + 9

if (rcx_4 u>= arg1 + 9)
    while (*rcx_4 == 0)
        if (r8_4 == 1)
            break
        
        r8_4 -= 1
        rcx_4 -= 1
        
        if (rcx_4 u< arg1 + 9)
            break

*arg1 = r8_4
return arg1
