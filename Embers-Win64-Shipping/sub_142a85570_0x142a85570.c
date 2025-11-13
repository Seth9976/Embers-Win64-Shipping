// 函数: sub_142a85570
// 地址: 0x142a85570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2

if (*arg3 s> 0)
    return 

int32_t rcx = *(arg1 + 0x70)

if (arg2 s<= rcx)
    return 

int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(rcx)
int32_t rcx_1 = rcx + ((temp1_1 - temp0_1) s>> 1)

if (rdi s< rcx_1)
    rdi = rcx_1

int64_t rcx_2 = *(arg1 + 0x68)

if (rcx_2 != arg1 + 0x48)
    sub_142a7dcd0(rcx_2)

int64_t rax = sub_142a7dd00(sx.q(rdi))
*(arg1 + 0x68) = rax

if (rax != 0)
    *(arg1 + 0x70) = rdi
    return 

*(arg1 + 0x68) = arg1 + 0x48
*(arg1 + 0x70) = 0x20
*arg3 = 7
