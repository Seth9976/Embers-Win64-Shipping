// 函数: sub_140d80130
// 地址: 0x140d80130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 8)
int64_t* rcx = *(result + 0x40)

if (rcx == 0)
    return result

jump(*(*rcx + 0x20))
