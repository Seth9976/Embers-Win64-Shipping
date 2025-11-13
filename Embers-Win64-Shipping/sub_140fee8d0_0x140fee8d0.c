// 函数: sub_140fee8d0
// 地址: 0x140fee8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (*(data_143e2b950 + 4) == 0)
    result.b = 0
else if (sub_1419767f0().b != 0)
    result.b = 1
else if (sub_1419767d0().b != 0)
    result.b = 1
else if (sub_1419767e0().b == 0)
    result.b = 0
else
    result.b = 1

*(arg1 + 0x17f19) = result.b

if (result.b != 0)
    *(arg1 + 0x17f1c) = 1

return result
