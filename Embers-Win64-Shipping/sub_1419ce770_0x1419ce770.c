// 函数: sub_1419ce770
// 地址: 0x1419ce770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x24)
int32_t result = (*(arg1 + 0x20) * *(arg1 + 0x1c)) << 2

if (rdx == 0)
    return result

return ((result + 0xf) & 0xfffffff0) * rdx
