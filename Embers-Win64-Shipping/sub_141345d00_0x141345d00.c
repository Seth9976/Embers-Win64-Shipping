// 函数: sub_141345d00
// 地址: 0x141345d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char temp0
int32_t temp1
temp0:temp1 = sx.q(arg2)
uint32_t rdx_1 = zx.d(temp0)
int32_t rax_2 = temp1 + rdx_1
int32_t r10_1 = rax_2 s>> 8
sub_141356d10(arg1, zx.d(rax_2.b) - rdx_1)
int32_t rcx_1 = r10_1 & 0x80000001

if (rcx_1 s< 0)
    rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(r10_1)
rcx_1.b = rcx_1 == 1
int32_t rax_8 = (temp3 - temp2) s>> 1
arg1[0xc] = rcx_1.b
int32_t rcx_5 = rax_8 & 0x80000001

if (rcx_5 s< 0)
    rcx_5 = ((rcx_5 - 1) | 0xfffffffe) + 1

int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(rax_8)
rcx_5.b = rcx_5 == 1
arg1[0x10] = rcx_5.b
*(arg1 + 0x14) = ((temp5 - temp4) s>> 1) s% 0xa
return arg1
