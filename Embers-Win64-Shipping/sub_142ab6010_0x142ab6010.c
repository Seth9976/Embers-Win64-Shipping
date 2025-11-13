// 函数: sub_142ab6010
// 地址: 0x142ab6010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &icu_64::MeasureUnit::`vftable'{for `icu_64::UObject'}
arg1[1].d = *(arg2 + 8)
*(arg1 + 0xc) = *(arg2 + 0xc)
void* rax_2 = arg2 + 0x10
char* rdx_1 = &arg1[2] - rax_2
char i

do
    i = *rax_2
    *(rdx_1 + rax_2) = i
    rax_2 += 1
while (i != 0)
return arg1
