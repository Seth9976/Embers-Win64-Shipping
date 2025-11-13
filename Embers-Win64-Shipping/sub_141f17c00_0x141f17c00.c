// 函数: sub_141f17c00
// 地址: 0x141f17c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0xb0)

if (rax != 0)
    return sub_141f3cbf0(rax) __tailcall

void* rax_2 = *(arg1 + 0xa8)

if (rax_2 == 0)
    rax_2 = sub_141ee69e0(arg1)

int64_t result = *(rax_2 + 0x100)

if (result != 0)
    return result

return sub_14243ab60(rax_2)
