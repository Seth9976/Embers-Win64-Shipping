// 函数: sub_1405f3560
// 地址: 0x1405f3560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

PROPVARIANT pvar
__builtin_memset(&pvar, 0, 0x18)
int32_t rax_1 = (*(*arg1 + 0x18))(arg1, arg3, &pvar)

if (rax_1 s< 0)
    return rax_1

int32_t rax_3 = (*(*arg2 + 0x90))(arg2, arg3, &pvar)
PropVariantClear(&pvar)
return rax_3
