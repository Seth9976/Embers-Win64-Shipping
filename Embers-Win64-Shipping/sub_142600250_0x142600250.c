// 函数: sub_142600250
// 地址: 0x142600250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x80)
*(arg1 + 0x6c) = arg2
int64_t* rcx = *(result + 0x30)

if (rcx == 0)
    return result

jump(*(*rcx + 0x70))
