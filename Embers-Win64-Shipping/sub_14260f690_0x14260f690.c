// 函数: sub_14260f690
// 地址: 0x14260f690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 0

char r8 = (*(arg1 + 0xa0)).b
int64_t rax_1
int64_t rdx
rdx:rax_1 = muls.dp.q(0x2e8ba2e8ba2e8ba3, arg2 - *(arg1 + 0x90))
int64_t rdx_1 = rdx s>> 5
return zx.q((rdx_1 u>> 0x3f).d + rdx_1.d) << r8 | zx.q(*arg2) << ((*(arg1 + 0x9c)).b + r8)
