// 函数: sub_142c9d7d0
// 地址: 0x142c9d7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
void* rbx = *(arg2 + 0xc0)
*(rbx + 0x30) = *(arg2 + 0x30)
sub_14058f370(rbx, *(arg2 + 0x48), "Fail to sample frame", 0)

if (*(rbx + 0x148) == 0)
    *(rbx + 0x148) = 1
    sub_140591950(rbx, *(arg2 + 0xc8))
    *(rbx + 0x148) = 0

return 0
