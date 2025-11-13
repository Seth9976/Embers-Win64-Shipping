// 函数: sub_141ccde20
// 地址: 0x141ccde20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = **(arg1 + 0x238)

if (rdx == 0)
    return 0

int64_t rcx = *(arg1 + 0x238)
int64_t result = *(rdx + 8)
*(arg1 + 0x238) = rdx
*(rdx + 8) = 0
j_sub_140a74f90(rcx)
return result
