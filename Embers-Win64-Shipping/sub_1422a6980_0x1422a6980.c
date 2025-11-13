// 函数: sub_1422a6980
// 地址: 0x1422a6980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdx = (*(arg1 + 0x2c)).b
int32_t result

if ((rdx & 0x10) != 0 && (*(arg1 + 0x28) & 0x6000000) == 0x6000000 && (rdx & 0x20) != 0)
    result.b = 0
    return result

result.b = 1
return result
