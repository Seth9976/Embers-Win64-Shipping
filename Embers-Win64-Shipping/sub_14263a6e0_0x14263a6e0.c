// 函数: sub_14263a6e0
// 地址: 0x14263a6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != *(arg1 + 0x38) && arg2 != arg1 - 0x28)
    return 0

if (*(arg1 + 0x28) != 0 && sub_140d3e110(arg1 + 0x20) != 0)
    jump(*(**(arg1 + 0x28) + 0x20))

void* result = sub_140d3c6e0(arg1 + 0x30)

if (result == 0)
    return result

jump(*(*(result + 0xb0) + 0x20))
