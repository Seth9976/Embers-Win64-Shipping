// 函数: sub_1427088c0
// 地址: 0x1427088c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = nullptr

if (*(arg1 + 0x7b) != 0)
    rsi = sub_1426d7f70(arg3)

uint64_t result = sub_140d3c6e0(arg3 + 0x34)

if (rsi != 0 && result != 0 && *(arg1 + 0x7b) == 1)
    result = sub_1426e8ce0(rsi, result, arg1 + 0x50, arg2, 1)

if (*(arg1 + 0x7b) != 2)
    return result

return sub_1426e9640(*(arg3 + 0x58), arg1 + 0x50, arg2, 1)
