// 函数: sub_142b4a910
// 地址: 0x142b4a910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg2 + 0x190)
int32_t rax_2

if (rax s< 0)
    rax_2 = *(arg2 + 0x194)
else
    rax_2 = sx.d(rax) s>> 5

int32_t rdx

if (rax_2 s<= 0)
    rdx = 0x20
else
    rdx = sub_142a486d0(arg2 + 0x188, 0)

int32_t rcx_1

if (*(arg2 + 0x180) == 0)
    rcx_1 = *(arg2 + 0x184)
else
    rcx_1 = 0

*arg1 = *(arg2 + 0x44)
arg1[1] = rdx
arg1[2] = rcx_1
return arg1
