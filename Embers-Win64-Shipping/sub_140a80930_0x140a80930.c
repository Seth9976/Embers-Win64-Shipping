// 函数: sub_140a80930
// 地址: 0x140a80930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == *(arg1 + 0x18))
    int64_t rax
    rax.b = 1
    return rax

int64_t* rcx = *(arg1 + 8)
char rax_2 = (*(*rcx + 0x10))(rcx)

if (rax_2 != 0)
    *(arg1 + 0x18) = arg2

return rax_2
