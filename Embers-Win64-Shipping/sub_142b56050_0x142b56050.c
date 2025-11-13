// 函数: sub_142b56050
// 地址: 0x142b56050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x50)
int32_t result = 0

if (rdx != 0)
    result = *(rdx + 8)

int64_t rcx = *(arg1 + 0x58)

if (rcx == 0)
    return result

return result + *(rcx + 8)
