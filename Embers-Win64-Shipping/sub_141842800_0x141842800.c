// 函数: sub_141842800
// 地址: 0x141842800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == arg1)
    int64_t rax
    rax.b = 0
    return rax

void* rax_2 = (*(*arg2 + 0x1c8))(arg2, arg3)
int64_t r8 = *arg1
uint64_t rax_3 = (*(r8 + 0x1c8))(arg1, arg3, r8)

if (rax_2 != 0 && rax_3 != 0 && *(rax_2 + 0x20) == *(rax_3 + 0x20)
        && *(rax_2 + 0x28) == *(rax_3 + 0x28) && *(rax_2 + 0x30) == *(rax_3 + 0x30))
    rax_3.b = 0
    return rax_3

rax_3.b = 1
return rax_3
