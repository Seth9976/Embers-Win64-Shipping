// 函数: sub_141ccde80
// 地址: 0x141ccde80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = **(arg1 + 0x248)

if (rdx == 0)
    return 0

int64_t rcx = *(arg1 + 0x248)
int64_t result = *(rdx + 8)
*(arg1 + 0x248) = rdx
*(rdx + 8) = 0
j_sub_140a74f90(rcx)
return result
