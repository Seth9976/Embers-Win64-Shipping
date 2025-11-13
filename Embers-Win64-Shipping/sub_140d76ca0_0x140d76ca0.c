// 函数: sub_140d76ca0
// 地址: 0x140d76ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 8)
int64_t* rcx = *(result + 0x70)

if (rcx != 0 && *(result + 0x58) != 0)
    jump(*(*rcx + 0x38))

return result
