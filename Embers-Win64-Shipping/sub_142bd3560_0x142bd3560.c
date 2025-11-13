// 函数: sub_142bd3560
// 地址: 0x142bd3560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi_1 = sub_142b93e80(arg1[0x919].d, arg4) + sub_142b93e80(*(arg1 + 0x48cc), arg5)
int32_t rax_2 = sub_142bd4a40(arg2, arg5)
*arg3 =
    sub_142b93e80(*(*arg1 + 0x4c), rax_2) + sub_142b93e80(*(*arg1 + 0x44), rsi_1) + *(arg1 + 0x48d4)
int32_t rax_6 = sub_142b93e80(*(*arg1 + 0x50), rax_2)
int32_t result = sub_142b93e80(*(*arg1 + 0x48), rsi_1)
arg3[1] = rax_6 + result + arg1[0x91b].d
return result
