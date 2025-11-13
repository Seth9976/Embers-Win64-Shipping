// 函数: sub_140d05300
// 地址: 0x140d05300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax_1 = zx.q(*(arg1 + 0x79))
char* rcx = rax_1 + arg2

if (arg3 != 0)
    return (*(arg1 + 0x7b) & (*rcx ^ *(rax_1 + arg3))) == 0

int64_t result
result.b = (*(arg1 + 0x7b) & *rcx) == 0
return result
