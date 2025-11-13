// 函数: sub_142390320
// 地址: 0x142390320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
*arg2 = 0
*(arg2 + 2) = 0
*(arg2 + 0xa) = 0
*(arg2 + 0xe) = 0
*(arg2 + 2) |= 1
arg2[1].d |= 0x80
char rax = sub_1422a6b20(arg1, arg3)
int32_t rcx

if (rax != 0)
    rcx = 4

if (rax == 0 || (*(*arg3 + 0x2c) & 0x80) == 0)
    rcx = 0

int32_t rax_4 = (arg2[1].d & 0xfffffffb) | rcx
arg2[1].d = rax_4
int32_t rcx_5 = ((zx.d(*(arg1 + 0x3c)) u>> 1 ^ rax_4) & 0x20) ^ rax_4
arg2[1].d = rcx_5
int32_t rax_7 = (zx.d(*(arg1 + 0x37)) & 0xffffff80) | (rcx_5 & 0xffffff7f)
int32_t rcx_7 = 0
arg2[1].d = rax_7

if (*(arg1 + 0x3f) != 1)
    rcx_7 = 0x1000

int32_t rcx_8 = rcx_7 | (rax_7 & 0xffffefff)
arg2[1].d = rcx_8
arg2[1].d = ((zx.d(*(arg1 + 0x39)) << 8 ^ rcx_8) & 0x2000) ^ rcx_8

if (data_143f552a4 == 0 || (*(arg1 + 0x37) & 8) == 0)
    if ((*(arg1 + 0x36) & 4) != 0 || (*(arg1 + 0x38) & 0x10) != 0)
        arg2[1].d |= 2
    else
        arg2[1].d |= 1
else if (*(arg1 + 0x38) s>= 0 || (*(arg1 + 0x36) & 4) != 0 || (*(arg1 + 0x38) & 0x10) != 0)
    arg2[1].d |= 2
else
    arg2[1].d |= 1

char rax_14 = sub_1422a69b0(arg1, arg3)
arg2[1].d &= 0xfffffff7
arg2[1].d |= zx.d(rax_14) << 3
sub_142131b60(arg1 + 0x630, arg2)
int32_t rax_18

if (*(arg1 + 0x32) - 1 u<= 1 && (*(arg2 + 2) & 1) != 0)
    rax_18 = arg2[1].d

if (*(arg1 + 0x32) - 1 u> 1 || (*(arg2 + 2) & 1) == 0 || rax_18.b s>= 0)
    rax_18 = arg2[1].d
else
    rsi = 0x10

arg2[1].d = (rax_18 & 0xffffffef) | rsi
return arg2
