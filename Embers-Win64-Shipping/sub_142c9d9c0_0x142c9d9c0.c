// 函数: sub_142c9d9c0
// 地址: 0x142c9d9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
void* rbx = *(arg2 + 0x50)
sub_14058f370(rbx, *(arg2 + 0x28), "Fail to stop video record", 0)

if (*(rbx + 0x148) == 0)
    *(rbx + 0x148) = 2
    sub_1405920e0(rbx)
    *(rbx + 0x148) = 0

return 0
