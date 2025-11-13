// 函数: sub_141c88b90
// 地址: 0x141c88b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x78)

if (rcx != 0)
    (*(*rcx + 8))(rcx, arg2)
    return arg2

*arg2 = *(arg1 + 0x58)
void* rax_3 = *(arg1 + 0x60)
arg2[1] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

return arg2
