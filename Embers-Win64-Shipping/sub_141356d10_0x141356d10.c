// 函数: sub_141356d10
// 地址: 0x141356d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2 & 0x80000001

if (rax s< 0)
    rax = ((rax - 1) | 0xfffffffe) + 1

rax.b = rax == 1
*arg1 = rax.b
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2)
int32_t rax_6 = (temp1 - temp0) s>> 1
int32_t rcx_1 = rax_6 & 0x80000001

if (rcx_1 s< 0)
    rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rax_6)
rcx_1.b = rcx_1 == 1
int32_t rax_9 = (temp3 - temp2) s>> 1
arg1[1] = rcx_1.b
int32_t rcx_5 = rax_9 & 0x80000001

if (rcx_5 s< 0)
    rcx_5 = ((rcx_5 - 1) | 0xfffffffe) + 1

int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(rax_9)
rcx_5.b = rcx_5 == 1
int32_t rax_12 = (temp5 - temp4) s>> 1
arg1[2] = rcx_5.b
int32_t rcx_9 = rax_12 & 0x80000001

if (rcx_9 s< 0)
    rcx_9 = ((rcx_9 - 1) | 0xfffffffe) + 1

int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(rax_12)
rcx_9.b = rcx_9 == 1
int32_t rax_15 = (temp7 - temp6) s>> 1
arg1[3] = rcx_9.b
int32_t rcx_13 = rax_15 & 0x80000001

if (rcx_13 s< 0)
    rcx_13 = ((rcx_13 - 1) | 0xfffffffe) + 1

int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(rax_15)
rcx_13.b = rcx_13 == 1
int32_t rax_18 = (temp9 - temp8) s>> 1
arg1[4] = rcx_13.b
int32_t rcx_17 = rax_18 & 0x80000001

if (rcx_17 s< 0)
    rcx_17 = ((rcx_17 - 1) | 0xfffffffe) + 1

int32_t temp10
int32_t temp11
temp10:temp11 = sx.q(rax_18)
rcx_17.b = rcx_17 == 1
int32_t rax_21 = (temp11 - temp10) s>> 1
arg1[5] = rcx_17.b
int32_t rcx_21 = rax_21 & 0x80000001

if (rcx_21 s< 0)
    rcx_21 = ((rcx_21 - 1) | 0xfffffffe) + 1

int32_t temp12
int32_t temp13
temp12:temp13 = sx.q(rax_21)
rcx_21.b = rcx_21 == 1
arg1[6] = rcx_21.b
int32_t rax_25 = (temp13 - temp12) s>> 1 & 0x80000001

if (rax_25 s< 0)
    rax_25 = ((rax_25 - 1) | 0xfffffffe) + 1

rax_25.b = rax_25 == 1
arg1[7] = rax_25.b
return arg1
