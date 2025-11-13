// 函数: sub_142bab8f0
// 地址: 0x142bab8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t result = *arg2
char rdi = *(arg1 + 0x218)
int16_t rcx = arg2[2]

if (result u>= *(arg1 + 0x84) || rcx u>= *(arg1 + 0xc4))
    if (*(arg1 + 0x315) != 0)
        *(arg1 + 0x18) = 0x86
    
    return result

int64_t rdx = *(arg1 + 0x88)
uint64_t rsi = zx.q(result) << 3
uint64_t rbp = zx.q(rcx) << 3
int64_t rax_2 = *(arg1 + 0xc8)
int32_t rcx_2 = *(rdx + rsi) - *(rax_2 + rbp)
int32_t r8_1 = *(rdx + rsi + 4) - *(rax_2 + rbp + 4)

if (rcx_2 == 0 && r8_1 == 0)
    rcx_2 = 0x4000
    rdi = 0

if ((rdi & 1) != 0)
    int32_t rax_3 = r8_1
    r8_1 = rcx_2
    rcx_2 = neg.d(rax_3)

int32_t arg_8

if (rcx_2 != 0 || r8_1 != 0)
    arg_8 = rcx_2
    sub_142b97340(&arg_8)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg_8)
    *(arg1 + 0x1c6) = ((temp1_1 + (temp0_1 & 3)) s>> 2).w
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r8_1)
    *(arg1 + 0x1c8) = ((temp3_1 + (temp2_1 & 3)) s>> 2).w

int64_t rcx_5 = *(arg1 + 0x90)
int64_t rax_12 = *(arg1 + 0xd0)
int32_t rdx_6 = *(rcx_5 + rsi) - *(rax_12 + rbp)
int32_t r8_3 = *(rcx_5 + rsi + 4) - *(rax_12 + rbp + 4)

if (rdx_6 == 0 && r8_3 == 0)
    rdx_6 = 0x4000
    rdi = 0

if ((rdi & 1) != 0)
    int32_t rax_13 = r8_3
    r8_3 = rdx_6
    rdx_6 = neg.d(rax_13)

if (rdx_6 != 0 || r8_3 != 0)
    arg_8 = rdx_6
    sub_142b97340(&arg_8)
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(arg_8)
    *(arg1 + 0x1ca) = ((temp5_1 + (temp4_1 & 3)) s>> 2).w
    int32_t temp6_1
    int32_t temp7_1
    temp6_1:temp7_1 = sx.q(r8_3)
    *(arg1 + 0x1cc) = ((temp7_1 + (temp6_1 & 3)) s>> 2).w

return sub_142ba8b80(arg1) __tailcall
