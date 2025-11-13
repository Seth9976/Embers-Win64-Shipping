// 函数: sub_1411c7af0
// 地址: 0x1411c7af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdx_1 = zx.q(arg2 s/ 3)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rdx_1.d)
int32_t rdx_3 = temp2 & 3
int32_t rax_2 = temp3 + rdx_3
*arg1 = arg2 - (rdx_1 * 3).d
int32_t r8_4 = rax_2 s>> 2
arg1[1] = (rax_2 & 3) - rdx_3
int32_t rcx_1 = r8_4 & 0x80000001

if (rcx_1 s< 0)
    rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1

arg1[2] = rcx_1
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(r8_4)
int32_t rax_8 = (temp5 - temp4) s>> 1
int32_t rcx_5 = rax_8 & 0x80000001

if (rcx_5 s< 0)
    rcx_5 = ((rcx_5 - 1) | 0xfffffffe) + 1

int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(rax_8)
arg1[3] = rcx_5
int32_t r9_1 = 8
int32_t temp8
int32_t temp9
temp8:temp9 = sx.q((temp7 - temp6) s>> 1)
int32_t rdx_7 = temp8 & 3
int32_t rax_13 = temp9 + rdx_7
int32_t rax_15 = (rax_13 & 3) - rdx_7
int32_t r11_1 = rax_13 s>> 2
int32_t rax_16

if (rax_15 == 3)
    rax_16 = 0
else if (rax_15 == 2)
    rax_16 = 8
else if (rax_15 != 1)
    rax_16 = 0x20
    
    if (rax_15 != 0)
        rax_16 = 0
else
    rax_16 = rax_15 + 0xf

arg1[4] = rax_16
int32_t rcx_10 = r11_1 & 0x80000001

if (rcx_10 s< 0)
    rcx_10 = ((rcx_10 - 1) | 0xfffffffe) + 1

arg1[5] = rcx_10
int32_t temp10
int32_t temp11
temp10:temp11 = sx.q(r11_1)
int32_t rax_21 = (temp11 - temp10) s>> 1 & 0x80000001

if (rax_21 s< 0)
    rax_21 = ((rax_21 - 1) | 0xfffffffe) + 1

if (rax_21 == 1)
    arg1[6] = 4
    return arg1

if (rax_21 != 0)
    r9_1 = 0

arg1[6] = r9_1
return arg1
