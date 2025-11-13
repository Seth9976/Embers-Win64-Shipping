// 函数: sub_14074c7f0
// 地址: 0x14074c7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const result

if (*(arg1 + 0x18) != 1)
    result = nullptr
else
    result = *(arg1 + 0x10)

int64_t* rcx = *(result + 0x118)

if (rcx != 0)
    jump(*(*rcx + 0x2e0))

result.b = 0
return result
