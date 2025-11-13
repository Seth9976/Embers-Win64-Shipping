// 函数: sub_140b65cb0
// 地址: 0x140b65cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t bManualReset = zx.d(arg2)
HANDLE result = CreateEventW(nullptr, bManualReset, 0, nullptr)
*(arg1 + 0x10) = result
*(arg1 + 0x18) = bManualReset.b
result.b = result != 0
return result
