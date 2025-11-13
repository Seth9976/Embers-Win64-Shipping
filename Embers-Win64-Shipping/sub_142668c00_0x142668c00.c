// 函数: sub_142668c00
// 地址: 0x142668c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140d3a3a0(arg1 + 0x50, arg2)

if (arg2 == 0)
    *(arg1 + 0x58) = 0
    return rax

void* rax_2 = sub_140d21950(arg2, sub_142548ca0())
*(arg1 + 0x58) = rax_2
return rax_2
