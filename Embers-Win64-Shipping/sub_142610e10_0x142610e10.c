// 函数: sub_142610e10
// 地址: 0x142610e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r10 = (*(arg1 + 0xa0)).b
int64_t rbx_2 = ((1 << (*(arg1 + 0x9c)).b) - 1) & zx.q((arg2 u>> r10).d)
*arg3 = rbx_2 * 0xb0 + *(arg1 + 0x90)
int64_t result = *(arg1 + 0x90)
*arg4 = ((zx.q((1 << r10).d - 1) & zx.q(arg2.d)) << 5) + *(rbx_2 * 0xb0 + result + 0x10)
return result
