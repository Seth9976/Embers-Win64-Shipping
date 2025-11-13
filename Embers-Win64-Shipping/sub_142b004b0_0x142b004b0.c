// 函数: sub_142b004b0
// 地址: 0x142b004b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x38) & 0xf

if (rax == 0)
    return "UTF-16"

if (rax == 1)
    return "UTF-16,version=1"

return "UTF-16,version=2"
