// 函数: sub_142a24f90
// 地址: 0x142a24f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = 0
int32_t i = (arg1 + 7) s>> 3

if (i s> 0x40)
    do
        rcx += 1
    while (0x40 << rcx.b s< i)

*arg2 = rcx
int32_t i_1 = i & 0xfffffffe
int32_t rcx_1 = 1

if (i_1 s>= 8)
    do
        rcx_1 += 1
        i_1 = i s>> rcx_1.b
    while (i_1 s>= 4)

*arg3 = rcx_1 - 1
return i_1
