// 函数: sub_1412181f0
// 地址: 0x1412181f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdx_1 = zx.q(arg2 s/ 3)
*arg1 = arg2 - (rdx_1 * 3).d
int32_t rax_4 = rdx_1.d & 0x80000001

if (rax_4 s< 0)
    rax_4 = ((rax_4 - 1) | 0xfffffffe) + 1

rax_4.b = rax_4 == 1
arg1[1].b = rax_4.b
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rdx_1.d)
int32_t rax_10 = (temp3 - temp2) s>> 1
int32_t rax_11 = rax_10 & 0x80000001

if (rax_11 s< 0)
    rax_11 = ((rax_11 - 1) | 0xfffffffe) + 1

rax_11.b = rax_11 == 1
arg1[2].b = rax_11.b
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(rax_10)
int32_t rax_17 = (temp5 - temp4) s>> 1
int32_t rax_18 = rax_17 & 0x80000001

if (rax_18 s< 0)
    rax_18 = ((rax_18 - 1) | 0xfffffffe) + 1

rax_18.b = rax_18 == 1
arg1[3].b = rax_18.b
int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(rax_17)
int32_t rax_24 = (temp7 - temp6) s>> 1
int32_t rax_25 = rax_24 & 0x80000001

if (rax_25 s< 0)
    rax_25 = ((rax_25 - 1) | 0xfffffffe) + 1

rax_25.b = rax_25 == 1
arg1[4].b = rax_25.b
int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(rax_24)
int32_t rax_31 = (temp9 - temp8) s>> 1
int32_t rax_32 = rax_31 & 0x80000001

if (rax_32 s< 0)
    rax_32 = ((rax_32 - 1) | 0xfffffffe) + 1

rax_32.b = rax_32 == 1
arg1[5].b = rax_32.b
int32_t temp10
int32_t temp11
temp10:temp11 = sx.q(rax_31)
int32_t rax_38 = (temp11 - temp10) s>> 1
int32_t rcx_5 = rax_38 & 0x80000001

if (rcx_5 s< 0)
    rcx_5 = ((rcx_5 - 1) | 0xfffffffe) + 1

int32_t temp12
int32_t temp13
temp12:temp13 = sx.q(rax_38)
rcx_5.b = rcx_5 == 1
int32_t rax_41 = (temp13 - temp12) s>> 1
arg1[6].b = rcx_5.b
uint64_t rdx_9 = zx.q(rax_41 s/ 3)
arg1[7] = rax_41 - (rdx_9 * 3).d
int32_t rdx_10 = rdx_9.d & 0x80000001

if (rdx_10 s< 0)
    rdx_10 = ((rdx_10 - 1) | 0xfffffffe) + 1

arg1[8].b = rdx_10 == 1
return arg1
