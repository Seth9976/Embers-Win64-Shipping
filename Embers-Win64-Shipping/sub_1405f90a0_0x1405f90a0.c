// 函数: sub_1405f90a0
// 地址: 0x1405f90a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

PROPVARIANT pvar
__builtin_memset(&pvar, 0, 0x18)
int32_t rax_1 = (*(*arg1 + 0x120))(arg1, &pvar)
int32_t rbx = rax_1

if (rax_1 s>= 0)
    if (pvar...w == 0xd)
        int64_t* rcx = pvar...__offset(0x8).q
        rbx = (**rcx)(rcx, &data_142d602e8, arg2)
    else
        rbx = -0x7fff0001

PropVariantClear(&pvar)
return zx.q(rbx)
