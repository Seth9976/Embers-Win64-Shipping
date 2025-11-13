// 函数: sub_1427fd130
// 地址: 0x1427fd130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = arg1 + 0x18

if (arg1 == 0)
    r9 = nullptr

int64_t result = (*(*arg2 + 0xf0))(arg2, arg3, arg4, r9, &data_143b7c0f0, 0x90)
*(arg1 + 0x60) = result
result.b = result != 0
return result
