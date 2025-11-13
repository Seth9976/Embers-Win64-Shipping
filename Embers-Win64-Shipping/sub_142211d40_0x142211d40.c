// 函数: sub_142211d40
// 地址: 0x142211d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float* rcx_1

if (**arg1 == 0)
    rcx_1 = arg1[1]
else
    float zmm0_1 = sub_14226dec0(arg2)
    rcx_1 = arg1[1]
    float* rax_1 = arg1[2]
    *rcx_1 = zmm0_1 + *rcx_1
    *rax_1 = zmm0_1 * 57.2957764f + *rax_1

return sub_142279890(arg2, *rcx_1) __tailcall
