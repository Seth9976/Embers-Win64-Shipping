// 函数: sub_140bc8830
// 地址: 0x140bc8830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_2 = *(arg1 + 0x10)
int64_t result = *(rax_2 + 0x10)

if (*(rax_2 + 0x63) != 0 && result != 0)
    return 0

*(rax_2 + 0x10) = 0
return result
