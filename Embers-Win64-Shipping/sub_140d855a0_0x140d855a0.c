// 函数: sub_140d855a0
// 地址: 0x140d855a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 - 8)
int32_t result = rax - 1
*(arg1 - 8) = result

if (rax != 1)
    return result

(**(arg1 - 0x28))(arg2, 1)
return 0
