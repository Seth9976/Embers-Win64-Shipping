// 函数: sub_142bac650
// 地址: 0x142bac650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r11 = *(arg1 + 0x218)

if (arg2 u>= *(arg1 + 0xc4) || arg3 u>= *(arg1 + 0x84))
    if (*(arg1 + 0x315) != 0)
        *(arg1 + 0x18) = 0x86
    
    int64_t rax
    rax.b = 1
    return rax

uint64_t rdx = zx.q(arg2)
int32_t* r10 = *(arg1 + 0x90) + (zx.q(arg3) << 3)
uint64_t rax_2 = *(arg1 + 0xd0)
int32_t rcx_1 = *r10 - *(rax_2 + (rdx << 3))
int32_t r8_2 = r10[1] - *(rax_2 + (rdx << 3) + 4)

if (rcx_1 == 0 && r8_2 == 0)
    rcx_1 = 0x4000
    r11 = 0

if ((r11 & 1) != 0)
    rax_2 = zx.q(r8_2)
    r8_2 = rcx_1
    rcx_1 = neg.d(rax_2.d)

if (rcx_1 != 0 || r8_2 != 0)
    int32_t arg_8 = rcx_1
    sub_142b97340(&arg_8)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg_8)
    *arg4 = ((temp1_1 + (temp0_1 & 3)) s>> 2).w
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r8_2)
    arg4[1] = ((temp3_1 + (temp2_1 & 3)) s>> 2).w

rax_2.b = 0
return rax_2
