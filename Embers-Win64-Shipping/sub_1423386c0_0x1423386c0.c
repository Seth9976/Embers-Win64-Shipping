// 函数: sub_1423386c0
// 地址: 0x1423386c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = *(arg1 + 0x188)
int64_t r8 = *(arg1 + 0x180)

if (rax_1 != 0)
    *(rax_1 + 0xc) += 1

*arg2 = r8
arg2[1] = rax_1
return arg2
