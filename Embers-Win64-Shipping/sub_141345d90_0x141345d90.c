// 函数: sub_141345d90
// 地址: 0x141345d90
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
arg1[9] = rcx_1.b
int32_t rcx_5 = rax_8 & 0x80000001

if (rcx_5 s< 0)
    rcx_5 = ((rcx_5 - 1) | 0xfffffffe) + 1

int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(rax_8)
rcx_5.b = rcx_5 == 1
int32_t rax_11 = (temp5 - temp4) s>> 1
arg1[0xa] = rcx_5.b
int32_t rcx_9 = rax_11 & 0x80000001

if (rcx_9 s< 0)
    rcx_9 = ((rcx_9 - 1) | 0xfffffffe) + 1

int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(rax_11)
rcx_9.b = rcx_9 == 1
int32_t rax_14 = (temp7 - temp6) s>> 1
arg1[0xb] = rcx_9.b
int32_t rcx_13 = rax_14 & 0x80000001

if (rcx_13 s< 0)
    rcx_13 = ((rcx_13 - 1) | 0xfffffffe) + 1

int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(rax_14)
rcx_13.b = rcx_13 == 1
arg1[0xc] = rcx_13.b
int32_t rax_18 = (temp9 - temp8) s>> 1 & 0x80000001

if (rax_18 s< 0)
    rax_18 = ((rax_18 - 1) | 0xfffffffe) + 1

rax_18.b = rax_18 == 1
arg1[0xd] = rax_18.b
return arg1
